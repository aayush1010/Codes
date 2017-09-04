#include<iostream>

using namespace std;

int64_t fredo(int64_t n){
    int64_t x;
    int64_t t = 0 , p;
    x = n/2;
    while(x){
        p = x*(x+1)/2;
        if (p == 0)
            break;
        else if(p >= n){
            x--;
        }
        else{
            if(n-p >= x){
                t = n + n - x - x;
                break;
            }
            else
                x--;
        }
    }
    return t;
}

int main(){
    int t;
    int64_t  n;
    cin >> t;
    while(t--){
        cin >> n;
        n = fredo(n);
        cout << n << endl;
    }
    return 0;
}
