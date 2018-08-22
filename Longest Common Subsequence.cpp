#include<bits/stdc++.h>

using namespace std;

void check(){
    int l1,l2;
    cin >> l1 >> l2;
    string s1, s2;
    cin >> s1 >> s2;
    int m = -1;
    int a[s1.length() +1][s2.length() +1];
    for(int i =0; i <= s1.length(); i++){
        for(int j =0; j <= s2.length(); j++){
            if(i == 0 || j == 0){
                a[i][j] = 0;
            }
            else if(s1[i-1] == s2[j-1]){
                a[i][j] = 1+a[i-1][j-1];
            }
            else{
                a[i][j] = max(a[i-1][j], a[i][j-1]);;
            }
            m = max(m, a[i][j]);
        }
    }
    cout << m << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
    return 0;
}
