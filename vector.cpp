#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     vector <int> v;
    int n, a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
   // sort(v.begin(), v.end());
    for(vector<int>::iterator i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    return 0;
}
