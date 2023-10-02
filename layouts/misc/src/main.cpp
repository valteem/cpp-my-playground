#include <message.hpp>

int main() {
    auto s = std::string("hello world");
    message::Message m = message::Message(s);
    m.Voice();

    return 0;
};