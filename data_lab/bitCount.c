/*
 * @Author: Yang
 * @Brief: Returns count of number of 1's in word
 * @Date: 2020-09-17 09:30:09
 * @LastEditors: Yang
 * @LastEditTime: 2020-09-17 10:39:45
 * @Email: 1657375983@qq.com
 */
#include <stdio.h>

int my_bitCount(int x) {
    int count = 0;
    while (x != 0) {
        count += ((x & 1) ? 1 : 0);
        x >>= 1;
    }
    return count;
}

// No while version, correct version!
int bitCount(int x) {
    int mask_1 = 0x55555555;  // 0101 0101 ...
    int mask_2 = 0x33333333;  // 0011 0011 ...
    int mask_4 = 0x0f0f0f0f;  // 0000 1111 ...
    int mask_8 = 0x00ff00ff;
    int mask_16 = 0x0000ffff;

    x = (x & mask_1) + ((x >> 1) & mask_1);
    x = (x & mask_2) + ((x >> 2) & mask_2);

    x = (x + (x >> 4)) & mask_4;
    x = (x + (x >> 8)) & mask_8;
    x = (x + (x >> 16)) & mask_16;

    return x;
}

// Test function:
int main() {
    printf("%d, %d\n", bitCount(5), bitCount(7));  // Expect answer '2, 3'
    return 0;
}