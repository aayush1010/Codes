#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, p, q;
    cin >> n >> m;
    int a[n+1];
    for(int i = 1; i < n+1; i++){
        a[i] = i;
    }
    for(int i =0; i <m ;i++){
        cin >> p >> q;
        p = a[p];
        q = a[q];
        for(int j = 1; j < n+1; j++){
            if(a[j] == p){
                a[j] = q;
            }
        }
    }
    map<int, int > c;
    for(int i =1; i< n+1; i++){
        c[a[i]]++;
    }
    int l = c[a[1]];
    for(int i = 2; i < n+1; i++){
        l = max(l, c[a[i]]);
    }
    cout << l;
    return 0;
}
