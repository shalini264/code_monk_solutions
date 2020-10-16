#include<bits/stdc++.h>
using namespace std;
int main()
{int T;
cin>>T;
while(T--)
{long long int n;
cin>>n;
long long int a[n];
for(int i=0;i<n;i++)
 cin>>a[i];
sort(a,a+n);
long long int mini=INT_MAX;
for(int i=0;i<(n-1);i++)
{
  mini=min(mini,((a[i]&a[i+1])^(a[i]|a[i+1])));
  }
cout<<mini<<"\n";}
}
