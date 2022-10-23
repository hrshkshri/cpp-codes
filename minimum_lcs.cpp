#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s1,s2;
		cin>>s1>>s2;
		int a1[26]={0};
		int a2[26]={0};
		for(int i=0;i<n;i++)
		{
			a1[s1[i]-'a']++;
			a2[s2[i]-'a']++;
		}
		int count=0;
		for(int i=0;i<26;i++)
		{
			count=max(count,min(a1[i],a2[i]));
		}
		cout<<count<<endl;
		
	}
	return 0;
}
