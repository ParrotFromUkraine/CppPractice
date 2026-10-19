#include <iostream>

using namespace std;

int main() {
 int height;
 int width; 
 int resetH;
 int resetW;

 cout << "Enter height:" << endl;
 cin >> height;
 resetH = height;
 cout << "Enter width:" << endl;
 cin >> width;
 resetW = width;

 if (width < 3) {
  cout << "Width must be at least 3" << endl;
  return 0;
 };

 while (height > 0){
  if (height == resetH || height == 1) {
   while (width > 0) {
    cout << "*";
    width--;
   };
   width = resetW;
   cout << endl;
  } else {
   cout << "*";
   while (width > 2) {
    cout << " ";
    width--;
   };
   cout << "*" << endl;
   width = resetW;
  };
  height--; 
 };
}; 


// int drawFullLine (int x) {
//  while (x > 0) {
//   cout << "*";
//   x--;
//  };
//  cout << endl;
// };

// int drawEmptyLine (int x) {
//  cout << "*";
//  while (x > 1) {
//   cout << " ";
//   x--;
//  };
//  cout << "*" << endl;
// };
