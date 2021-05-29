#include<iostream>
using namespace std;

int main(){
  int maxStarRow;

  cout << "Enter the max number of stars in a row ";
  cin >> maxStarRow;
  
  for(int starsInRow=maxStarRow; starsInRow > 0; starsInRow--){
    for (int counter=0; counter<starsInRow;counter++){
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}