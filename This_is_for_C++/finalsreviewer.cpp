#include <iostream>

int fibonacci(int a, int b, int n) {
    if (n == 0) {
        return a;
    } else if (n == 1) {
        return b;
    } else {
        return fibonacci(b, a + b, n - 1);
    }
}

int main() {
    int first, second, count;

    std::cout << "Enter the first number: ";
    std::cin >> first;

    std::cout << "Enter the second number: ";
    std::cin >> second;

    std::cout << "Enter the count of Fibonacci numbers: ";
    std::cin >> count;

    if (count < 2) {
        std::cout << "Invalid input. Please enter a count greater than or equal to 2." << std::endl;
        return 1;
    }

    std::cout << "Fibonacci sequence:" << std::endl;

    for (int i = 0; i < count; ++i) {
        std::cout << fibonacci(first, second, i) << " ";
    }

    std::cout << std::endl;

    return 0;
}