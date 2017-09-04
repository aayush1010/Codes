#include<iostream>

using namespace std;

int main(){
    int a[6];
    for (int i =0; i<6; i++){
        cin >> a[i];
    }
    for(int i =0; i< 6; i++){
        for(int j=0; j < 6-i; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
    for(int i =0; i< 6; i++){
        cout << a[i];
    }
    return 0;
}
