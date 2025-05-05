#ifndef SW_1_H
#define SW_1_H

// Для size_t в C++
#include <stddef.h>

// Задание 1: Подсчет максимального количества одинаковых байт (исключая 0x00 и 0xFF)
int CountSimilarBytes(long long int num);

// Задание 2: Перестановка байт в unsigned short
void SwapBytes(unsigned short* byte);

// Задание 3: Поиск байта с максимальным значением в массиве
unsigned char FindMaxByte(const unsigned int* ar, size_t size);

#endif // DZ1_H
