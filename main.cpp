#include <iostream>
using namespace std;
int main() {
int num;
int i = 1;


cout << "What number would you like multiples of?" << endl;
cin >> num;
  
cout << endl;
  
for(int i = 1; i <= 10; i++)
{
cout << num*i << endl;
}

cout << "..." << endl;
  
  
return 0;
}