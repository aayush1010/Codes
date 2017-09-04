#include<iostream>
#include<algorithm>

using namespace std;

float mean(int a[], long int n){
    float s = 0;
    for(int i = 0; i< n; i++){
            s += a[i];
    }
    s /= n;
    return s;
}

float median(int a[], long int n){
    sort (a, a+n);
    if(n % 2 != 0){
        return a[n/2];
    }
    else{
        float q;
        int r = n/2;
        q = a[r]+a[r-1];
        q = q/2;
        return q;
    }
}

int mode(int a[], long int n){
    sort(a, a+n);
    int m = 0, c = 1, j, flag = 0, p, q, l;
    l = a[0];
    for(int i = 0; i < n; i = j){
        j = i+1;
        m = c;
        while(a[i] == a[j] && j < n){
            c++;
            j++;
            flag = 1;
        }
        if( c != m){
            q = a[i];
            l = a[i];
        }
        else{
            q = l;
        }
    }
    return q;
}

int main(){
    long int n, r;
    float p, q;
    cin >> n;
    int a[n];
    for(int i =0; i < n; i++){
        cin >> a[i];
    }
    p = mean(a, n);
    q = median(a, n);
    r = mode(a, n);
    cout << p << endl << q << endl << r;
    return 0;
}
