#include<iostream>

using namespace std;

void largest(int a[], int n){
    int j,b,c,d,e;
    for(int i = 0; i < n-1; i++){
        j = i+1;
        while(j < n){
            b = a[i]/10;
            c = a[i]%10;
            d = a[j]/10;
            e = a[j]%10;
            if(b == 0){
               if(c < e){
                    swap(a[i], a[j]);
               }
            }
            else{
                if(b < d){
                    swap(a[i], a[j]);
                }
                else{
                    if(b == d || d == 0){
                        if(c <= e || d == 0){
                            swap(a[i], a[j]);
                        }
                    }
                }
            }
            j++;
        }
    }
    for(int k =0; k< n; k++){
        cout << a[k] << "  ";
    }
}

int main(){
    int a[50], n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    largest(a, n);
    return 0;
}
