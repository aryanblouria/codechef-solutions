#include <iostream>
using namespace std;

int main() {
	int t = 0, n = 0, k = 0, x = 0;
	
	cin>>t;
	while(t--)
	{
	    cin>>n>>k>>x;
	    int count = 0;
	    
	    if (x <= k)
	    {
	        for (int i = 0; i < n; i++)
	        {
	            count %= x;
	            cout<<count<<" ";
	            count++;
	        }
	        cout<<endl;
	    }
	    else
	        cout<<-1<<endl;
	}
	return 0;
}
