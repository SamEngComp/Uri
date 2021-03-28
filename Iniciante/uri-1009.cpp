#include <iostream>
using namespace std;
 
int main() {
 
    char name [20];
    double salary, sales;

    cin >> name >> salary >> sales;
    printf("TOTAL = R$ %.2lf\n", (salary + (sales * 0.15)));
 
return 0;
}