#include <iostream>
#include <cstdio>

using namespace std;

void res(int n){
	int r = n, p;
	printf("%d", n);
	printf("\n");
	for(int i = 1; i <= r; i++){
		p = i;
		printf("%d", n);
		printf("\n");
		for(int j = 1; j <= n; j++){
			cout << j << " ";
			cout << p << " " ;
			if(p == n){
				p = 0;
			}
			cout << p+1;
			p++;
			cout << endl;
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		res(n);
	}
	return 0;
}