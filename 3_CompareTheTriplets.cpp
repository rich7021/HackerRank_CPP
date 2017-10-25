#include "ExcutionDefine.h"
#ifdef RUN_COMPARE_THE_TRIPLETS

#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    vector<int> arr(2);
    
    if (a0 > b0) { arr[0]++; } else if (a0 < b0) { arr[1]++; }
    if (a1 > b1) { arr[0]++; } else if (a1 < b1) { arr[1]++; }
    if (a2 > b2) { arr[0]++; } else if (a2 < b2) { arr[1]++; }
    
    return arr;
}

int main() {
    int a_score = 0;
    int b_score = 0;
    vector<int> a_trip(3);
    vector<int> b_trip(3);
    
    for(int i = 0 ; i < 3 ; i++) {
        cin >> a_trip[i];
    }
    for(int i = 0 ; i < 3 ; i++) {
        cin >> b_trip[i];
    }
    
    for(int i = 0 ; i < a_trip.size() ; i++ ) {
        if (a_trip[i] > b_trip[i]) { a_score++; }
        if (a_trip[i] < b_trip[i]) { b_score++; }
    }
   
    cout << a_score << " " << b_score ;

    return 0;
}


#endif