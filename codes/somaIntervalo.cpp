#include <iostream>
using namespace std;

int main(void){

    int sum, *arr=nullptr, inicio, fim, intervalo, i, j;

    cout << "Insina o primeiro numero do intervalo: ";
    cin >> inicio;
    cout << "Insina o ultimo numero do intervalo: ";
    cin >> fim;
    intervalo=fim-inicio;
    arr = new int [intervalo];

    for(j=0; j <= intervalo; j++){
            arr[j]=inicio+j;
        }
    sum=0;
    for(i = 0; i <= intervalo; i++){
        sum+=arr[i];
        cout << sum << endl;
    }
    delete [] arr; // delete array pointed

    cout << "A soma de todos os numeros no intervalor e: " << sum << endl;

    return 0;
}
