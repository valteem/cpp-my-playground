#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {

    std::vector<std::string> food_items = {"apples", "cherries", "onions", "potatoes"};

    std::vector<std::string> old_food_items(food_items.begin() + 1, food_items.end() - 1);

    food_items.clear();

    for (const std::string& item : old_food_items) {
        std::cout << item << " ";
    }

    std::cout << std::endl;

// Swapping with an empty vector effectively releases the memory by creating a temporary,
// empty vector and swapping its contents with your existing vector.
// The temporary vector then goes out of scope, taking the old, larger allocation with it    
    std::vector<std::string>().swap(food_items);

}