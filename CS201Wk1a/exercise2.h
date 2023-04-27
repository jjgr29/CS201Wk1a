#include <iostream>
using namespace std;

void exercise2() {
  int a, b;
  float quotient;
  cout <<"\nExercise 2: C++ Output Formatting\n";
  cout << "Unformatted: " << 2.3891918182020 << endl;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout << "Formatted:   " << 2.3891918182020 << endl;
}