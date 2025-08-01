#include <cassert>
#include <string>
#include <vector>

struct Food {
    std::string name;
    bool expired;
};

int main(int argc, char* argv[]) {

    std::vector<Food> food_items = {
        {"apples", false},
        {"cherries", false},
        {"onions", false}
    };

    for (Food& f: food_items) {
        f.expired = true;
    };

    for (const Food& f: food_items) {
        assert(f.expired == true);
    };

    return 0;
    
}