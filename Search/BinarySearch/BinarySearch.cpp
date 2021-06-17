#include<iostream>
using namespace std;

int main(){
  int start = 0;
  const int size = 100;
  int end;
  int numToBeFound;

  

  int mid;

  cout << "Enter the length of the array => ";
  cin >> end;



  int sortedArray[size];
for (int i=0; i < end; i++){
    int value;

    cout << "Enter the value of " << i << " position element => ";

    cin >> value;

    sortedArray[i] = value;
  }  for (int i=0; i< numToBeFound; i++){
    if(sortedArray[i] == numToBeFound){
      cout << "Found the value at index "<<i;
    }
  }

  cout << "Enter the number to be found";
  cin >> numToBeFound;

  while(start <= end){
    mid = (start+end)/2;
    if(sortedArray[mid] == numToBeFound){
      cout << "Found the number at index " << mid;
      break;
    } else if (sortedArray[mid] < numToBeFound){
      start = mid+1;
    } else {
      end = mid-1;
    }
  }

}