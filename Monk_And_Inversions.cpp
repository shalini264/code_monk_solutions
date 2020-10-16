#include<bits/stdc++.h>
using namespace std;
int main()
{int T;
cin>>T;
while(T--)
{ int n;
long long int sum=0;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++)
{for(int j=0;j<n;j++)
  cin>>a[i][j];}
for(int i=0;i<n;i++)
 {for(int j=0;j<n;j++)
   {for(int x=i;x<n;x++)
    {for(int y=j;y<n;y++)
      {if(a[x][y]<a[i][j])
        sum++;}}}}
  cout<<sum<<"\n";
      }
        }
