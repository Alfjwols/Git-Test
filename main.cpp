
#include <iostream>

using namespace std;
int main(){
  int n;
  
  cout << "Please enter a number: ";

  int sum = 0;
  int product = 1;
  cin >> n;
  for(int i = 1; i <= n; i++){
    sum += i;
    product *= i;
  }

  cout << endl;
  cout << "The sum of the numbers 1-n is: " << sum << endl;
  cout << "The product of the numbers 1-n is: " << product << endl;
}
