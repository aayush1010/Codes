#include<iostream>
#include<algorithm>

using namespace std;

long long int func(long long int x, long long int y, long long int z){
    long long int n = 1000000007;
    long long int a = 0,b = 0;
    a = x+y;
    b = y+z;
    a = a%n;
    b = b%n;
    a = (a*b)%n;
    return a;
}

long long int calc(){
    int p,q,r;
    long long int n = 1000000007;
    cin >> p >> q >> r;
    long long int a[p], b[q], c[r], res = 0, sum = 0;
    for(int i =0; i < p; i++){
        cin >> a[i];
    }
    for(int i =0; i < q; i++){
        cin >> b[i];
    }
    for(int i =0; i < r; i++){
        cin >> c[i];
    }
    for(int j = 0; j < q; j++){
        for(int i = 0; i < p; i++){
            for(int k = 0; k < r; k++){
                if(a[i] <= b[j] && c[k] <= b[j]){
                    res = func(a[i], b[j], c[k]);
                    sum = (sum + res)%n;
                }
            }
        }
    }
    return sum;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int r = calc();
        cout << r << endl;
    }
    return 0;
}
