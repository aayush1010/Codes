#include<iostream>
#define cat(a,b) a##b

using namespace std;

int main(){
    cout << cat(10,10);
    return 0;
}

