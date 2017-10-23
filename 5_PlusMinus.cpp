#include "ExcutionDefine.h"
#ifdef RUN_PLUS_MINUS

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    double positive = 0;
    double negative = 0;
    double zero = 0;
    
    for (int arr_i = 0; arr_i < n; arr_i++) {
        int val;
        cin >> val;
        if(val > 0) { positive++; }
        if(val < 0) { negative++; }
        if(val == 0) { zero++; }
    }

    printf("%.6f\n%.6f\n%.6f\n", positive / (double)n, negative / (double)n, zero / (double)n);

    return 0;
}

#endif