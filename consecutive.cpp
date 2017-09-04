#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int check(int a[], int n){
    map<int, int> m;
    int c = 1, d =0;
    map<int, int>::iterator j,k;
    sort (a, a+n);
    for(int i =0; i< n; i++){
        m[a[i]] = 1;
    }
    for(map<int,int>:: iterator i = m.begin(); i != m.end(); ++i){
        j = i;
        k = i;
        advance(k, 1);
        while((j->first)+1 == k->first && k != m.end()){
            c++;
            j++;
            k++;
        }
        d = max(c,d);
        c = 1;
    }
    if(d == 1)
        return 0;
    else
        return d;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i =0; i< n; i++){
        cin >> a[i];
    }
    int r  = check(a, n);
    cout << r;
    return 0;
}
