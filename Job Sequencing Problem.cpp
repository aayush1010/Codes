#include<iostream>
#include<algorithm>

using namespace std;

struct job{
    char id;
    int time;
    int profit;
};

bool comp(job a, job b){
    return a.profit > b.profit;
}

int main(){
    int n, t = 0, p;
    cin >> n;
    job a[n];
    for(int i =0 ; i < n; i++){
        cin >> a[i].id >> a[i].time >> a[i].profit;
        t = max(t, a[i].time);
    }
    char res[t];
    for(int i =0; i < t; i++){
        res[i] = '*';
    }
    sort(a, a+n, comp);
    int i = 0;
    while(i < n){
        p = a[i].time-1;
        while(p >= 0){
            if(res[p] == '*'){
                res[p] = a[i].id;
                break;
            }
            p--;
        }
        i++;
    }
    for(i =0; i < t; i++){
        if(res[i] != '*'){
            cout << res[i] << " ";
        }
    }
    return 0;
}
