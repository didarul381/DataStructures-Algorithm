#include<iostream>
using namespace std;

void bubbleShort(int a[],int n);

int main(){
int n;
cout<<"Enter size of array:";
cin>>n;
int a[n];
cout<<"Enter the  array:";
for(int i=0;i<n;i++){
    cin>>a[i];
}

bubbleShort(a,n);
cout<<"sorting element are"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}
void bubbleShort(int a[],int n){
    int i,j,temp;
    for( i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){//6
                 temp=a[j];//6
                a[j]=a[j+1];//4
                a[j+1]=temp;//6

        }
    }
    }
}
