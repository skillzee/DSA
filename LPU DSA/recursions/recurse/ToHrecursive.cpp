#include <iostream>
using namespace std;
int moves=0;
void Hanoi(int n, char a, char b, char c){
  moves++;
  if(n == 1){
    cout << "Move disc " << n << " from " << a << " to " << c << endl;
  }else{  
    Hanoi(n-1, a,c,b);
    cout << "Move disc " << n << " from " << a << " to " << c << endl;
    Hanoi(n-1,b,a,c);
  }
}
int main(){  
  int n, m;
  cout << "Enter the number of discs: " << endl;
  cin >> n;
  Hanoi(n, 'A', 'B', 'C');
  cout << "It took " << moves << " moves. " << endl;
}


