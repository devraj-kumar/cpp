#include<iostream>
using namespace std;
int main() {
  int a[100],size,i,j,temp;
  cout<<"enter the size of the array"<<endl;
  cin>>size;
  for(i=0;i<size;i++)
    cin>>a[i];
  for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
      if(a[i]>a[j])
      {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
      }
    }
  }
  for(i=0;i<size;i++){
    cout<<a[i]<<endl;
  }

  return 0;
}
