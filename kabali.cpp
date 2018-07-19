#include<iostream>
#include<string>

using namespace std;

void print(string s, int l, int r){
    while(l <= r){
        cout << s[l];
        l++;
    }
}

void printrev(string s, int l, int r){
    while(r >= l){
        cout << s[r];
        r--;
    }
}

int main(){
    string s = "KABALI";
    int len = s.length();
    int r = 0;
    for(int i = 0; i < len; i++){
        print(s,0,r);
        cout << "\t";
        printrev(s,0, r);
        r++;
        cout << endl;
    }
    return 0;
}
