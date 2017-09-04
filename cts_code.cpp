#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int i =0, j;
    while(i < s.length()){
        if(s[i] == 'u' && s[i+1] == 'h' && s[i+2] == 'u'){
            while(s[i+1] == 'h' && s[i+2] == 'u'){
                i += 2;
            }
            cout << "***";
        }
        else{
            cout << s[i];
        }
        i++;
    }
    return 0;
}
