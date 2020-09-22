#include <bits/stdc++.h>

using namespace std;

long long int arraymanipulation()
{ long long int i,j,l,n,k;
  long long int sum=0,p,x=0;
  cin>>n>>k;
  vector<long long int> vec(n+1);
  for(i=0;i<k;i++)
  {  cin>>j>>l>>p;
     vec[j] += p;
     if(l<n)
     vec[l+1] -= p;
  } 
  for(i=1;i<n+1;i++)
  {   x=x+vec[i];
       if(sum<x) sum=x;
  }
  return sum;
}
int main() {
  cout<<arraymanipulation();
return 0;
}
