#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
	int t = 0, n = 0, x = 0, y = 0;
	
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>y;
	    
	    int s = 0;
	    int cx = (n+1)/2;
	    int cy = (n+1)/2;
	    
	    int d = abs((cx + cy) - (x + y));
	    if (d % 2 != 0)
	        s = 1;
	    cout<<s<<endl;
	}
	return 0;
}
