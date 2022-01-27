#include <iostream>
using namespace std;

int main() 
{
	int t = 0, n = 0;
	
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    string s = "";
	    for (int i = 97; i < 97 + n; i++)
	    {
	        int j = (i - 97) % 26;
	        s += char(97 + j);
	    }
	    cout<<s<<endl;
	}
	return 0;
}
