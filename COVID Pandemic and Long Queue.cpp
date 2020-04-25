#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	vector<int> v1;
	vector<int> v2;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		int count=0;
		
	
		  for(int i=0;i<n;i++)
		  {
		  	if(ar[i]==1)
		  	{
		  		count++;
			  }
		  }
		
		if(count==1)
		{
			cout<<"YES"<<endl;
			continue;
		}
		for(int i=0;i<n;i++)
		{
			if(ar[i]==1)
			{
				v1.push_back(i+1);
			}
			
		}
		
//		cout<<"contents of v1 "<<endl;
//	for(auto i:v1)
//	{
//			cout<<i<<" ";
//		}
//		cout<<endl;
		for(int i=0;i<v1.size()-1;i++)
		{
		  int ans=abs(v1[i]-v1[i+1]);
		  v2.push_back(ans);
		  ans=0;
		  
		}
		int flag=0;
		for(int i=0;i<v2.size();i++)
		{
			if(v2[i]<6)
			{
			  cout<<"NO"<<endl;
			  flag=1;
			  break;
			  	
			}
		}
		if(flag==0)
		{
			cout<<"YES"<<endl;
		}
//		cout<<"contents "<<endl;
//	for(auto i:v2)
//	{
//			cout<<i<<" ";
//		}
//		cout<<endl;
		
		v1.clear();
		v2.clear();
                                               	
		
		
	}
}
