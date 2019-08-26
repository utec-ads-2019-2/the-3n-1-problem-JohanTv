#include <iostream>
using namespace std;

int ciclos(unsigned int num){
    int contador = 1;
    while(num!=1){
        if(num % 2 == 1) num = 3*num +1;
        else num/=2;
        contador++;
    }
    return contador;
}

int main() {
    unsigned int star, end;
    int max=0;
    int temp;
    while(scanf("%u %u ",&star,&end)==2){
        cout<<star<<" "<<end<<" ";
        for(int i=star; i<=end; i++){
            temp = ciclos(i);
            if(max < temp) max = temp;
        }
        cout<<max<<endl;
        max=0;
    }

}
