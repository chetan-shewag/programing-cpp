#include<iostream>

using namespace std;

int sum(int , int);

int  main(){
    int n,m;

  //  cout<<n<<m;
    cin>>n>>m;
    cout<<n<<m;
    
    int s = sum (n,m);
    cout<<"sum is:" <<s;

}
int sum(int x , int y){
    
    return (x+y);

}