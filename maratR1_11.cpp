
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

#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct ponto {
    char l;
    char c;
} Po;

int main(){

    Po pos[9], cav[8], peos[16];
    short int i, o;
    for(i=0;i<9;i++){
        cin >> pos[i].l;
        if(pos[i].l == '0') return 0;
        cin >> pos[i].c;
    }

    short int linha = pos[0].l - '0';
    o = 0;
    cav[o].l = (linha+2) + '0';
    cav[o].c = pos[0].c + 1;
    o++;
    cav[o].l = (linha+2) + '0';
    cav[o].c = pos[0].c - 1;
    o++;
    cav[o].l = (linha-2) + '0';
    cav[o].c = pos[0].c + 1;
    o++;
    cav[o].l = (linha-2) + '0';
    cav[o].c = pos[0].c - 1;
    o++;
    cav[o].l = (linha+1) + '0';
    cav[o].c = pos[0].c + 2;
    o++;
    cav[o].l = (linha-1) + '0';
    cav[o].c = pos[0].c + 2;
    o++;
    cav[o].l = (linha+1) + '0';
    cav[o].c = pos[0].c - 2;
    o++;
    cav[o].l = (linha-1) + '0';
    cav[o].c = pos[0].c - 2;
    o++;

    short int j, k = 0;
    for(i=0;i<16;i++){
        peos[i].l = pos[k].l + 1;
        peos[i].c = pos[k].c + 1;
        i++;
        peos[i].l = pos[k].l + 1;
        peos[i].c = pos[k].c - 1;
        k++;
    }

    for(i=0;i<o;i++){
        for(j=0;j<16;j++){
            if(cav[i].c == peos[j].c){
                
            }
        }
    }
    return 0;
}

