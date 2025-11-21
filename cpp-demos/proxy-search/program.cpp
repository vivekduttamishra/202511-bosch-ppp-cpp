#include "search-engine.h"
#include <iostream>
using namespace std;

int main() {
    StringSearchEngine engine;
    std::string query = "dog";
    std::vector<std::string> results = engine.search(query);
    std::cout << "\033[1;31mThis text is red.\033[0m\n"; 
    for (const auto& result : results) {
        std::cout << result << std::endl;
    }
    return 0;
}