#include<iostream>

using namespace std;

int main(){
    int n,T;
    cin >> T;
    while(T--){
        cin >> n;
        int i =0, b = 1, c;
        while(i  < n){
            cout << b << " ";
            b+=3;
            i++;
        }
        cout << endl;
    }
     return 0;
}
