#ifndef MESSAGE
#define MESSAGE

#include <string>

namespace message {

class Message {
    std::string text;
    public:
    Message(std::string s);
    void Voice();    
};

}; // namespace message

#endif // MESSAGE