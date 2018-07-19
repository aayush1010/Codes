#include<iostream>

using namespace std;

long long int calc(){
    long long int u, v, n, x;
    cin >> u >> v;
    n = u+v;
    n = (n*(n+1))/2;
    n++;
    n = n + u;
    return n;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int r = calc();
        cout << r<< endl;
    }
    return 0;
}
