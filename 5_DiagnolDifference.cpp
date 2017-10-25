#include "ExcutionDefine.h"
#ifdef RUN_DIAGNOL_DIFFERENCE


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int computeDiagnolDifference(int n, vector< vector<int> > a) {
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            if(i-j == 0) {
                sum1 += a[i][j];
            }
            if(i+j==(n-1)) {
                sum2 += a[i][j];
            }
        }
    }
    int sum = sum1 - sum2;
    return (sum > 0) ? sum : -sum;
}

int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    int result = computeDiagnolDifference(n, a);
    cout<<result;
    return 0;
}

#endif