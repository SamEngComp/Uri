#include<math.h>
#include <iostream>
using namespace std;

int main() {
 
   double X1, Y1, X2, Y2, soma=0.0;

    cin >> X1 >> Y1 >> X2 >> Y2;
    soma += ((X2 - X1) * (X2 - X1));
    soma += ((Y2 - Y1) * (Y2 - Y1));

    printf("%.4lf\n", sqrt(soma));
 
return 0;
}