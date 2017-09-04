#include<iostream>

using namespace std;

void egypt(int n, int d){
    int c, r =0 ;
    if(n == 0){
        return;
    }
    if(d%n == 0){
        c = d/n;
        r = 1;
    }
    else{
        c = d/n;
        c++;
    }
    cout << 1 <<"/" <<c << " " ;
    if(r == 1){
        return;
    }
    cout << "+" << " ";
    n = (n*c)-d;
    d = c*d;
    egypt(n,d);
}

int main(){
    int n, d;
    cin >> n >> d;
    egypt(n,d);
    return 0;
}
