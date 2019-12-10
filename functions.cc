
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include "catch2.hpp"
using namespace std;

int countLines(ifstream& ins);
int countWord(ifstream& ins);
// the
int main (int argc, char** argv){
  ifstream ins;
  string filename;
  filename= argv[1];
  cout << "You have entered " << argc << " arguments:" << "\n";

    for (int i = 0; i < argc; ++i){
        cout << argv[i] << "\n";
      }
        ins.open(filename);
        if(!ins.fail()){
    	      ins.close();
        }

        countLines(ins);
        countWord(ins);
        ins.close();

    return 0;
}

int countLines(ifstream& ins){
  int count=0;
  string x;
  getline(ins, x);
  count++;
  while(!ins.eof()){
    getline(ins, x);
    count++;
  }
  return count;
}

int countWord(ifstream& ins){
  int count=0;
  char x;
  ins>>x;
  count++;
  while(!ins.eof()){
    ins>>x;
    count++;
  }
  return count;
}
