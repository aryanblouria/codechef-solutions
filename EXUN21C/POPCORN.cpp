#include <iostream>
using namespace std;

int max(int n1, int n2, int n3)
{
    if(n1 >= n2 && n1 >= n3)
        return n1;

    if(n2 >= n1 && n2 >= n3)
        return n2;
    
    if(n3 >= n1 && n3 >= n2)
        return n3;
}

int main() 
{
	int t = 0, a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0;
	
	cin>>t;
	while(t--)
	{
	    cin>>a1>>a2;
	    cin>>b1>>b2;
	    cin>>c1>>c2;
	    
	    int a = a1 + a2;
	    int b = b1 + b2;
	    int c = c1 + c2;
	    
	    int m = max(a, b, c);
	    cout<<m<<endl;
	}
	return 0;
}
