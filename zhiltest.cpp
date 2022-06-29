#include <iostream>
#include <cstdio>

int main() {
    int a = 5;      // 0101
    int b = 6;      // 0110
    int c = a ^ b;  // 0011 = 3
    int d = 7;      // 0111 = 7
    int e = c ^ d;  // 0100 = 4
    printf("a=%d, b=%d, c=%d, d=%d, e=%d\n", a, b, c, d, e);

    return 0;
}