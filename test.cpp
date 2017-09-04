#include <iostream>
#include <stdio.h>
using namespace std;

int sum (int f){
	int n =0;
	for (int i = 1; i <= f; i++){
		n = n + i;
	}
	return n;
}

int test(){
	int  j ,  f, q = 0, l;
	long int n;
	cin >> n;
	long int arr[n];
	for (int i = 0; i < n; i++ )
		cin >> arr[i];
	for (j = 0; j < n-1; j++){
		f = arr[j+1]/arr[j];
		l = sum(f);
		q = q + l;
		}
		q = sum(q);
		return q;

}

int main(){
    int T, i=0, n;
    cin >> T;
    int a[T];
    while(T){
    	n = test();
        a[i] = n;
        i++;
    	T--;
    }
    for (int j = 0; j < i; j++ )
        cout << a[j] << " ";
    return 0;;
}
