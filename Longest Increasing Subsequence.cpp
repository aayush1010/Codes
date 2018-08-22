#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 0){
            cout << 0 << endl;
            continue;
        }
        int a[n], b[n];
        for(int i =0; i < n; i++){
            cin >> a[i];
            b[i] = 1;
        }
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++){
                if(a[i] > a[j]){
                    b[i] = max(b[i], b[j]+1);
                }
            }
        }
        int m = b[0];
        for(int i = 1; i< n; i++){
            m = max(b[i], m);
        }
        cout << m<< endl;
    }
    return 0;
}
