#include <iostream>
using namespace std;

int main() {
	int t = 0, n = 0, a = 0;
	
	cin>>t;
	while(t--)
	{
	    cin>>n>>a;
	    if (n - a > a)
	        cout<<a<<endl;
	    else
	        cout<<n-a<<endl;
	}
	return 0;
}
