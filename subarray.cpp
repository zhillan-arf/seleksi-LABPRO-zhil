#include <iostream>
#include <bits/stdc++.h>

int getIdxL(int* arr, int N, int i) {
    int ret;
    for(int j=0; j<N; j++) {if (arr[j]==i) {ret=j; break;}}
    return ret;
}

int getIdxR(int* arr, int N, int i) {
    int ret=69;
    for(int j=6; j>=0; j=j-1) {if (arr[j]==i) {ret=j; break;}}
    return ret;
}

int getMinLen(int *arr, int N, int i) {
    return (getIdxR(arr, N, i) - getIdxL(arr, N, i) + 1);
}

int main () {
    int N, deg;
    std::cin >> N;
    int nArr[51], arr[N];
    for (int i=1; i<51; i++) nArr[i]=0;
    for (int i=1; i<=N; i++) {
        int inp;
        std::cin >> inp;
        nArr[inp]++;
        arr[i-1] = inp;
    }

    int minLen=N;
    for (int i=1; i<51; i++) if (nArr[i]>deg) deg = nArr[i]; // deg get
    for (int i=1; i<51; i++) if (nArr[i]==deg) {
        int foundLen = getMinLen(arr, N, i);
        if (foundLen < minLen) minLen = foundLen;
    }

    std::cout << minLen << "\n";
}