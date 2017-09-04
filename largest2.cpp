#include<iostream>
#include<map>
#include<math.h>

using namespace std;

int firstDigit(int m){
    int c;
    while(m){
        c = m%10;
        m /= 10;
    }
    return c;
}

bool getBig(int p, int q, map<int, int> m){
    int a,b;
    a = p*(pow(10, m[q]))+ q;
    b = q*(pow(10, m[p]))+ p;
    if(a < b)
        return true;
    else
        return false;
}

void largest(int a[], int n){
    map<int, int> m;
    int p,l =0;
    for(int i=0; i< n; i++){
       p = a[i];
       while(p){
         l++;
         p /= 10;
       }
       m[a[i]] = l;
       l = 0;
    }
    int j,b,c,d,e;
    bool q;
    for(int i = 0; i < n-1; i++){
        j = i+1;
        while(j < n){
            if(firstDigit(a[i]) == firstDigit(a[j])){
                q = getBig(a[i], a[j], m);
                if(q){
                    swap(a[i], a[j]);
                }
            }
            else if(firstDigit(a[i]) < firstDigit(a[j])){
                swap(a[i], a[j]);
            }
            else{}
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
