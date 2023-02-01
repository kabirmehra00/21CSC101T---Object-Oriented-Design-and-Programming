#include <iostream>
using namespace std;
int main() {
    int N1 = 10;
    float N2 = 10.5, sum;
    double N3 = 11.5;
    bool T = true;
    sum = N1 + N2;
    cout << sum << " = " << N1 << " + " << N2 << "\n";
    cout << "T is" << T << "\n";
    cout << "Increment of 10 is " << ++N1 << "\n";
    cout << "Decrement of 10.5 is " << --N2;
  return 0;
}
