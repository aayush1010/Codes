#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main(){
    int n ;
    cin >> n;
    char a[n][100];
    for(int i=0 ;i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(strcmp(a[i], a[j]) > 0)
                swap (a[i], a[j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j<n; j++){
            if(strcmp(a[i], a[j]) == 0)
               strcpy(a[j], " ");
        }
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        if(strcmp(a[i], " ") != 0)
            cout << a[i] << endl;
        }
    return 0;
}