#include <iostream>
using namespace std;

int main() {
 
   double V;
   cin >> V;

   int notas = V;
   int moedas = (V - notas)*100;

   cout << "NOTAS:" << endl;
   cout << notas/100 << " nota(s) de R$ 100.00" << endl;
   cout << (notas%100)/50 << " nota(s) de R$ 50.00" << endl;
   cout << ((notas%100)%50)/20 << " nota(s) de R$ 20.00" << endl;
   cout << (((notas%100)%50)%20)/10 << " nota(s) de R$ 10.00" << endl;
   cout << ((((notas%100)%50)%20)%10)/5 << " nota(s) de R$ 5.00" << endl;
   cout << (((((notas%100)%50)%20)%10)%5)/2 << " nota(s) de R$ 2.00" << endl;
   cout << "MOEDAS:" << endl;
   cout << (((((notas%100)%50)%20)%10)%5)%2 << " moeda(s) de R$ 1.00" << endl;
   cout << (moedas%100)/50 << " moeda(s) de R$ 0.50" << endl;
   cout << ((moedas%100)%50)/25 << " moeda(s) de R$ 0.25" << endl;
   cout << (((moedas%100)%50)%25)/10 << " moeda(s) de R$ 0.10" << endl;
   cout << ((((moedas%100)%50)%25)%10)/5 << " moeda(s) de R$ 0.05" << endl;
   cout << ((((moedas%100)%50)%25)%10)%5 << " moeda(s) de R$ 0.01" << endl;

return 0;
}