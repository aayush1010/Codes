#include<iostream>
#include<vector>

using namespace std;

long long gcd(int a, int b){
    if(b ==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

void calculate(){
    int n;
    cin >> n;
    vector<int> k(n);
    for(int i =0; i< n; i++){
        cin >> k[i];
    }
    long long a = k[0], b;
    for(int i = 1; i< n; i++){
        b =gcd(k[i], a);
        a = ((k[i]*a)/b);
    }
    cout << a;
}

int main(){
    int t;
    cin >> t;
    while(t){
        calculate();
        t--;
    }
    return 0;
}
