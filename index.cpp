#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,n;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];


	}
	string s,st;
	for (i=0;i<n/2;i++)
	{
     s=to_string(a[i]);
     st=st+s[0];
	}			
	for(i=n/2;i<n;i++)
	{  st=st+ to_string(a[i]%10);
		
	}			
	int b =stoi(st);
	if(b% 11==0)
	cout<<"OUI";
	else
	cout<<"NON";			
	return 0;
}
