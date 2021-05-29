#include<iostream>
using namespace std;

//          *
//         **
//        ***
//       ****
//      *****
//     ******
//    *******
//   ********
//  *********
// **********


int main(){
  int maxNumOfRowStars;

  cout << "Enter max number of stars in a row";
  cin >> maxNumOfRowStars;

  for (int colCounter = 1; colCounter < maxNumOfRowStars+1; colCounter++){
    for(int rowSpaceCounter = 0; rowSpaceCounter < maxNumOfRowStars-colCounter; rowSpaceCounter++){
      cout << " ";
    }
    for(int rowStarCounter = 0; rowStarCounter < colCounter; rowStarCounter++){
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}