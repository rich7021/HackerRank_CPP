#include "ExcutionDefine.h"
#ifdef RUN_APPLE_AND_ORNAGE

#include <iostream>
using namespace std;

int countItem(int d, int pivot, int start, int end) {
    int pos;
    pos = d + pivot;
    if (start <= pos && pos <= end) {
        return 1;
    }
    return 0;
}

int main() {
    int apple = 0;
    int orange = 0;

    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    
    for (int apple_i = 0; apple_i < m; apple_i++) {
        int d;
        cin >> d;
        apple += countItem(d, a, s, t);
    }
    

    for (int orange_i = 0; orange_i < n; orange_i++) {
        int d;
        cin >> d;
        orange += countItem(d, b, s, t);
    }
    
    cout << apple << endl;
    cout << orange << endl;
    return 0;
}

#endif