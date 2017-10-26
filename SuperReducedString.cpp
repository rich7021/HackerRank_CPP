#include "ExcutionDefine.h"
#ifdef RUN_SUPER_REDUCED_STRING


#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s) {
    int flag = 0;
    string result;
    for (int i = 0; i < s.length(); i++) {
        // if char i not equals i+1, or is the last char, preserve them
        if (i == s.length() - 1 || s.at(i) != s.at(i + 1)) {
            result += s.at(i);
        } else {
            flag = 1; 
            i++;
        }
    }
    
    // the string is not processed, means it is final result
    if (flag == 0) {
        return result;
    }
    return (result.empty()) ? "Empty String" : super_reduced_string(result);
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}



#endif

