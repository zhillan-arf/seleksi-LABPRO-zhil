#include <iostream>

int main() {
    int chars[91], lNum=0, occ1[6]={'L','B','P','O','G','M'}, occ2[2]={'A','R'};
    bool isExist=true;
    std::string str;
    std::cin >> str;
    for (int i=65; i<91; i++) chars[i] = 0;
    for (char c : str) {
        chars[c]++;
    }

    while (isExist) {
        for (char c : occ1) if (chars[c]>=1) {  // loop 1
            chars[c]--;
        } else {
            isExist=false; 
            break;
        }
        if (isExist) for (char c : occ2) if (chars[c]>=2) {  // loop 2
            chars[c]--;
        } else {
            isExist=false; 
            break;
        }
        if (isExist) lNum++;
    }

    std::cout << lNum << "\n";

    return 0;
}