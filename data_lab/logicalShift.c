/*
 * @Author: Yang
 * @Brief: Shift x to the right by n, using a logical shift
 * @Date: 2020-09-17 09:12:04
 * @LastEditors: Yang
 * @LastEditTime: 2020-09-17 09:29:00
 * @Email: 1657375983@qq.com
 */
#include <stdio.h>

int logicalShift(int x, int n) {
    int mask = (((~(1 << 31)) >> n) << 1) | 1;
    x >>= n;
    return x & mask;
}

// Test function:
int main() {
    printf("%x\n", logicalShift(0x87654321, 4));
    return 0;
}