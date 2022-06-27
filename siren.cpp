#include <iostream>
#include <cstdio>

int main() {
    int i=0, s0=0, s1=0;
    std::string bStr;
    std::cin >> bStr;
    for (char c : bStr) {
        if (i%2==0) c=='0' ? s1++ : s0++;
        else c=='1'? s1++ : s0++;
        i++;
    }
    s0 < s1? std::cout << s0 << "\n" : std::cout << s1 << "\n";
}