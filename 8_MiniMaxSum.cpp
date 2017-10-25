/**
 * careful! this issue sholud using long to handle with big int problem
 */


#include "ExcutionDefine.h"
#ifdef RUN_MINI_MAX_SUM

#include <bits/stdc++.h>

using namespace std;

struct sortingClass{
    bool operator() (int i, int j) { return i < j; }
} compareObject;

int main() {
    long max = LONG_MIN;
    long min = LONG_MAX;
    long sum = 0;
    
    for(int i = 0; i < 5; i++){
        int t = 0;
       cin >> t;
       if (t > max) { max = t; }
       if (t < min) { min = t; }
       sum += t;
    }
    
    cout << sum - max << " " << sum - min;
    
    return 0;
}


#endif