#include <iostream>
using namespace std;

void exercise3() {
  int a, b, intQuotient;
  float quotient;
  cout <<"\nExercise 3: C++ Integer Division, Static_Cast, Modulus\n";
  cin.clear();
  cout << "Please enter two numbers: ";
  cin >> a >> b;
  intQuotient = a/b;
  cout << "The quotient of "<< a << " and " << b << " is " << intQuotient << "    --- integer division\n";
  quotient = a/static_cast<double>(b);
  cout.precision(2);
  cout << "The quotient of " << a << " and " << b << " is " << quotient << " --- with static cast" << endl;
  cout << "The remainder of " << a << " and " << b << " is " << a%b << endl;
  
}
    