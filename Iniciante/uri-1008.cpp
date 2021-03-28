#include <iostream>
using namespace std;
 
int main() {
 
    int number, horas;
    double valorHora;

    cin >> number >> horas >> valorHora;

    cout << "NUMBER = " << number << endl;
    printf("SALARY = U$ %.2lf\n", (horas * valorHora));
 
return 0;
}