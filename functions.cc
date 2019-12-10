
#include <iostream>
#include <fstream>
using namespace std;

int countLines(ifstream ins);
int countWord(ifstream ins);

int main (int argc, char** argv){
  cout << "You have entered " << argc << " arguments:" << "\n";

    for (int i = 0; i < argc; ++i)
        cout << argv[i] << "\n";

    return 0;
}

int countLines(ifstream ins){
  int count=0;
  ins>>getline();
  count++;
  while(!ins.eof()){
    ins>>getline();
    count++;
  }
  return count;
}

int countWord(ifstream ins){
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
=======
#include <iostream>
#include <istream>
using namespace std;

int countLines(ifstream ins);
int countWord(ifstream ins);

int main (int argc, char** argv){
  cout << "You have entered " << argc << " arguments:" << "\n";

    for (int i = 0; i < argc; ++i)
        cout << argv[i] << "\n";

    return 0;
}

int countLines(ifstream ins){
  int count=0;
  ins>>getline();
  count++;
  while(!ins.eof()){
    ins>>getline();
    count++;
  }
  return count;
}

int countWord(ifstream ins){
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
