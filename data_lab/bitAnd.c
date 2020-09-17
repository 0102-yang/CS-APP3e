/*
 * @Author: Yang
 * @Brief: Use '|' and '~' operators to complete x & y arithmitic.
 * @Date: 2020-09-17 08:19:23
 * @LastEditors: Yang
 * @LastEditTime: 2020-09-17 08:28:47
 * @Email: 1657375983@qq.com
 */
#include <stdio.h>

int bitAnd(int x, int y) { return ~(~x | ~y); }

// Test function:
int main() {
    printf("%d\n", bitAnd(6, 5));  // Expect answer 4

    return 0;
}