#include <iostream>
using namespace std;

void exercise1() {
  string dogName;
  int dogAge;
  cout <<"\nExercise 1: C++ Input & Output\n";
  cout << "Hello! Please enter the name of your dog: ";
  cin >> dogName;

  cout << "How old is "<< dogName << "?  ";
  cin >> dogAge;
  
  cout << "That means " << dogName << " is " << dogAge << " in dog years and "
       << dogAge*7 << " in people years." << endl<< endl;
}