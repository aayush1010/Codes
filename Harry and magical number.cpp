#include<iostream>
#include<algorithm>

using namespace std;

void check(){
    long long int n,cs = 0,cn,r;
    long long int s;
    cin >> n >> s;
    cn = n;
    long long int a[n];
    for(long long int i =0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for(long long int i =0; i < n; i++){
        r = cs +(a[i]*cn);
        if(r == s){
            cout << a[i] << endl;
            return;
        }
        else{
            cs += a[i];
            cn--;
        }
    }
    cout << -1 <<endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
    return 0;
}
