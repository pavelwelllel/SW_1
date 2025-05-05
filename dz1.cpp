#include "dz1.h"
#include <algorithm> // Для std::max
#include <climits>   // Для CHAR_BIT

// Задание 1
int CountSimilarBytes(long long int num) {
    unsigned char bytes[sizeof(long long int)];
    for (size_t i = 0; i < sizeof(long long int); ++i) {
        bytes[i] = (num >> (i * 8)) & 0xFF;
    }

    int max_count = 0;
    for (size_t i = 0; i < sizeof(long long int); ++i) {
        if (bytes[i] == 0x00 || bytes[i] == 0xFF) continue;
        
        int current_count = 1;
        for (size_t j = i + 1; j < sizeof(long long int); ++j) {
            if (bytes[i] == bytes[j]) {
                current_count++;
            }
        }
        max_count = std::max(max_count, current_count);
    }

    return max_count;
}

// Задание 2
void SwapBytes(unsigned short* byte) {
    if (byte == nullptr) return;
    *byte = ((*byte & 0xFF00) >> 8) | ((*byte & 0x00FF) << 8);
}

// Задание 3
unsigned char FindMaxByte(const unsigned int* ar, size_t size) {
    if (ar == nullptr || size == 0) return 0;

    unsigned char max_byte = 0;
    for (size_t i = 0; i < size; ++i) {
        unsigned int num = ar[i];
        for (int j = 0; j < sizeof(unsigned int); ++j) {
            unsigned char current_byte = (num >> (j * 8)) & 0xFF;
            if (current_byte > max_byte) {
                max_byte = current_byte;
            }
        }
    }

    return max_byte;
}