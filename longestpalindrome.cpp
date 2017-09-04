#include<iostream>
#include<string.h>

using namespace std;

string a;

int main(){
    cin >> a;
    int t = a.length();
    int i = 1, j = 0, c , d, l =0 , r =0;
    while(j <= t){
       if (a[j] == a[j+1]){
            l = j;
            r = j+1;
            while(a[l] == a[r]){
                l = j;
                r = j+1;
                j++;
            }
       }
       else
        j++;
    }
    if (l == r)
        cout << "no";
    else{
        for (int i = l; i <= r; i++)
            cout << a[i];
    }
    return 0;
}

