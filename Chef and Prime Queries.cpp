#include<iostream>

using namespace std;

bool isPrime(int n){
    if (n == 2)
        return true;
    if (n == 3)
        return true;
    if (n % 2 == 0)
        return false;
    if (n % 3 == 0)
        return false;
    int i = 5;
    while (i * i <= n){
        if (n % i == 0)
            return false;
        else
            i++;
    }
    return true;
}

int func(int l, int r, int x, int y, int a[]){
    int res = 0, n = 0, e, m = 0;
    for(int i = x; i <= y; i++){
        if(isPrime(i)){
            for(int j = l; j <= r; j++){
                n = a[j];
                e = 0;
                while(n % i == 0 ) {
                    e++;
                    n /= i;
                }
                res += e;
            }
        }
     }
     return res;
}

int main(){
    int n, q, l, r, x, y;
    cin >> n;
    int a[n];
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    cin >> q;
    while(q--){
        cin >> l >> r >> x >> y;
        int res = func(l-1, r-1, x, y, a);
        cout << res << endl;
    }
    return 0;
}
