#include<iostream>
#include<math.h>

using namespace std;

bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
        
    }
    return true;
}
 int main(){

    int n,m;
    cin>>n>>m;
     for (int i=n;i<=m;i++){
       if(isprime(i)){
        cout<<i<<"\n";
       }
     }
 } 