
#include <iostream>
#include <stdio.h>
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
    cont =1;
    f = 0;
    aux = 0;
    for(i=0;i<45;i++){
            aux++;
            if(cont%2==0 )
                if(aux%2!=0)
                    v[i] = v[i+f+1];
                else
                    v[i] = v[i+f+2];

            if(cont == aux){
                cont++;
                aux=0;
                f++;
            }
        }
    if(v[1]+v[2] < v[0]){
        while(v[1]+v[2] < v[0]){
            v[1]++;
            v[2]++;
        }
    }

    aux = 0;
    cont = 1;
    f = 0;
    for(i=0;i<45;i++){
        aux++;
        if(aux%2==0 && cont > 2){
            printf("v[%d - 1]+v[%d] < v[%d-%d-3]\n", i, i, i, f-1);
          if(v[i-1]+v[i] < v[i-(f-1)-2]){
            while(v[i-1]+v[i] < v[i-(f-1)-2] && v[i+1]+v[i] < v[i-(f-1)-1]){
                v[i]++;
            }
          }
        }


        if(cont == aux){
            cont++;
            aux=0;
            f++;
        }
    }
cout << endl;
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
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){

    short int g, p, i, j, s, aux, o, k;
    do{
        cin >> g >> p;
        if(!(g == 0 && p == 0)){
            short int m[g][p], v[p];
            for(j=0;j<p;j++) v[j] = 0;

            for(i=0;i<g;i++){
                for(j=0;j<p;j++) cin >> m[i][j];
            }
            cin >> s;
            short int t;
            for(o=0;o<s;o++){
                cin >> t;
                for(k=0; k<t; k++){
                    cin >> aux;
                    for(i=0;i<g;i++){
                            v[m[i][k]-1] += aux;
                    }
                }
            }
            short int maior = v[0];
            for(j=0;j<p;j++){
                if(maior < v[j]) maior = v[j];
            }
            short int en = 0;
            for(j=0;j<p;j++){
                if(maior == v[j]) {
                    if(en == 1){
                        cout << " ";
                    }
                    cout << j;
                    en=1;
                }
            }
            cout << endl;
        }
    }while(!(g == 0 && p == 0));

    return 0;
}
