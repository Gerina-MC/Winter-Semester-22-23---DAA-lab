#include <iostream>
#include <math>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n][2];
    int b[n];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        int s=0;
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
            s+=a[i][j]*a[i][j];
        }
        b[i]=math.sqrt(s);
    }
    for(int i=1;i<n;i++)
    {
        int k=b[i];
        int k1=a[i][0];
        int k2=a[i][1];
        int j=i-1;
        while(j>-1 && b[j]>k)
        {
            b[j+1]=a[j];
            a[j+1][0]=a[j][0];
            a[j+1][1]=a[j][1];
            j--;
        }
        b[j+1]=k;
        a[j+1][0]=k1;
        a[j+1][1]=k2;
    }
    cout<<"Sorted elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<a[j][0]<<" "<<a[j][1];
        }
        cout<<endl;
    }
}
