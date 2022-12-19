#include <iostream>
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
    cout<<"Sorted elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
