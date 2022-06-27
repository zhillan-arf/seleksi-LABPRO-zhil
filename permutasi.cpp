#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdio>

double factorial(int n) {
    return tgamma(n + 1);
}

void getOrder(int *cArr, int cN, int cM, std::string* cStr) {
    if (cN >= 1) {  // rec
        int nArr[cN-1], nM, idx1, cIdx=0, nIdx=0;
        double fac;
        fac = factorial(cN-1);
        idx1 = ceil(cM/fac);
        nM = cM-(fac*(idx1 - 1));
        *cStr += std::to_string(cArr[idx1-1]); // cctn str
        while (cIdx<cN) {
            if (cIdx != (idx1-1)) {
                nArr[nIdx] = cArr[cIdx];
                nIdx++;
            }
            cIdx++;
        }
        getOrder(nArr, cN-1, nM, cStr);
    } // else base: nothing
}

int main() {
    int Q, N, M;
    std::cin >> Q;
    std::string strArr[Q];
    for(int i = 0; i < Q; i++) {
        scanf("%d %d", &N, &M);
        int fArr[N], endArr[N];
        for (int j = 0; j < N; j++) fArr[j] = j + 1;
        strArr[i] = "";
        getOrder(fArr, N, M, &strArr[i]);
    }
    for(int i = 0; i < Q; i++) std::cout << strArr[i] << "\n";

    return 0;
}
