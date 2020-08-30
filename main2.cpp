#include <iostream>

using namespace std;

int FindFibonacciIterative(int n) {
  int firstPreviousNumber = 1;
  int secondPreviousNumber = 1;
  int currentNumber;

  if((n==1) || (n==2))
    return 1;
  
  for(int i = 3; i<n; i++) {
    currentNumber = firstPreviousNumber + secondPreviousNumber;

    firstPreviousNumber = secondPreviousNumber;

    secondPreviousNumber = currentNumber;
  }
  
  return currentNumber;
}


int main2() {
  int n ;
  cout << "Enter the number of terms of series : ";
  cin >> n;

  cout << "\nFibonnaci Series Number: " <<  FindFibonacciIterative(n) <<"\n";
     
   return 0;
}
