#include<iostream>
using namespace std;
int main(){
  int a[10],key;
  for(int i=0;i<10;i++)
    cin>>a[i];
  cout<<"enter the elemet to be seearched"<<endl;
  cin>>key;
  for(int i=0;i<10;i++){
    if(a[i]==key)
      cout<<"found at"<<i<<endl;
  }
  return 0;
}
