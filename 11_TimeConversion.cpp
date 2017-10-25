#include "ExcutionDefine.h"
#ifdef RUN_TIME_CONVERSION

#include <bits/stdc++.h>
#include <string>

using namespace std;

string timeConversion(string str) {
    int h = stoi(str.substr(0,2));
    int m = stoi(str.substr(3,5));
    int s = stoi(str.substr(6,8));
    int p = (str.substr(8,10).compare("AM") == 0) ? 1 : 0;
    
    if(p == 1 && h == 12) { h = 0; }// 12:00:00AM -> 00:00:00
    if(p == 0 && h == 24) { h = 0; }// 24:00:00PM -> 00:00:00
    if (p == 0 && h < 12) { h += 12; };
    
    char buff[100];
    snprintf(buff, sizeof(buff), "%02d:%02d:%02d", h, m, s);
    string result = buff;

    return result;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}


#endif