#include <iostream>
using namespace std;

int main() {
	int t = 0, xa, xb, xc;
	
	cin>>t;
	while(t--)
	{
	    cin>>xa>>xb>>xc;
	    if (xa > 50)
	    {
	        cout<<"A"<<endl;
	        continue;
	    }
	    if (xb > 50)
	    {
	        cout<<"B"<<endl;
	        continue;
	    }
	    if (xc > 50)
	    {
	        cout<<"C"<<endl;
	        continue;
	    }
	    cout<<"NOTA"<<endl;
	}
	return 0;
}
