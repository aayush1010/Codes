#include<iostream>
#include<map>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i =0; i < n; i++){
        cin >> a[i];
        a[i] = (a[i] == 0)?-1:1;
    }
    map <int, int> m;
    m[-1] = 1;
    cout << m[-1];
    return 0;
}
