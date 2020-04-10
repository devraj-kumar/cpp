#include<iostream>
using namespace std;
int main(){
  int n,m,i,j, arr[100][100],k[100],sum=0;
  cin>>n;
  cin>>m;
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      cin>>arr[i][j];

  for(i=0;i<n;i++){
   k[i]=0;
   count=0
    for(j=0;j<m;j++){
      if(c[i][j]==1){
        count++;
      }
    }
    k[i]=count;
  }
  for(i=0;i<n;i++)
  {
    sum=k[i]+k[i+1];
  }
  cout<<sum<<endl;
}
}
