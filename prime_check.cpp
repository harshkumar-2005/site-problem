#include<iostream>
using namespace std;


// Efficient solution bigho time:- O(sqrt(n))
bool prime(int n)
{
    if(n==0 || n==1)
    {
        return false;
    }
    if(n==2 || n==3)
    {
        return true;
    }
    if(n%2==0 || n%3==0)
    {
        return 0;
    }
    for(int i=5; i*i<=n; i=i+6)
    {
        if(n%i==0 ||n%(i+2)==0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int n;
    cin>> n;
    
    if(prime(n))
    {
        cout<<"Is a prime"<<endl;
    }
    else
    {
        cout<<"Not a prime"<<endl;
    }

    return 0;
}