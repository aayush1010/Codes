#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    int k;
    cin >> k;
    int i =0;
    int sl = s.length();
    int tl = t.length();
    if(sl+tl <= k){
        cout << "Yes";
        return 0;
    }
    while(s[i] == t[i] && (i<s.length() || i<t.length())){
        i++;
    }
    sl -= i;
    tl -= i;
    int d = sl+tl;
    if(d <= k){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
