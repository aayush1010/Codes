#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    uint64_t a, b, l = 0, m;
    long long int c[1000], i = 0, j, k =0;
    cin >> a;
    cin >> b;
    while(b > 0){
        c[i++] = b%10;
        b = b/10;
    }

    for ( j = 0; j < i; j++, k++){
        if(j == i-1){
            m = c[j]*a;
            m =m + l;
            if( m > 9){
                while(m > 0){
                    c[k++] = m%10;
                    m = m/10;
                }
            }
            else
                c[j] = m;
        }
        else{
            m = c[j]*a;
            m = l+m;
            c[j] = m%10;
            l = m/10;
        }
    }
    cout << k<< endl;
    for(int  n = k-2;  n>= 0; n--)
        cout << c[n];
    return 0;
}
