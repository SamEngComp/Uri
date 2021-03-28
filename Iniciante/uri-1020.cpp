#include <iostream>
using namespace std;

int main() {
 
   int D;
   cin >> D;

   cout << D/365 << " ano(s)" << endl;
   cout << (D%365)/30 << " mes(es)" << endl;
   cout << (D%365)%30 << " dia(s)" << endl;
return 0;
}