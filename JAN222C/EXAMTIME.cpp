#include <iostream>
using namespace std;

int main() 
{
	int t = 0, a = 0, b = 0, c = 0, x = 0, y = 0, z = 0;
	
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    cin>>x>>y>>z;
	    
	    int s1 = a + b + c;
	    int s2 = x + y + z;
	    
	    if (s1 > s2)
	        cout<<"DRAGON"<<endl;
	    else if (s1 < s2)
	        cout<<"SLOTH"<<endl;
	    else
	    {
	        if (a > x)
	            cout<<"DRAGON"<<endl;
	        else if (a < x)
	            cout<<"SLOTH"<<endl;
	        else
	        {
	            if (b > y)
	                cout<<"DRAGON"<<endl;
	            else if (b < y)
	                cout<<"SLOTH"<<endl;
	            else
	                cout<<"TIE"<<endl;
	        }
	    }
	}
	return 0;
}
