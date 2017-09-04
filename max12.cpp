#include<iostream>

using namespace std;

int main(){
    int a[5], m2=0;
    for(int i = 0; i < 5; i++)
        cin >> a[i];
    int m1 = a[0];
    for(int i = 1; i < 5; i++){
        if(a[i] > m1){
            m1 = a[i];
        }
        if(a[i-1] < m1 && a[i-1] > m2){
            m2 = a[i];
        }
    }
    cout << m1 << " " << m2;
}
