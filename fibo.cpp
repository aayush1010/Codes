#include<iostream>

using namespace std;

int fibo(int i){
    if (i == 0 || i ==1){
        return i;
    }
    else
        return fibo(i-1)+fibo(i-2);
}

int main(){
    int n;
    cin >> n;
    int x;
    for(int j = 0; j < n; j++){
       x = fibo(j);
       cout << x<< endl;
    }
    return 0;
}
