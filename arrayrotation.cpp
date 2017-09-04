#include <vector>
#include <iostream>


using namespace std;

vector<int> array_left_rotation(vector<int> a, int n, int k) {
    k = k%n;
    vector<int> b(k);
    int i = 0, j = k;
    while(i < k){
        b[i] = a[i];
        i++;
    }
    i = 0;
    while(j < n){
        a[i] = a[j];
        i++;
        j++;
    }
    j = n-k;
    i=0;
    while(j <n){
        a[j] = b[i];
        j++;
        i++;
    }
    return a;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
