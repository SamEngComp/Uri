
#include <iostream>

using namespace std;

int main()
{
    int f = 0, i;
    int v[45];
    int cont = 1, aux= 0;
    for(i=0;i<45;i++){
        aux++;
        if(cont%2!=0 && aux%2!=0){
            cin >> v[i];
        }else{
            v[i] = 0;
        }
        if(cont == aux){
            cont++;
            aux=0;
        }
    }
    aux = 0;
    cont = 1;
    int soma =0 , dif;
    for(i=0;i<45;i++){
        aux++;
        if(cont%2==0 ){
            if(aux%2!=0){
                v[i] = v[i+f+1];
                soma += v[i];
            }else{
                v[i] = v[i+f+2];
                soma +=v[i];
                if(soma != v[i-f-1]){
                    dif = v[i-f-1] - soma;
                    dif /= 2;
                    v[i+f+1] = dif;
                    v[i-f-1] += dif;
                    v[i-f-2] += dif;
                }
            }
        }
        if(cont == aux){
            cont++;
            aux=0;
            f++;
        }
    }
    
    
    aux = 0;
    cont = 1;
    for(i=0;i<45;i++){
        aux++;
       cout << v[i] << " ";
        if(cont == aux){
            cont++;
            aux=0;
            cout << endl;
        }
    }
    
    return 0;
}
