#include<iostream>

using namespace std;

void bab(){
    long int n, c = 0;
    cin >> n;
    long int p[n];
    for (long int i = 0; i < n; i++){
        cin >> p[i];
    }
    long int l[n];
    for (long int i = 0; i < n; i++){
        l[i] = 0;
    }
    long long int x, a, b, t;
    cin >> x >> a >> b >> t;
    while(t--){
        l[x]++;
        if(l[x] >= p[x]){
            c++;
            l[x] = 0;
        }
        x = (a*x + b) % n;
    }
    cout << c << endl;
}

int main(){
    int q;
    cin >> q;
    while(q--){
        bab();
    }
    return 0;
}
