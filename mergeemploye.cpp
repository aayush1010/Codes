#include<iostream>
#include<algorithm>

using namespace std;

struct abc{
    int p,q;
};

bool comp(abc a, abc b){
    return a.p<b.p;
    }

int main(){
    int n;
    cin >> n;
    abc a[n];
    for(int i =0; i< n; i++){
        cin >> a[i].p >> a[i].q;
    }
    sort(a, a+n, comp);
    abc b[n];
    int j =0;
    b[j].p = a[j].p;
    b[j].q = a[j].q;
    for(int i = 1;i < n;i++){
        if(b[j].q > a[i].p){
            if(b[j].q < a[i].q){
                b[j].q = a[i].q;
            }
        }
        else{
            j++;
            b[j].p = a[i].p;
            b[j].q = a[i].q;
        }
    }
    for(int i =0; i<=j; i++){
        cout << b[i].p << " " << b[i].q << endl;
    }
    return 0;
}
