#include <bits/stdc++.h>

using namespace std;

bool CzyPierwsza(int n){
  if (n==2){return true;}
  if (n%2==0){return true;}
  int pierwiastek = sqrt(n);
  for (int i = 3; i<= pierwiastek; i=i+2){if (n%i == 0){return false;}}
  return true;
}

int main () {
  for (int liczba = 100; liczba <= 999; liczba++) {
    if (CzyPierwsza(liczba)) {
      cout << liczba << " ";
    }
  }
  cout << endl;
  
  return 0;
}

