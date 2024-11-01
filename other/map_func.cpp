// https://stackoverflow.com/a/59461123

#include <cassert>
#include <functional>
#include <map>
#include <string>

using VoiceMap = std::map<std::string, std::function<std::string ()>>;

VoiceMap InitVoiceMap() {
    VoiceMap v;
    v.insert(std::make_pair("Dog", [](){return "Bark!";}));
    v.insert(std::make_pair("Cat", [](){return "Meow!";}));
    v.insert(std::make_pair("Duck", [](){return "Quack!";}));
    v.insert(std::make_pair("Pig", [](){return "Oink!";}));
    return v;
}

int main(int argc, char* argv[]) {

    VoiceMap v = InitVoiceMap();

    assert(v["Dog"]() == "Bark!");
    assert(v["Cat"]() == "Meow!");
    assert(v["Duck"]() == "Quack!");
    assert(v["Pig"]() == "Oink!");

    return 0;

}