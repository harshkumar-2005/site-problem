#include<iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
    {
    int arr[]={21,32,12,33,2,22,11,10,7,5,2,99};
    int n =12;

    cout<<"Before sorting: \n";
    print(arr, n);
    
    cout<<endl;

    cout<<"After sorting: \n";
    bubblesort(arr, n);
    print(arr, n);


    return 0;
    }