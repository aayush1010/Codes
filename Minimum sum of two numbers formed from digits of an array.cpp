#include<iostream>
#include<queue>
#include<cmath>

using namespace std;

int main(){
    int n, t, a = 0, b = 0, c = 0, d = 0,l;
    cin >> n;
    priority_queue<int> p;
    for(int i = 0; i < n; i++){
        cin >> t;
        p.push(t);
    }
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            a +=  pow(10,c)*p.top();
            c++;
        }
        else{
            b += pow(10,d)*p.top();
            d++;
        }
        p.pop();
    }
    cout << a << " " <<b;
    return 0;
}
