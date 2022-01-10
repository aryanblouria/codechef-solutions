#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	long long int t = 0, n = 0, d = 0;
	
	cin>>t;
	while(t--)
	{
	    cin>>n>>d;
	    long long int x = 0;
	   
	    if (d <= 10)
	        x = pow(2, d);
	    else if (d <= 20)
	        x = pow(2, 10) * pow(3, d - 10);
	    else
	        x = n;
	    
	    if (x > n)
	        x = n;
	        
	    cout<<x<<endl;
	}
	return 0;
}
