#include <iostream>
using namespace std;

int main() {
 
   double V;
   cin >> V;
    // ([0,25], (25,50], (50,75], (75,100]) 
   if (V >= 0 && V <= 25) {
        printf("Intervalo [0,25]\n");
   } else if (V > 25 && V <= 50) {
        printf("Intervalo (25,50]\n");
   } else if (V > 50 && V <= 75) {
        printf("Intervalo (50,75]\n");
   } else if (V > 75 && V <= 100) {
        printf("Intervalo (75,100]\n");
   } else {
       cout << "Fora de intervalo\n";
   }
   
return 0;
}