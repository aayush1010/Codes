#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
const int dx[5]= {-1,0,0,0,1};
const int dy[5]= {0,-1,0,1,0};
int tile[10][10];
int opt[10][10];
int flip[10][10];
int get(int x,int y)
{
    int c=tile[x][y];
    for(int d=0; d<5; d++)
    {
        int x2=x+dx[d],y2=dy[d]+y;
        if(0<=x2&&x2<5&&y2>=0&&y2<6)
        {
            c+=flip[x2][y2];

        }

    }
    return c%2;
}
int calc ()
{
    for(int i=1; i<5; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(get(i-1,j)!=0)
            {
                flip[i][j]=1;
            }
        }
    }
    for(int j=0; j<6; j++)
        if(get(4,j)!=0)
            return -1;
    int res=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<6; j++)
        {
            res+=flip[i][j];
        }
    }
    return res;
}
void solve()
{
    int res=-1;
    for(int i=0; i<1<<6; i++)
    {
        memset(flip,0,sizeof(flip));
        for(int j=0; j<6; j++)
        {
            flip[0][j]=i>>j&1;
        }
        int num=calc();
        if(num>=0&&(res<0||res>num))
        {
            res=num;
            memcpy(opt,flip,sizeof(flip));
        }
    }
    if(res<0)
    {
        printf("01\n");
    }
    else
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<6; j++)
            {
                printf("%d%c",opt[i][j],j+1==6?'\n':' ');
            }
        }
}
int main()
{
    int t,T=1;


        for(int i=0; i<5; i++)
            for(int j=0; j<6; j++)
                cin>>tile[i][j];
        cout<<"PUZZLE #"<<T++<<endl;
        solve();

    return 0;
}
