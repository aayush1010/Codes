
#include<bits/stdc++.h>

using namespace std;

int root(int i, int a[]){
    while(i != a[i]){
        i = a[i];
    }
    return i;
}

int main(){
    int n, m, p, q;
    cin >> n >> m;
    int a[n+1];
    for(int i = 1; i < n+1; i++){
        a[i] = i;
    }
    for(int i =0; i <m ;i++){
        cin >> p >> q;
        int j = root(p, a);
        int k = root(q, a);
        a[j] = k;
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
