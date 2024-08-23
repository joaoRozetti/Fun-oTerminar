#include<iostream>

using namespace std;

void verificar(){
    int n;

    cout<<"Digite um numero inteiro: ";
    cin>>n;

    if(n%2==0){
        cout<<"Eh par"<<endl;
    }
    else{
        cout<<"Eh impar"<<endl;
    }
}

int main(){
    verificar();
    return 0;
}
    
