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
    int count=1;
    while(count<n)
    {
       for(int i=0;i<n;i++)
       {
           if(a[i]>a[i+1])
           {
               int temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
           }
       } 
       count++;
    }
    cout<<"enter after sorting  "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}