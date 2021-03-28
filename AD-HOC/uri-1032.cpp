#include <iostream>
#include <vector>
using namespace std;
 
int main() {

    int primos[3501], c, i, primo, d;
    c=0;
    i=0;
    while(c<3501){
        d = 2;
        primo = 1;
        if (i <= 1)
            primo = 0;

        while (primo == 1 && d <= i / 2) {
            if (i % d  == 0)
                primo = 0;
            d = d + 1;
        }

        if(primo == 1) {
            primos[c] = i;
            c++;
        }
        i++;
    }  
 
    vector<int> pessoas;
    int nc, k, atual;
    do {
        cin >> nc;
        if (nc != 0){

            atual = 0;
            for (i=1; i<=nc; i++) {
                pessoas.push_back(i);
            }
            
            k = 0;
            while(pessoas.size() > 1) {

                if (primos[k] + atual - 1 < pessoas.size()) {
                    pessoas.erase(pessoas.begin() + (atual + primos[k]-1));
                    atual += (primos[k]-1);
                    if(atual > pessoas.size()-1) atual = 0;
                } else if (primos[k] + atual - 1 > pessoas.size()){
                    int newPoint = primos[k] + atual - 1;
                    newPoint = newPoint % pessoas.size();
                    pessoas.erase(pessoas.begin() + newPoint);
                    atual = newPoint;
                    if(atual > pessoas.size()-1) atual = 0;
                } else {
                    if(pessoas.size() > 1){
                        pessoas.erase(pessoas.begin());
                        atual = 0;
                    }
                }

                k ++;
            }

            cout << pessoas[0] << endl;
            pessoas.clear();

        }
    }while(nc != 0);
    
 
return 0;
}