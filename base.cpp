#include<iostream>

using namespace std;

class a{
    public :
    void disp(){
        cout << "a";
    }
};

class b : public a{
    private :
    void disp(){
        cout << "b";
    }
    public :
    void c(){
        this->disp();
    }
};

int main(){
    a p;
    b q;
    q.c();
    return 0;
}
