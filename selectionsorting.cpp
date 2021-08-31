#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of an array "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements in to an array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
         {
             if(a[j]<a[i])
             {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
             }
         }

    }
cout<<"enter after sorting  "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}