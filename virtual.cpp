#include<iostream>

using namespace std;

class a{
public :
    virtual void disp(){
        cout << "a";
    }
};

class b : public a{
public:
    void disp(){
        cout << "b";
    }
};

int main(){
    a *m;
    b n;
    m = &n;
    m->disp();
    return 0;
}
