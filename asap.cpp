#include <cstdio>

using namespace std;
int printf(char const*str){

}
int main() {
    float f = 0x21E02F;
    char *str = "%.2f";
    printf(str, f);
    return 0;
}
