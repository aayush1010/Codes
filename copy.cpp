#include<iostream>

using namespace std;

class a{
    int x;
    public :
    a(){
        x =1;
        cout << x << endl;
    }
    a (a &z){
        x = z.x;
        cout << x;
    }
};

int main(){
    a b;
    a c = b;
    return 0;
}
