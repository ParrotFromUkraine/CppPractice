#include <iostream>
#include <string>

using namespace std;

int main() {
 int correctPassword = 1234;
 int password;
 int attempts = 3;
 
 while (attempts > 0) {

  cout << "Enter the password: ";
  cin >> password;

  if (!password){
   cout << "Must be not empty!" << endl;
  }else if (password == correctPassword) {
   cout << "Hello user!" << endl;
   break;
  }else if (password != correctPassword){
   cout << "Wrong password!" << endl;
  }
  attempts--;
 };

 return 0;
};