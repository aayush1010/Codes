#include<iostream>

using namespace std;

long long int calculate(){
        long long int n, a, b,c = 0,d = 0;
        cin >> a >> b>> n;
        if(n % 2 == 0){
            c = max(a,b);
            d = min(a,b);
        }
        else{
            a *= 2;
            c = max(a,b);
            d = min(a,b);
        }
    return c/d;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int r = calculate();
        cout << r<< endl;
    }
    return 0;
}
