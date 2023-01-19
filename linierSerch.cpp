#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter size of array:";
cin>>n;
int data[n];
  cout<<"Enter the array:";
  for(int i=0;i<n;i++){
    cin>>data[i];
  }
  int item;
  cout<<"Enter search item:";
  cin>>item;
  int loc=0;
  data[n]=item;

  while(data[loc]!=item){
    loc=loc+1;
  }
  if(loc==n) cout<<"search item "<<item<<" is not found"<<endl;
  else cout<<"search item "<<item<<" is  found at loc "<<loc<<endl;
}
