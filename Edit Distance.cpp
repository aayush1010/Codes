#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        int tb[s1.length() +1][s2.length() +1];
        for(int i =0; i <= s1.length(); i++){
            for(int j =0; j <= s2.length(); j++){
                if(i == 0){
                    tb[i][j] = j;
                }
                else if(j == 0){
                    tb[i][j] = i;
                }
                else if(s1[i-1] == s2[j-1]){
                    tb[i][j] = tb[i-1][j-1];
                }
                else{
                    tb[i][j] = min (min(tb[i-1][j], tb[i][j-1]), tb[i-1][j-1]) + 1;
                }
            }
        }
        cout << tb[s1.length()][s2.length()] << endl;
    }
    return 0;
}
