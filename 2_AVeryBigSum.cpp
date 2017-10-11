#include "ExcutionDefine.h"
#ifdef RUN_A_VERY_BIG_SUM

#include <bits/stdc++.h>
using namespace std;

long aVeryBigSum(int n, vector <long> ar) {
    // Complete this function
    long summation = 0;
    for(int i = 0 ; i < n ; i++) {
        summation += ar[i];
    }
    return summation;
}

int main() {
    int n;
    cin >> n;
    vector<long> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    long result = aVeryBigSum(n, ar);
    cout << result << endl;
    return 0;
}
#endif
