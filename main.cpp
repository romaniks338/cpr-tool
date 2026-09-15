#include <iostream>
#include <string>
#include <cstdlib>
#include <cpr/cpr.h>

void get_request() {
    std::string url;
    std::cout << "Enter site url: " << std::endl;
    std::cin >> url;

    auto request = cpr::Get(cpr::Url{url});
    std::cout << "Status code: " << request.status_code << std::endl;
}

void post_request() {
    std::string url;
    std::cout << "Enter site url: " << std::endl;
    std::cin >> url;

    auto request = cpr::Post(cpr::Url{url},
    cpr::Body{"Hello world by desocode!"});

    std::cout << "Your post request succesful sent!" << std::endl;
}

void custompost_request() {
    std::string url;
    std::string post;
    std::cout << "Enter site url: " << std::endl;
    std::cin >> url;
    std::cout << "Enter post: " << std::endl;
    std::cin >> post;

    auto request = cpr::Post(cpr::Url{url},
    cpr::Body{post});

    std::cout << "Your post request succesful sent!" << std::endl;
}

void text_request() {
    std::string url;
    std::cout << "Enter site url: " << std::endl;
    std::cin >> url;

    auto request = cpr::Get(cpr::Url{url});
    std::cout << request.text << std::endl;
}


int main() {
    while (true) {
    std::cout << "Welcome to my cpr tool!" << std::endl;
    std::cout << "1. Get request" << std::endl;
    std::cout << "2. Post request" << std::endl;
    std::cout << "3. Custom post" << std::endl;
    std::cout << "4. Text request" << std::endl;
    std::cout << "5. Exit" << std::endl;

    std::string choice;
    std::cout << "Enter your choice: " << std::endl;
    std::cin >> choice;

    if (choice == "1") {
        get_request();
    }

    else if (choice == "2") {
        post_request();
    }

    else if (choice == "3") {
        custompost_request();
    }

    else if (choice == "4") {
        text_request();
    }

    else if (choice == "5") {
        exit(0);
    }
}
}
