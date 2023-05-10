#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream fout;
    fout.open("hello.txt", ios::app|ios::binary);
     fout<<"chetan";
     
}