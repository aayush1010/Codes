#include<iostream>
#include<conio.h>

using namespace std;

void heapify(int a[], int j, int n){
    int large = j;
    int l = 2*j + 1;
    int r = 2*j +2;
    if (l < n && a[l] > a[large])
        large = l;
    if(r < n && a[r] > a[large])
        large = r;
    if (large != j){
        swap (a[large], a[j]);
        heapify(a, large, n);
    }
}

void buildheap(int a[], int n){
    for (int j = n/2-1 ; j >= 0; j--)
        heapify(a, j, n);
    for (int i = 0; i< n; i++)
        cout << a[i];
}

int main(){
   int n, j;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    buildheap(a, n);
    return 0;
}
