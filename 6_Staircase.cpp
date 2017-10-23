#include "ExcutionDefine.h"
#ifdef RUN_STAIRCASE

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int staircase(int n) {
    for(int i = 1 ; i <= n ; i++ ) {
        std::string s1(n - i, ' ');
        std::string s2(i, '#');
        cout << s1 << s2 << endl;
    }
    return 0;
}

int main(){
    int n = 6;
    cin >> n;
    staircase(n);
    
    return 0;
}

#endif