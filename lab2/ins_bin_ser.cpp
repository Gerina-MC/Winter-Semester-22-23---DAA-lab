#include<iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
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
    cout<<"Enter the element to search:";
    cin>>k;
    int p=binarySearch(a,0,n-1,k);
    if(p!=-1)
    {
        cout<<"Position:"<<p+1;
    }
    else
    {
        cout<<"Element not found";
    }
}
