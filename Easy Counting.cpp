#include<iostream>

using namespace std;

void check(){
    long long int l,r, p, c= 0, ones, zeros;
    cin >> l >> r >> p;
    for(int i = l; i <=r; i++){
        ones = __builtin_popcount (i);
        zeros = p-ones;
        if(ones == zeros){
            c++;
        }
    }
    cout << c << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}
