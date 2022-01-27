#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 0, n = 0;
	
	cin>>t;
	while (t--)
	{
	    cin>>n;
	    vector<int> v (n);
	    
	    for (int i = 0; i < n; i++)
	        cin>>v[i];
	        
	    sort(v.begin(), v.end());
	    double sum = 0;
	    for (auto x: v)
	        sum += x;
	    
	    vector<int> a, b;
	    for (int i = 0; i < n-1; i++)
	        a.push_back(v[i]);
	    b.push_back(v[n-1]);
	    
	    double ma = 0, mb = 0;
	    for (auto x: a)
	        ma += x;
	    ma /= a.size();
	    mb = b[0];
	    
	    cout<<fixed<<setprecision(6)<<ma+mb<<endl;
	}
	return 0;
}
