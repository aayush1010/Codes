#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
        cin >>  a[i];
    for(int i = 1; i < (1<<n); i++){
        for(int j = 0; j < n; j++){
            if((i >> j) & 1)
                cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
