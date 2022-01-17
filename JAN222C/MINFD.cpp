#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n) 
{ 
    int s = 0;
    for (int i = 0; i < n; i++) 
        s += arr[i]; 
    return s; 
} 

int main() 
{
	int t = 0, n = 0, x = 0;
	
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    
	    int *arr = new int[n];
	    for (int i = 0; i < n; i++)
	        cin>>arr[i];
	        
	    if (sum(arr, n) < x)
	        cout<<-1<<endl;
	    else 
	    {
	        sort(arr, arr + n, greater<int>());
	        int s = 0, k = 0;
	        while (s < x)
	        {
	            s += arr[k];
	            k++;
	        }
	        cout<<k<<endl;
	    }
	}
	return 0;
}
