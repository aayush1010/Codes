#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i =0; i < n; i++){
            cin >> a[i];
        }
        int m;
        cin >> m;
        sort(a, a+n);
        int mini = a[m-1] - a[0];
        for(int i =0; i < n-m+1; i++){
            mini = min(mini, (a[i+m-1] - a[i]));
        }
        cout << mini << endl;
    }
    return 0;
}
