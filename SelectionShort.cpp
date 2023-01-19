#include<iostream>
using namespace std;

int main(){
 int n,i,j;
 int smallest,temp;
 cout<<"Enter size of array:";
 cin>>n;
 int data[n];
 cout<<"Enter the array:";
 for( i=1;i<=n;i++){
    cin>>data[i];
 }
   for(j=1;j<=n-1;j++){
     smallest=j;
    for(i=j+1;i<=n;i++){
       if(data[i]<data[smallest]){
         smallest=i;
       }
    }if(smallest!=j){
        temp=data[j];
        data[j]=data[smallest];
        data[smallest]=temp;
    }
   }
   cout<<"sorted  array is:";
 for( i=1;i<=n;i++){
   cout<<data[i]<<" ";
 }
}
