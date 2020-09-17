/*
 * @Author: Yang
 * @Brief: Extract byte n from word x
 * @Date: 2020-09-17 08:30:01
 * @LastEditors: Yang
 * @LastEditTime: 2020-09-17 09:11:35
 * @Email: 1657375983@qq.com
 */
#include <stdio.h>

int getByte(int x, int n) { return (x >> (n << 3)) & 0xff; }

// Test function
int main() {
    printf("%x\n", getByte(0x12345678, 1));  // Expect 0x56
    return 0;
}