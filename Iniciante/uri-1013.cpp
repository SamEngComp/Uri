#include <iostream>
using namespace std;
 
int maior(int a, int b) {
    return (a+b+abs(a-b))/2;
} 

int main() {
 
   int A, B, C;

    cin >> A >> B >> C;

    cout << maior(maior(A, B), C) << " eh o maior\n";
 
return 0;
}