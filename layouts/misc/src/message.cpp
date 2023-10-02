#include <iostream>
#include <message.hpp>

namespace message {

Message::Message(std::string s): text(s) {};

void Message::Voice() {
    std::cout << text << std::endl;
};

}; // namespace message