#include <iostream>

using namespace std;

int maxi(int a, int b) {
  if( a > b) {
    cout << "The Larger Number is: " << a;
  } else {
    cout << "The larger Number is: " << b;
  }
}

int main () {
  int n1, n2;

  cout << "Enter 1st number: ";
  cin >> n1;

  cout << "Enter 2nd number: ";
  cin >> n2;

  maxi(n1, n2);
  return 0;
}