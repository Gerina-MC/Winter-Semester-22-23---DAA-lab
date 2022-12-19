#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        int k=a[i];
        int j=i-1;
        while(j>-1 && a[j]>k)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
    int k;
    cout<<"Enter the element to search"<<endl;
    cin>>k;
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<"Positon:"<<i+1;
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"Element not found";
    }
}
