#include<iostream>
using namespace std;

int main(){
      
      int n,r;
    cin >>n>>r;

    for(int row=0;row<n;row++){
         for (int col=0;col<r;col++)
         cout<<"*";
         cout<<endl;
        //to print row+1 element
       /* int start=row+1;
         
         for(int col=0;col< row+1;col++){
            cout << start <<" ";
            start=start+1;
         }
         cout << endl;*/
    }

}