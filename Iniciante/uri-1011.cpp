#include <iostream>
using namespace std;
 
int main() {
 
    double R;

    cin >> R;

    R = (R*R*R);

    printf("VOLUME = %.3lf\n", (4.0 * 3.14159 * R)/3.0);
 
return 0;
}