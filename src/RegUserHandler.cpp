#include "../inc/RegUserHandler.h"

void RegUserHandler::execute() {
    try {
        Application::getInstance().regUser();
    } catch(std::exception& e) {
    }
}