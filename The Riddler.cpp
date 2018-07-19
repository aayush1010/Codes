#include<iostream>
#include<math.h>

using namespace std;

long long int res(){
    long long int a, b, m, c = 0, r;
    cin >> a >> b >> m;
    b = b/m;
    a = (a-1)/m;
    c = b-a;
    return c;
}

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int r= res();
        cout << r << endl;
    }
    return 0;
}
