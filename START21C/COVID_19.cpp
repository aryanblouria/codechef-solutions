#include <iostream>
using namespace std;

int main() 
{
	int t = 0, n = 0, m = 0;
	
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    
	    int max = 0;
	    if (n % 2 == 0 && m % 2 == 0)
	        max = (n/2) * (m/2);
	    else if (n % 2 == 0 && m % 2 != 0)
	        max = (n/2) * ((m+1)/2);
	    else if (n % 2 != 0 && m % 2 == 0)
	        max = ((n+1)/2) * (m/2);
	    else
	        max = ((n+1)/2) * ((m+1)/2);
	    cout<<max<<endl;
	}
	return 0;
}
