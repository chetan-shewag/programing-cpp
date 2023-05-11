#include<iostream>

using namespace std;

int main(){
    char ch;
    cout<<"\nInput a charector:";
    cin>>ch;

   /* if (ch=='a')
    {
        cout<<"\n A for apple";

    }
    else if (ch=='b')
    {
        cout<<"\n B for ball";
    }
    else if (ch=='c'){
        cout<<"\n C for cat";
    }
    else if(ch=='d')
    {
        cout<<"\n D for dog";
    }*/
    switch (ch)
    {
        case 'a':
         cout<<"\n A for apple";
          break;
        case 'b':
         cout<<"\n B for ball";
          break;
       case 'c':
         cout<<"\n C for cat";
          break;
       case 'd':
         cout<<"\n D for dog";
           break;
       default:
       cout<<"\n Don't know:";
       break;

    }

}