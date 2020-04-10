#include<iostream>
using namespace std;
int main(){
  int i,j,k,a[100];
  cin>>k;
  for(i=0;i<k;i++)
  {
    cin>>a[i];

  }
  for(i=0;i<k;i++)
  {
    for(j=i;j<k;j++){
      for(int p=i;p<j;p++){
      cout<<a[p];
    }
    cout<<endl;
}
  }
  return 0;

}
