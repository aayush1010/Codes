#include <iostream>
#include <algorithm>

using namespace std;

void check(int *a, int i, int j, int k){
	if(k <= 0 || i == j){
		return;
	}
	int index = i, mini = a[i];
	int d = min(i+k, j);
	for(int c = i; c <= d; c++){
		if(a[c] < mini){
			mini = a[c];
			index = c;
		}
	}
	for(int c = index; c > i; c--){
		swap(a[c], a[c-1]);
	}
	check(a, i+1, j, k-index+i);
}

int main(){
	int n, k;
	cin >> n;
	int a[n];
	for(int i = 0; i < n;  i++){
		cin >> a[i];
	}
	cin >> k;
	check(a, 0, n-1, k);
	for(int i = 0; i < n;  i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}