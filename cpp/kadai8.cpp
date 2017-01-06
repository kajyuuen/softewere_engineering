#include <iostream>
using namespace std;

void swap(int& x, int& y){
  int n;
  n = x;
  x = y;
  y = n;
}

int main(){
  int x, y;
  cout << "x y\n";
  cin >> x >> y;
  swap(x ,y);
  cout << "x y\n" << x << " " << y << "\n";
}
