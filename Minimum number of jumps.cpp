#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int i = 0, c = 0;
        while(i < n){
            int m = -1000;
            int p = a[i];
            int j = i;
            while(j < i+p){
                m = max(m, a[j]);
                j++;
            }
            i += m;
            c++;
        }
        cout << c << endl;
    }
    return 0;
}
