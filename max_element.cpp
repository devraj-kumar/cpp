#include<iostream>
using namespace std;
int main() {
  int a[10000000000],n,i,max;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    if(a[i]>a[i+1])
      max=a[i];
  }
  cout<<max;
  return 0;
}
