#include<iostream>

using namespace std;

int main(){
    char ch;
    float n1,n2;
    cout<<"\nInput a charector:";
    cin>>ch>>n1>>n2;

    switch (ch)
    {
        case '+':
         cout<<"addition of two number:"<<n1+n2;
          break;
        case '-':
         cout<<"\n substraction of two number:"<<n1-n2;
          break;
       case '*':
         cout<<"\n multiplication of two number:"<<n1*n2;
          break;
       case '/':
         cout<<"\n Dividetion of two number:"<<n1/n2;
           break;
       default:
       cout<<"\n Don't know:";
       break;

    }

}