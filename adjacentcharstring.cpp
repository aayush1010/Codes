#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void check(string s, int n){
    int p = 0, i;
    int l = s.length();
    for(i = 0; i<l-1; i++){
        if((s[i] == s[i+1]) || (i != 0 && s[i] == s[i-1])){
            continue;
        }
        else{
            s[p] = s[i];
            p++;
        }
    }
    if((i != 0 && s[i] !=s[i-1]) || l == 1 ){
        s[p] = s[i];
        p++;
    }
    s.erase(p, l-p);
    if(p != n){
        check(s, p);
    }
    else{
        cout << s;
    }
}

int main(){
    string s, r;
    cin >> s;
    int l = s.length();
    check(s, l);
    //cout << r;
    return 0;
}
