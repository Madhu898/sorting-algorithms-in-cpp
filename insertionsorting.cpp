\\code was taken from code with harry in his tutorial of datastructures and algorithms
\\simplified algorithms
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
    int j,key;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        key=a[i];
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    cout<<"array after sorting  "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
