#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
 {
    std::vector<std::string> names;
    std::cout << "Enter names (type 'end' to finish):\n";
    std::string input;
    while (true)
     {
        std::cout << "Name: ";
        std::getline(std::cin, input);

        if (input == "end") {
            break;
        }

        names.push_back(input);
    }

    std::sort(names.begin(), names.end());

    std::cout << "\n Sorted names in Alphabetical Order :\n";
    for (const std::string& name : names) {
        std::cout << name << "\n";
    }
    return 0;
}
