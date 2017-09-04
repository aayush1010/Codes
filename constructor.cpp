#include<iostream>

using namespace std;

class abc{
public:
    void pi(){
        cout << "abc";
    }
};

class xyz : public abc{
public:
    void hi(){
        cout << "xyz";
    }
};

int main(){
    xyz x;
    x.pi();
    abc a;
    a.hi();
    return 0;
}
