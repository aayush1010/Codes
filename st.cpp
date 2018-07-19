#include <iostream>
#include <string.h>
#include<stdlib.h>

using namespace std;

int main(){
    string s, subs;
    int l, r, q;
    cin >> s;
    cin >> q;
    while (q--){
        cin >> l >> r;
        subs = s.substr(l-1, r-l+1);
        l = atoi(subs.c_str());
        if(l % 7 == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
