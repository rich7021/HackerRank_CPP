#include "ExcutionDefine.h"
#ifdef RUN_SIMPLE_ARRAY_SUM


#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(int n, vector <int> ar) {
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = simpleArraySum(n, ar);
    cout << result << endl;
    return 0;
}
