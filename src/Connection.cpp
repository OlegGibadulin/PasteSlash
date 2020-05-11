#include "Connection.h"

void Connection::onRead(const boost::system::error_code& e, std::size_t bytesTransferred) {
    if (e == boost::asio::error::eof) {
        std::cerr << "-connection: " << socket.remote_endpoint().address().to_string() << std::endl;
    }

    if (e) {
        return;
    }

    if (bytesTransferred > 0) {
        std::cout << buffer << " CONNECT" << std::endl;

        std::string request(buffer);
        rm.handle(request);

        write();
    }
}

void Connection::read() {
    async_read(socket, asio::buffer(buffer),
               boost::bind(&Connection::completion_condition, shared_from_this(),
                        boost::asio::placeholders::error,
                        boost::asio::placeholders::bytes_transferred),
               boost::bind(&Connection::onRead, shared_from_this(),
                        boost::asio::placeholders::error,
                        boost::asio::placeholders::bytes_transferred));

}

void Connection::write() {
    async_write(socket, asio::buffer(buffer),
                boost::bind(&Connection::onWrite, shared_from_this(), boost::asio::placeholders::error));
}
