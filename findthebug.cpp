#include <bits/stdc++.h>

using namespace std;

vector < int > findTheBug(vector < string > grid){
    int n = grid.size();
    vector<int> r(2);
    string s;
    int c = 0;
    vector<string>::iterator i = grid.begin();
    while(i != grid.end()){
        s = *i;
        for(int j = 0; j < n; j++){
            if(s[j] == 'X'){
                r[0] = c;
                r[1] = j;
                break;
            }
        }
        c++;
        i++;
    }
    return r;
}

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0; grid_i < n; grid_i++){
       cin >> grid[grid_i];
    }
    vector < int > result = findTheBug(grid);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "," : "");
    }
    cout << endl;
    return 0;
}

