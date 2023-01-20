#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,item,beg,end,mid;
    cout<<"Enter element:";
    cin>>n;
    int data[n];
    cout<<"Enter array element:"<<endl;
    for(i=0;i<n;i++){
        cin>>data[i];
    }
    cout<<"Enter serch Item:";
    cin>>item;
    beg=0,end=n-1,mid=(beg+end)/2;

    while((beg<=end)&& (data[mid]!=item)){
        if(item<data[mid]){
            end=mid-1;
        }else{
            beg=mid+1;
            mid=(beg+end)/2;

        }
    }

    if(data[mid]==item){
        cout<<"serch item "<<item<<" found at loc "<<mid+1;
    }else{
        cout<<"serch item "<<item<<" is not found" ;
    }
}

