#include <bits/stdc++.h>

using namespace std;

string timeCompare(string t1, string t2){
    int i;
    if(t1[5] > t2[5]){
        return "Second";
    }
    else if(t1[5] < t2[5]){
        return "First";
    }
    else{
        if((t1[0] == '1' && t1[1] == '2') || (t2[0] == '1' && t2[1] == '2')){
                if(t1[0] == t2[0] && t1[1] == t2[1]){
                    i = 2;
                    while(i < 5){
                        if(t1[i] > t2[i]){
                            return "Second";
                        }
                        else if(t1[i] < t2[i]){
                            return "First";
                        }
                        else{
                            i++;
                        }
                    }
                }
                else{
                    if(t1[0] == '1' && t1[1] == '2'){
                        return "First";
                    }
                    else{
                        return "Second";
                    }
                }
        }
        else{
            i = 0;
            while(i < 5){
                if(t1[i] > t2[i]){
                    return "Second";
                }
                else if(t1[i] < t2[i]){
                    return "First";
                }
                else{
                    i++;
                }
            }
        }
    }
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string t1;
        string t2;
        cin >> t1 >> t2;
        string result = timeCompare(t1, t2);
        cout << result << endl;
    }
    return 0;
}

