#include <iostream>
#include <string>
#include <vector>

using namespace std;

int learning () {
 char c = 'A';
 bool b = true;
 int i = 42;
 long int l = 1234567890;
 short int s = 10;
 float f = 3.14f; // f suffix indicates a float literal
 double d = 2.71828;
 
 int a; 
 a = 1;

 const float pi = 3.14159; // const indicates that the value cannot be changed

 cout << "Hello, World!" << endl;
 cout << c << endl; 
 int num; 
 cout << "Enter the number" << endl;
 cin >> num;

 int result = num * 2; 
 
 result += 10;
 result -= 5;
 result *= 3;
 result /= 2;
 result++;
 result--; 

 cout << "The result is: " << result << endl;

 return 0;
};

int main() {
 cout << "Starting program..." << endl;
 
 int num1;
 int num2;

 cout << "Enter first number:" << endl;
 cin >> num1;
 cout << "Enter second number:" << endl; 
 cin >> num2;

 while (num1 > 0){
  cout << "*"; 
  num1--;
 };

 cout<< endl;

 cout << "Program completed." << endl;
 return 0;
};

