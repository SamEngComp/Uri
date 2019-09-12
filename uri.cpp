
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

using namespace std;

int main(){

    short int x, y, n;
    do{
        cin >> x >> y >> n;
        if(!(x==0 && y==0 && n==0)){
            int total = x * y;
            short int i, x1[n], y1[n], x2[n], y2[n];
            int auxL, auxC;
            for(i=0;i<n;i++)
                cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
            
            for(i=0;i<n;i++){
                
                if(x1 == x2) auxL = 1;
                else if(x1 > x2) auxL = x1 - x2 +1;
                else auxL = x2 - x1 + 1;

                if(y1 == y2) auxC = 1;
                else if(y1 > y2) auxC = y1 - y2 +1;
                else auxC = y2 - y1 +1;

                total -= (auxL * auxC);
            }
            cout << total << endl;
        }
    }while(!(x==0 && y==0 && n==0));

    return 0;
}
 if(x1 == x2) auxL = 1;
                else if(x1 > x2) auxL = x1 - x2 +1;
                else auxL = x2 - x1 + 1;

