#include<iostream>
#include<string.h>

using namespace std;

void marsrover(int x, int y, char d){
    string s;
    cout << "enter command:";
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'l'){
            if(d == 'n'){
                d = 'w';
                continue;
            }
            if(d == 's'){
                d = 'e';
                continue;
            }
            if(d == 'w'){
                d = 's';
                continue;
            }
            if(d == 'e'){
                d = 'n';
                continue;
            }
        }
        else if(s[i] == 'r'){
            if(d == 'n'){
                d = 'e';
                continue;
            }
            if(d == 's'){
                d = 'w';
                continue;
            }
            if(d == 'w'){
                d = 'n';
                continue;
            }
            if(d == 'e'){
                d = 's';
                continue;
            }
        }
        else{
            if(d == 'n'){
                y++;
                continue;
            }
            if(d == 's'){
                y--;
                continue;
            }
            if(d == 'w'){
                x--;
                continue;
            }
            if(d == 'e'){
                x++;
                continue;
            }
        }
    }
    cout << x  << " "<< y << " "<<d;
}

int main(){
    int x, y, xl, yl;
    char d;
    cout << "enter limits:";
    cin >>  xl >> yl;
    cout << "enter cords and direction:";
    cin >> x >> y >> d;
    marsrover(x, y, d);
    return 0;
}
