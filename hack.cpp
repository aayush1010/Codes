#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int power(int a, int b){
    if (b>0) {
       if (b==0)
          return 1;
       if (a==0)
          return 0;
       if (b%2 == 0){
          return power(a*a, b/2);
       }
       else if (b%2==1) {
        return a*power(a*a,b/2);
       }
    }
    return 0;
}

bool check(string n){
    long int p = atoi(n.c_str());
    long int l, r, t, d = 1, c = 0;
    cin >> l >> r;
    t = p;
    while(t){
        t /= 10;
        c++;
    }
    c = c-r;
    long int k = power(10, c);
    p = p/k;
    c = r-l+1;
    d = power(10, c);
    p = p % d;
    if(p % 7 == 0)
        return true;
    else
        return false;
}

int main(){
    long int  q;
    string n;
    bool b;
    cin >> n;
    cin >> q;
    while(q--){
        b = check(n);
        if(b)
          cout<< "YES" <<endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
