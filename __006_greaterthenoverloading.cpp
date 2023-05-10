#include<iostream>

using namespace std;

class chetan{
    private:
         int a,b;
    public:
          void setveriable(int x, int y ){
              a=x;
              b=y;
            
          }     
          void showvaiable(){
            cout<<"\n"<<a<<" "<<b;
          }
          int getgreator(){
            cout<<"\nAS comapre to:";
            return(a<b);
          }
       
};

int main(){
    chetan c1,c2;
    c1.setveriable(3333,4444);
    c1.showvaiable();
    cout<<c1.getgreator();

   
}