#include<iostream>
#include<fstream>
#include<string>

 using namespace std;
// template <class A>

int chetan ( char *a1 ,char*a2);
 int mian(){

    chetan((char*)"w.txt",(char*)"chetan.txt");
    cout<<"\nfile making is complite.";

//char* p = (char*)"abc"; /
 };


 int chetan(char *a1 , char *a2)
{
ifstream fin;
ofstream fout;
char ch;
fin.open(a1);
fout.open(a2);
ch=fin.get();
while(!fin.eof()){
   fout<<ch;
   ch=fin.get();
}
fin.close();
fout.close();



}