#include <math.h>
#include <iostream>
using namespace std;

int main() {
 
   double A, B, C;
   cin >> A >> B >> C;
   
   double delta = (B*B) - (4.0*A*C);

   if (delta < 0.0 || A == 0.0) {
        printf("Impossivel calcular\n");
   } else {
        printf("R1 = %.5lf\n", ((-B) + sqrt(delta))/(2.0 * A));
        printf("R2 = %.5lf\n", ((-B) - sqrt(delta))/(2.0 * A));
   }
   
return 0;
}