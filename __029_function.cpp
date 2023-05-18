#include<iostream>
using namespace std;

void fun(){
      cout<<"\n u are  in a dun function:)";
}
int main(){
    void fun(); //function declartion
    cout<<"u are in the mian function :)";
    fun(); //function call
}