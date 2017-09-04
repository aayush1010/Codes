#include<iostream>
#include<vector>

using namespace std;

int calculate(vector<long long> p, int n, long long x){
    int r = 0, i =0;
    while(x > 0){
        r++;
        x -= p[i];
        i++;
    }
    return r;
}

int main(){
    int n, r;
    vector<long long> p(n);
    long long x;
    cin >> n >> x;
    for(int i = 0; i<n; i++){
        cin >> p[i];
    }
    r = calculate(p,n,x);
    cout << r;
    return 0;
}
