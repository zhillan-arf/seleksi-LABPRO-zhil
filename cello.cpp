#include <iostream>
#include <cstdio>
#include <vector>

int main() {
    int N;
    std::vector<int> trolley;
    scanf("%d", &N);
    std::string topArr[N];
    for (int i=0; i<N; i++) {
        int inp, X, Y;
        scanf("%d", &inp);
        if (inp==0) { // remove top
            if (!trolley.empty()) {
                topArr[i] = std::to_string(trolley.front());
                trolley.pop_back();
            }
        } else if (inp==1) { // add top
            int X;
            scanf("%d", &X);
            trolley.push_back(X);
        } else if (inp==2) {  // add until mid
            int X, Y;
            scanf("%d %d", &Y, &X);
            for(int j=0; j<Y; j++) trolley.at(j) += X;
        }
        (trolley.empty()) ? topArr[i] = "EMPTY" : topArr[i] = std::to_string(trolley.back());
    }
    for (int i=0; i<N; i++) {
        std::cout << topArr[i];
        if (i<N-1) std::cout << " ";
    }

    return 0;
}