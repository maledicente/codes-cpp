#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main(){

    int sum=0, inicio, fim, intervalo, i, j;

    cout << "Insina o primeiro numero do intervalo: ";
    cin >> inicio;
    cout << "Insina o ultimo numero do intervalo: ";
    cin >> fim;
    intervalo=fim-inicio;
    int arr[intervalo];

    for(j=0; j <= intervalo; j++){
            arr[j]=inicio+j;
        }

    for(i = 0; i <= intervalo; i++){
        sum+=arr[i];
    }

    cout << "A soma de todos os numeros no intervalor e: " << sum << endl;

    return 0;
}
