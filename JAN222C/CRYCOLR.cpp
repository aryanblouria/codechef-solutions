#include <iostream>
using namespace std;

int main() 
{
	int t = 0, n = 0;
	int r1, r2, r3, g1, g2, g3, b1, b2, b3;
	
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cin>>r1>>g1>>b1;
	    cin>>r2>>g2>>b2;
	    cin>>r3>>g3>>b3;
	    
	    int moves = 0;
	    
	    if (r1 == n && g2 == n && b3 == n)
	        cout<<0<<endl;
	    else
	    {
	        if (g1 + b1 + b2 > r2 + r3 + g3)
	        {
	            while (g1--)
	                moves++;
	            while (b1--)
	                moves++;
	            while (b2--)
	                moves++;    
	        } 
	        else
	        {
	            while (r2--)
	                moves++;
	            while (r3--)
	                moves++;
	            while (g3--)
	                moves++; 
	        }
	        cout<<moves<<endl;
	    }
	}
	return 0;
}
