#include<iostream>
#include<string.h>

using namespace std;

string toggle(string a){
    for(int i = 0; i < a.length(); i++){
        if(islower(a[i])){
            a[i] = toupper(a[i]);
        }
        else{
            a[i] = tolower(a[i]);
        }
    }
    return a;
}

int main(){
    string s;
    cin >> s;
    s = toggle(s);
    cout << s;
}
