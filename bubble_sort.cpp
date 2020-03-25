#include<iostream>
using namespace std;
int bubble_sort(int a[],int size)
{
  int i,j;
  for(i=1;i<size;i++){
    for(j=0;j<size-1;j++){
      if(a[j]>a[j+1])
        swap(a[j+1],a[j]);
    }
  }
  return 0;
}
int main() {
  int a[100],size,i,j,temp;
  cout<<"enter the size of the array"<<endl;
  cin>>size;
  for(i=0;i<size;i++)
    cin>>a[i];
  bubble_sort(a,size);
  for(i=0;i<size;i++){
    cout<<a[i]<<endl;
  }

  return 0;
}
