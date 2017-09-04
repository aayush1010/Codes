   #include<iostream>
   #include<conio.h>
    using namespace std;

    int main()
    {
	int i,j,a[5],temp=0;
	cout<<"Enter the elements to be sorted";
	for(i=0;i<5;i++)
		cin>>a[i];
	for(i=0;i<5;i++)
	{
		for(j=i;j>=1;j--)
		{
			if(a[j]<a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
	cout<<"Sorted elements are :"<<endl;
	for(i=0;i<5;i++)
		cout<<a[i];
    }

