#include <iostream>
#include <vector>
using namespace std;
 
int main() {
 
    vector<int> pessoas;
    int nc, n, k, atual;
    cin >> nc;

    int cases = 0;
    while (cases < nc) {

        cin >> n >> k;
        atual = 0;
        for (int i=1; i<=n; i++) {
            pessoas.push_back(i);
        }

        while(pessoas.size() > 1) {

            if (k + atual - 1 < pessoas.size()) {
                pessoas.erase(pessoas.begin() + (atual + k-1));
                atual += (k-1);
                if(atual > pessoas.size()-1) atual = 0;
            } else if (k + atual - 1 > pessoas.size()){
                int newPoint = k + atual - 1;
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

        }

        printf("Case %d: ", cases + 1);
        cout << *pessoas.begin() << endl;
        
        pessoas.clear();

    cases ++;    
    }
    
 
return 0;
}