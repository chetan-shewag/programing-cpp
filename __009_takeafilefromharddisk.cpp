#include<iostream>
#include<fstream>

using namespace std;

int main(){
ifstream fin;
 char ch;
  fin.open("cheatn.txt");
   fin>>ch;
   while(!fin.eof()){
      cout<<ch;
      fin>>ch;

   }
   fin.close();


}