#include <iostream>
using namespace std;

int main() 
{
    int t = 0;
    double t1 = 0, t2 = 0, r1 = 0, r2 = 0;
    
    cin>>t;
    while(t--)
    {
        cin>>t1>>t2>>r1>>r2;
        double lhs = (t1*t1)/(r1*r1*r1);
        double rhs = (t2*t2)/(r2*r2*r2);
        
        if (lhs == rhs)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
	return 0;
}
