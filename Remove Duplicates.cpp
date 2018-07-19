#include <bits/stdc++.h>

using namespace std;

void check(int t){
    map<char,int> m;
    string s;
    if(t == 0){
        cin.ignore();
    }
    getline(cin , s);
    for(int i =0; i < s.length(); i++){
        if(m[s[i]] == 0){
            cout << s[i];
            m[s[i]]++;
        }
    }
     cout << endl;
}

int main(){
    int t;
    cin >> t;
    for(int i =0; i < t; i++){
        check(i);
    }
    return 0;
}
