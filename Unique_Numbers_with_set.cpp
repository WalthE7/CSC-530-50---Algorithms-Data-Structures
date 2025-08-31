#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;
    int input;

    std::cout << "Enter numbers (end with -1): ";
    while (std::cin >> input && input != -1) {
        numbers.insert(input);
    }

    std::cout << "\nUnique numbers in ascending order:\n";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
