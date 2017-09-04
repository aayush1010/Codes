#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int l = s.length();
    int i = 0, j = l-1;
    while(i <= j){
        if(s[i] == ' ')
            i++;
        else if(s[j] ==' ')
            j--;
        else{
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    cout << s;
    return 0;
}
