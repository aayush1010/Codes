#include<iostream>
#include<string>

using namespace std;

string check(string s){
    int l = s.length(),p;
    int c = 2;
    for(int i = 1; i < l; i++){
        if(s[i] > s[i-1]){
            p = (int)(s[i]-s[i-1]);
            c += p;
            c++;
        }
        else if(s[i] < s[i-1]){
            p = (int)(26-s[i-1]+s[i]);
            c += p;
            c++;
        }
        else{
            c++;
        }
    }
    if(c <= 11*l){
        return "YES";
    }
    return "NO";
}

int main(){
    string s, r;
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        r = check(s);
        cout << r << endl;
    }
    return 0;
}
