
#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int i,j=0,n,count=0,t;
scanf("%s",a);
n=strlen(a);
t=n/2;
for(     i=0; i <n; i++    )
{
if(  a[i] == 'W'       )
{
j++;
}
else if(  a[i] == 'L'       )
{}
else
{
count++;}
}
if( count != 0        )
{
printf("Invalid Input");
}
else if( j >= t        )
printf("Lucky");
else
printf("Unlucky");
return 0;
}
