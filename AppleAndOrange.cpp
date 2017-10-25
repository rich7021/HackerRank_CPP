#include "ExcutionDefine.h"
#ifdef RUN_APPLE_AND_ORNAGE

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int countItem(int d, int pivot, int start, int end) {
    int pos;
    pos = d + pivot;
    cout << "d=" << d << " pivot=" << pivot << " result=" << pos << endl;
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
    cout << endl;
    
    for (int apple_i = 0; apple_i < m; apple_i++) {
        int d;
        cin >> d;
        cout << "Apple: " << apple << " > ";
        apple += countItem(d, a, s, t);
        cout << apple << endl;
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