#include<iostream>

using namespace std;

int main(){
    int a[8];
    for(int i = 0; i < 8; i++){
        cin >> a[i];
    }
    for(int i = 1; i < 8; i++){
        int j = i-1, c = 0;
        while(j>=0){
            if(a[i] > a[j]){
                j--;
            }
            else{
                c = 1;
                break;
            }
        }
        if(c == 0)
            cout << a[i] << endl;
    }
    return 0;
}
