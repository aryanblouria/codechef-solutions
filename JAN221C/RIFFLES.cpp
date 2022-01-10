#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> permute(vector<int> v)
{
    vector<int> nv = {};
    for (int i = 0; i < v.size()-1; i+=2)
        nv.push_back(v[i]);
    for (int i = 1; i < v.size(); i+=2)
        nv.push_back(v[i]);
    return nv;
}

bool powerof2(int n)
{
   if (n == 0)
     return false;
   return (ceil(log2(n)) == floor(log2(n)));
}

int main() 
{
	double t = 0, n = 0, k = 0;
	
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    
	    vector<int> v = {};
	    for (int i = 1; i <= n; i++)
	        v.push_back(i);
	        
	    if (powerof2(n))
	        k = fmod(k, log2(n));
	   
	    for (int i = 0; i < k; i++)
	        v = permute(v);
	    for (int i = 0; i < n; i++)
	        cout<<v[i]<<" ";
	    cout<<endl;
	}
	return 0;
}

//partial solution
