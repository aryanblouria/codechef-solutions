#include <iostream>
using namespace std;

int main() 
{
    int t = 0, n = 0;
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout<<1<<" ";    
            cout<<endl;
        }
    }
	return 0;
}
