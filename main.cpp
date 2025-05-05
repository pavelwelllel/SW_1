#include "SW_1.h"
#include <iostream>

int main() {
    // Тестирование задания 1
    std::cout << "Testing CountSimilarBytes:\n";
    long long int test1[] = {
        0x0101010202030408,
        0x0101010202020208,
        0x0102030405060708,
        0x0101010101010101,
        0xFFFFFF00000000FF
    };
    
    for (auto num : test1) {
        std::cout << "0x" << std::hex << num << ": " 
                  << std::dec << CountSimilarBytes(num) << "\n";
    }

    // Тестирование задания 2
    std::cout << "\nTesting SwapBytes:\n";
    unsigned short test2[] = {0x0102, 0xFF01};
    for (auto num : test2) {
        std::cout << "Before: 0x" << std::hex << num;
        SwapBytes(&num);
        std::cout << " After: 0x" << num << "\n";
    }

    // Тестирование задания 3
    std::cout << "\nTesting FindMaxByte:\n";
    unsigned int test3_1[] = {0x01020109, 0x07890909, 0x8899AABB};
    unsigned int test3_2[] = {2291772091, 16908553, 126421257, 382091489};
    
    std::cout << "Test array 1: " << std::hex << (int)FindMaxByte(test3_1, 3) << "\n";
    std::cout << "Test array 2: " << std::hex << (int)FindMaxByte(test3_2, 4) << "\n";

    return 0;
}
