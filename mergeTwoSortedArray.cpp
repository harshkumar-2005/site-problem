#include<iostream>
using namespace std;

void merge(int a[], int b[], int x, int y)
{
    // after merging the array on output side should be also sorted
    // the output can contain duplicates
    int i=0, j=0;
    while(i<x && j<y)
    {
        if(a[i] <= b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i] > b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
    }

    while(i<x)
    {cout<<a[i]<<" ";i++;}

    while(j<y)
    {cout<<b[j]<<" ";j++;}
}


int main()
{
    int a[]= {11, 22, 33, 44, 55, 66};
    int x= 6;
    int b[]= {5, 10, 15, 20, 25, 30, 35, 40};
    int y=8;

    merge(a, b, x, y);


    return 0;
}