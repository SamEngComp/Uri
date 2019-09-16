
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






#include <iostream>

using namespace std;

int main(){

    long int n;
    cin >> n;

    long int i, aux, o, ant;
    int t = 0;
    aux = 3;
    i = 3;
    o = 0;
    ant = 2;
    while(t == 0){

        aux += ant;
        o +=(aux - i-1);
        if(o == n){
            cout << "aqui1\n";
            cout << (i+o) << endl;
            return 0;
        }else if(o > n){
            cout << "aqui2\n" << o << i << endl;
            cout << (i+(o-n)) << endl;
            return 0;
        }
        ant = aux;
        i = aux;
    }

    return 0;
}
