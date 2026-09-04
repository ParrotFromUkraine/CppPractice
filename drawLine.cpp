#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
 int num1;
 int num2;
 int reset;

 cout << "Enter first number:" << endl;
 cin >> num1;
 cout << "Enter second number:" << endl; 
 cin >> num2;
 reset = num2;

 while (num2 > 0){
  while (num1 > 0){
   cout << "*"; 
   num1--;
  };
  num1 = reset;
  cout << endl;
  num2--;
 };

 cout << endl;
 return 0;
}; 