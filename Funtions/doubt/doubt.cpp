#include <iostream>
using namespace std;

void one(){
  cout << "ONE";
  two();
}

void two(){
  cout << "TWO";
}

int main(){
  one();

  return 0;
}
