#include <iostream>
#include<math.h>

using namespace std;

int main(){
    long int n,i,r;
    double  c, p =1;
    cin >> n;
    int a[n];
    for(i =0; i< n; i++){
        cin >> a[i];
    }
    for(i=0; i<n; i++){
        c = (1/(float)n);
        c = pow(a[i],c);
        p *= c;
    }
    p += 1;
    r = (int)p;
    cout <<r ;
    return 0;
}
