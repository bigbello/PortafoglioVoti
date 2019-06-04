#include<iostream>

using namespace std;

int main(){
    int dividendo;
    int divisore;
    int conta = 0;
    int quoziente;

    cin >> divisore >> dividendo;
    if(dividendo % divisore == 0){
        quoziente = dividendo / divisore;
        while(quoziente != 1){
            conta++;
            if(quoziente % 3 == 0){
                quoziente = quoziente / 3;
            }
            else if(quoziente % 2 == 0){
                quoziente = quoziente / 2;
            }
            else{
                cout << -1;
                return 0;
            }
        }
        cout << conta;
    }
    else{
        cout << -1;
    }



    return 0;



}
