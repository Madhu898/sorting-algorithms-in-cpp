//comapares adjcent items in array and swaps accordingly 
// biggest of all numbers sent to last in first iteration 

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,sorted=0;
	system("cls");
    cout<<"enter the size of an array "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements in to array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    while(count<n-1)
    {
		cout<<"in pass "<<count+1<<endl;
       sorted=1;
	   for(int i=0;i<n-count;i++)
       {
           if(a[i]>a[i+1])
           {
               int temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
			   sorted=0;
           }
       } 
	   if(sorted)
	   {
		  break;
	   }
       count++;
    }
    cout<<"after sorting  "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
