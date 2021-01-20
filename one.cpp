#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool rearrange(string s)
{
	unordered_map<char,int> m;
	    int flag=0;
	    int len = s.length();
	    for(int i=0;i<s.length();i++)
	        m[s[i]]++;
	    for(auto x: m)
	    {
	        if(x.second<len-x.second+1)
	        continue;
	        else
	       return 0;
	    }
	    return 1;
}
	    
int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    string s;
	    cin>>s;
	    cout<<rearrange(s);
	    cout<<endl;
	}
}