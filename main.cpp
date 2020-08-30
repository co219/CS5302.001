#include <iostream>

using namespace std;

int FindFibonacciRecursive(int n) {
  if((n==1) || (n==2)) {
    return 1;
  }
  else {
    return (FindFibonacciRecursive(n-1)+FindFibonacciRecursive(n-2));
  }
}


int main() {
  int n ;
  cout << "Enter the number of terms of series : ";
  cin >> n;

  cout << "\nFibonnaci Series Number: " <<  FindFibonacciRecursive(n) <<"\n";
     
   return 0;
}
