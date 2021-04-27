#include <iostream>
#include <string> 
using namespace std; 

int main() {
  int m, k, counter=0;

  cout << "Ievadit skaitli m>k ";
  cin >> m;
  cin >> k;
  for (int i=1; i<=m;i++)
  {
    if (i%k==0) {counter++;}
  }
  cout << counter;
  return 0;
}