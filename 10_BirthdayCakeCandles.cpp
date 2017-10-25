#include "ExcutionDefine.h"
#ifdef RUN_BIRTHDAY_CAKE_CANDLES

#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    int count = 0;
    vector<int>::iterator it = std::max_element(ar.begin(), ar.end());
    int maxAt = std::distance(ar.begin(), it);
    int max = ar[maxAt];
    for ( int i = 0 ; i < ar.size() ; i++ ) {
        if (ar[i] == max ) { count++; }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}

#endif