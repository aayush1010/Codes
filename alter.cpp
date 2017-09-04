#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++ ){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
    }
    int i =0;
    int j = n-1;
    int k = (n-1)/2;
    while(i <= k){
        cout << a[i++];
        cout << a[j--];
    }
    return 0;
}
