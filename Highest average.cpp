#include<bits/stdc++.h>

using namespace std;

int main(){
    long int n;
    cin >> n;
    long int a[n];
    for(long int i =0; i< n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    while(k--){
        long int p;
        cin >> p;
        long int c = 0;
        for(long int i = 0, j = 0; j < n; j++){
            s += a[j];
            if((s/(j-i+1)) < p){
                c = max(c , j-i+1);
             }
        }
        cout << c << endl;
    }
    return 0;
}
