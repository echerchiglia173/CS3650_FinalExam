
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int countLines(ifstream ins);
int countWord(ifstream ins);
// the
int main (int argc, char** argv){
  ifstream ins;
  cout << "You have entered " << argc << " arguments:" << "\n";

    for (int i = 0; i < argc; ++i){}
        cout << argv[i] << "\n";
      }
        ins.open();
        if(!ins.fail()){
    	      ins.close();
        }

        countLines(ins);
        countWord(ins);
        ins.close();

    return 0;
}

int countLines(istream& ins){
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

int countWord(istream& ins){
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
