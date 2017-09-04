#include<iostream>

using namespace std;

bool sum(int i){
    int s = 0;
    while(i > 0){
        s = s + (i%10);
        i = i/10;
    }
    if(s == 7)
        return true;
    else
        return false;
}

int main(){
    for (int i = 1; i <= 1000; i++){
        if(i % 2 == 0){
            if(i % 7 == 0){
                if(sum(i)){
                    cout << i << endl;
                }
            }
        }
    }
    return 0;
}
