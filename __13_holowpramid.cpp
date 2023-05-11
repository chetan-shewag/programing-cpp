#include<iostream>
using namespace std;
int main(){
     int n,r;
     cin>>n,r;
     for (int row=1;row<=n;row++){
        for(int col=1;col<=r;col++)
         if ( row=1 || row==n || col ==1 ||col==r){ 
            cout<<"*";
         }
         else 
         cout<<" ";
       // cout<<"* ";
        cout<<endl;
     }
}