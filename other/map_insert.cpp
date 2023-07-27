#include <map>
#include <iostream>

int main() {

    std::map<int, int> m;
    m[0] = 11;
    if (!m.insert(std::make_pair(0, 12)).second) {
        std::cout << "failed to insert" << std::endl;
    };
    m.insert(std::make_pair(1, 12));
    if (m.emplace(0, 14).second == false ) {
        std::cout << "emplace failed" << std::endl;

    };

   for(auto const& e: m) {
       std::cout << e.first << " " << e.second << std::endl;
   };

    return 0;

}