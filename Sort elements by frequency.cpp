#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

map<int, pair<int,int> > m;

void maping(int a[], int n){
    for(int i =0; i<n; i++){
        m[a[i]].first++;
        if(m[a[i]].first == 1){
            m[a[i]].second = i;
        }
    }
}

bool comp(int a, int b){
    if(m[a].first == m[b].first){
        return m[a].second < m[b].second;
    }
    else{
        return m[a].first > m[b].first;
        }
}

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i =0 ; i < n; i++){
        cin >> a[i];
    }
    maping(a, n);
    sort(a,a+n,comp);
    for(int i =0 ; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
