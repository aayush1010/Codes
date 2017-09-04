#include<iostream>

using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}

int main(){
    int n,d,p,k, j;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> d;
    int g = gcd(n, d);
    for(int i =0; i< g; i++){
        j = i;
        while(1)
        {
          k = j + d;
          if (k >= n)
            k = k - n;
          if (k == i)
            break;
          swap(a[j], a[k]);
          j = k;
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
    return 0;
}
