#include <iostream>
using namespace std;

int main() {
  int first_number, second_number, sum;
  cout << "Enter A Value: ";
  cin >> first_number;
  cout << "Enter B Value: ";
  cin >> second_number;
  sum = first_number + second_number;
  cout << sum << " = " << first_number << " + " <<  second_number << "\n";    
  sum = first_number * second_number;
  cout << sum << " = " << first_number << " * " <<  second_number << "\n";   
  sum = (first_number + second_number) * 5;
  cout << sum << " = (" << first_number << " + " <<  second_number << ") * 5 ";
  return 0;
}
