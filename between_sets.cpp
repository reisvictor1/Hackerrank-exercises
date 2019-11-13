#include <bits/stdc++.h>

using namespace std;

//Problema é encontrar a soma de fatores de um array a(que os fatores serão divididos pelos itens de a) 
//e por um array b(que irá ser dividido pelos fatores).
/*
    Exemplo:
    a = [2,6]
    b = [16,32,96]

    Então, o fat[i]%a[i] == 0
    e, em seguida, b[i]%fat[i] == 0

*/


//Maior Divisor Comum
int gcd(int a, int b){

    if(a == 0)
        return b;

    return gcd(b%a,a);

}

int gcd_arr(int a[], int n){
    int result = a[0];
    for(int i = 1; i < n; i++)
        result = gcd(a[i],result);

    return result;
}

//Mínimo multiplo comum
int lcm_arr(int a[], int n){
    int result = a[0];

    for(int i = 1; i < n; i++)
        result = (a[i]*result)/gcd(result,a[i]);

    return result;
}

int main(){

    int a[] = {2,4};
    int b[] = {16, 32,96};

    int size_a = 2;
    int size_b = 2;

    // Pega o mdc do vetor b(aquele que os fatores vão dividir)
    int maior_div = gcd_arr(b,3);
    //Pega o mmc do vetor a(aquele que dividirá os fatores)
    int menor_multi = lcm_arr(a,2);

    int count = 0;

    //Vai passar por todos os multiplos do mmc de a até o mdc do b, e caso o maior d
    for(int i = menor_multi, j = 2; i <= maior_div; i = menor_multi*j, j++){
        if(maior_div%i == 0)
            count++;
    }

    cout << count << endl; 
    
    return 0;
}