#include <iostream>
using namespace std;

int main() {
 
   int V;
   cin >> V;

   cout << V/3600 << ":";
   cout << (V%3600)/60 << ":";
   cout << (V%3600)%60 << endl;

return 0;
}