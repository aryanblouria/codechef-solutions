#include <iostream>
#include <cmath>
using namespace std;

bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

bool isEven(int n)
{
    return n%2==0;
}

int main() 
{
    int t = 0, k;
    
    cin>>t;
    while(t--)
    {
        cin>>k;
        if (isPowerOfTwo(k))
            cout<<log2(k)<<endl;
        else if (isEven(k))
        {
            int ct = 0;
            while (isEven(k))
            {
                k = k/2;
                ct++;
            }
            cout<<ct<<endl;
        }
        else
            cout<<0<<endl;
    }
	return 0;
}
