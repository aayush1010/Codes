#include<iostream>

using namespace std;

uint64_t gcd(uint64_t n){
    uint64_t c = 1;S
    for(uint64_t i = 2; i < n; i++){
        for(uint64_t j = 2; j <= i && j < n; j++){
            if(i % j == 0 && n % j == 0){
                c++;
                break;
            }
        }
    }
    return n-c;
}

int main(){
    uint64_t n, k;
    cin >> n >> k;
    while(k--){
        n = gcd(n);
    }
    cout << n;
    return 0;
}
