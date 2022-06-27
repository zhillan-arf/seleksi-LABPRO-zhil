#include <iostream>

int main() {
    int Q, L, R;
    scanf("%d", &Q);
    int resArr[Q];
    for (int i=0; i<Q; i++) {
        scanf("%d %d", &L, &R);
        int cL=L, res=L;
        while (cL<R) {cL++; res=res^cL;}
        resArr[i] = res;
    }
    for (int i=0; i<Q; i++) std::cout << resArr[i] << "\n";

    return 0;
}
