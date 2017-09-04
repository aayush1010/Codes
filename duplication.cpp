#include <bits/stdc++.h>

using namespace std;

char duplication(int x){
    long n = 0 , i  = 0;
    string s = "0";
    string t ;
    char c;
    while(n < x){
        n = pow(2,i);
        i++;
    }
    int l = 1;
    while(l <= n){
        for(int i=0; i<l; i++){
            if(s[i] == '0'){
                 c = '1';
                t = t+c;
            }
            else{
                c = '0';
                t = t+c;
            }
        }
        s = s+t;
        t = "";
        l = s.length();
    }
    return s[x];
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        cin >> x;
        char result = duplication(x);
        cout << result << endl;
    }
    return 0;
}

