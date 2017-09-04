#include<iostream>

using  namespace std;

void output(){
    int n;
    cin >> n;
    int c[n], l[n];
    for(int i =0; i< n; i++){
        cin >> c[i];
    }
    for(int i =0; i< n; i++){
        cin >> l[i];
    }
    int i = 0, j = 0, k =0, s = 0;
    while(i < n){
        if (c[i] > c[i+1]){
            while(c[i] > c[j]  && j != n){
                s += (c[j]*l[k]);
                j++;
                k++;
            }
        }
        else{
            while(c[i] < c[j+1]  && j != n){
                s += l[k];
                k++;
                j++;
            }
            s *= c[i];
        }
        i = j;
    }
    cout << s;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        output();
    }
    return 0;
}
