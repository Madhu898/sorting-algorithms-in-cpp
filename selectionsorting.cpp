//selection sorting is we select the minimum element of the array and place that starting position 
// minimum element will be sent to starting position 


#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,temp=0,issorted=0;
	system("cls");
	cout<<"enter the size of the array "<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the elements in to an array "<<endl;
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
	for (int i=0;i<n;i++)
	{
		issorted=1;
		cout<<"iteration "<<i+1<<endl;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				issorted=0;
			}
		}
		if(issorted)
		{
			break;
		}
	}
	for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
	return 0;
}
