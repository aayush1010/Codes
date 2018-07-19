#include<iostream>

using namespace std;

void check(){
    uint64_t n,m,r;
    cin >> n >> m;
    r=m^n;
    if(r%2 != 0){
        cout << "Alice" << endl;
        return;
    }
    cout << "Bob"<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
    return 0;
}
