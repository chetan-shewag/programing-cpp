#include<iostream>
using namespace std;

class rectangle{
     private:
       int l,b;
      public:
         void setdimension(int,int);
         void showdimenshion();
         int getarea(){
          
            cout<<"\narea of rectangle :";
            return(l*b);
         }
         int getperameter(){
           
            cout<<"\nperameter of rectangle :";
             return(2*(l+b));
         }
};

void rectangle::setdimension(int a,int d){
        l=a;
        b=d;
}
void rectangle::showdimenshion(){
        cout<<"\n"<<l<<" "<<b;
}
/*int rectangle::getarea(){
  return(l*b);
 //cout<<"\nArear of rectangle:";
}
int rectangle::getperameter(){
return(2*l+b);
//cout<<"\nperameter of rectangle:";

}*/
int main(){
    rectangle r1;
    r1.setdimension(5,2);
    r1.showdimenshion();
   cout<<r1.getarea();
   cout<<r1.getperameter();
}