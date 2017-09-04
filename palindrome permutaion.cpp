#include<iostream>
#include<string.h>

using namespace std;

int checkLength(string s){
    int c = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' ')
            c++;
    }
    return c;
}

void setBool(int *a){
    for(int i = 0; i < 128; i++)
        a[i] = 0;
}

bool check(string s){
    int len = checkLength(s);
    int r, c = 0;
    int a[128];
    setBool(a);
    for(int i = 0; i < s.length(); i++){
        r = (int)s[i];
        if(a[r] == 0){
            a[r]++;
            c++;
        }
        else{
            a[r]--;
            c--;
        }
    }
    cout << c << endl;
    if(len%2 == 0 && c == 1)
        return true;
    else if(len%2 != 0 && c == 1)
        return true;
    else
        return false;
}

int main(){
    string s;
    getline(cin, s);
    bool b = check(s);
    cout << b;
    return 0;
}
