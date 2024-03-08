#include <iostream>

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size = 5;
    int* dynamicArray = new int[size];

    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i + 1;
    }

    printArray(dynamicArray, size);

    delete[] dynamicArray;

    return 0;
}