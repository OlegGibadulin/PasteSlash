cmake_minimum_required(VERSION 3.14)
project(applayer C CXX)

set(CMAKE_CXX_STANDARD 17)

install(SCRIPT ${CMAKE_SOURCE_DIR}/cmake/vcpkg.cmake)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

option(BUILD_TESTS "build tests" OFF)

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED TRUE)

find_package(Boost 1.68.0 COMPONENTS system filesystem REQUIRED)
find_package(Protobuf REQUIRED)
find_package(gRPC CONFIG REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})

# Генерирует список файлов, соответствуюших выражению *.cpp и помещает его в перменную sources
file(GLOB_RECURSE sources ${PROJECT_SOURCE_DIR}/src/*.cpp)
set(TOOLS-SRC tools/converter/GRPCConverter.cpp
              tools/gen/AppLayer.pb.cc tools/gen/AppLayer.grpc.pb.cc
              tools/tcpclient/TCPClient.cpp)

add_executable(applayer main.cpp ${sources} ${TOOLS-SRC})

target_link_libraries(applayer PUBLIC ${Boost_LIBRARIES} gRPC::gpr gRPC::grpc gRPC::grpc++ gRPC::grpc++_alts)
target_link_libraries(applayer PUBLIC dbAPI)

target_include_directories(applayer PUBLIC ${CMAKE_SOURCE_DIR}/database/include)
target_include_directories(applayer PRIVATE inc/)
target_include_directories(applayer PRIVATE tools/)

if (BUILD_TESTS)
    # gtest settings

    # Конфигурирует CMakeLists.txt для тестов
    # Фактически копирует содержимое .in в указанный файл
    configure_file(CMakeLists.txt.in gtest/googletest-download/CMakeLists.txt)

    # Выполнить команду cmake с указанным генератором Makefile (ключ -G) в указанной WORKING_DIRECTORY
    execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
            WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/gtest/googletest-download)

    # Выполнить команду cmake c ключом --build
    execute_process(COMMAND ${CMAKE_COMMAND} --build .
            WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/gtest/googletest-download)

    # Добавить поддиректории к текущему проекту
    add_subdirectory(${CMAKE_BINARY_DIR}/gtest/googletest-src ${CMAKE_BINARY_DIR}/gtest/googletest-build)

    # test_sources со всеми cpp файлами из tests
    file(GLOB tests_sources ${PROJECT_SOURCE_DIR}/tests/*.cpp)

    # Бинарник test, собранный на основе файлов тестов и файлов исходников, которые мы тестируем
    add_executable(test ${tests_sources} ${sources} tests/handlersTests.cpp)

    target_link_libraries(test gtest_main gmock_main)

    target_include_directories(test PRIVATE .)
endif()
