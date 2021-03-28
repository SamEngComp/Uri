#include <iostream>
using namespace std;
 
int main() {
 
    int cod, qtd;
    double valor, soma=0.0;

    cin >> cod >> qtd >> valor;
    soma += (qtd * valor);

    cin >> cod >> qtd >> valor;
    soma += (qtd * valor);

    printf("VALOR A PAGAR: R$ %.2lf\n", soma);
 
return 0;
}