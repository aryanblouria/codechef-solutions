#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int t = 0;
    string s = "";
    vector<string> substrings = {};
    
    cin>>t;
    while(t--)
    {
        cin>>s;
        int len = s.length();
        int count = 0;
        
        int j = -1;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '1')
            {
                count++;
                j = i + 1;
            }
        }
        
        
        if (len == 1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        
        if (count == 0 || (count == 1 && j == len))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    
    return 0;
}
