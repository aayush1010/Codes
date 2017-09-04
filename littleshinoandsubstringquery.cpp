#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool CheckSubstring(string firstString, string secondString){
    if(secondString.size() > firstString.size())
        return false;

    for (int i = 0; i < firstString.size(); i++){
        int j = 0;
        if(firstString[i] == secondString[j]){
            while (firstString[i] == secondString[j] && j < secondString.size()){
                j++;
                i++;
            }

            if (j == secondString.size())
                    return true;
        }
    }
    return false;
}


int main(){
    int n, q, a = -1,b = -1, t;
    cin >> n >> q;
    vector<string> n1(n);
    vector<string> q1(q);
    for(int i =0; i<n; i++){
        cin >> n1[i];
    }
    for(int i =0; i<q; i++){
        cin >> q1[i];
    }
    for(int i = 0; i< q; i++){
        a = -1;
        b = -1;
        for(int j = 0; j< n; j++){
            if(CheckSubstring(n1[i], q1[j])){
                t =n1[j].length();
                if(t >= a){
                    a = t;
                    b = j;
                }
            }
        }
        cout << b <<" " ;
    }

    return 0;
}
