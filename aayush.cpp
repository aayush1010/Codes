#include<iostream>
#include<cstdio>
using namespace std;
long long n,k,i,x;
double m,l,a[400];
int main()
{
    cin>>n>>k;
    l=n-k+1;
    for(i=1;i<=n;i++)
    {
    cin>>x;
    a[i]+=a[i-1]+x;
}
for(i=n;i>=k;i--)
m+=a[i]-a[i-k];
printf("%0.2f\n",m/l);
return 0;
}
