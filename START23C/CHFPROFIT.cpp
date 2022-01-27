#include <iostream>
using namespace std;

int main() {
	int t = 0, x = 0, y = 0, z= 0;
	
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    cout<<(x*z) - (x*y)<<endl;
	}
	return 0;
}
