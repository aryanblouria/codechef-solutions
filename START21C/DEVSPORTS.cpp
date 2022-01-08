#include <iostream>
using namespace std;

int main() 
{
	int t = 0, z = 0, y = 0, a = 0, b = 0, c = 0;
	
	cin>>t;
	while(t--)
	{
	    cin>>z>>y>>a>>b>>c;
	    
	    int l = z - y;
	    int s = a + b + c;
	    
	    if (l >= s)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
