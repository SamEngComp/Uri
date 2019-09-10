
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
