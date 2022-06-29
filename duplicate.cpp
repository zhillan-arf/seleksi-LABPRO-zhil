#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int nArr[N];
    for (int i=0; i<N; i++) nArr[i] = 0;
    for (int i=0; i<N+1; i++) {
        int inp;
        std::cin >> inp;
        nArr[inp-1]++;
        if (nArr[inp-1] > 1) break;
    }
    for (int i=0; i<N; i++) if (nArr[i] > 1) {
        std::cout << i+1 << "\n";
        break;
    }
}