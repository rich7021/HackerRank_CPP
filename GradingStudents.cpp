#include "ExcutionDefine.h"
#ifdef RUN_GRADING_STUDENTS


#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    // Complete this function
    for ( int i = 0 ; i < grades.size() ; i++ ) {
        if(grades[i] < 38) {continue;}
        
        int n = grades[i] / 5;
        int d = grades[i] % 5;
        if (d >= 3) { grades[i] = 5 * (n + 1); }
    }
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}



#endif