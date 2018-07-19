#include <bits/stdc++.h>

using namespace std;

long getMaxScore(vector < long > a){
    int n = a.size();
    long rs = 0, s = 0;
    for(int i = n-1; i>= 0; i--){
        s = s + rs%a[i];
        rs += a[i];
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    vector<long> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    long maxScore = getMaxScore(a);
    cout << maxScore << endl;
    return 0;
}

