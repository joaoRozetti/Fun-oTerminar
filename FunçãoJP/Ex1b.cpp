#include<iostream>

using namespace std;

int verificar(int n){
    return n%4==0;
}

int main(){
    int n;
    cout<<"Digite um numero inteiro: ";
    cin>>n;

    if(verificar(n)){
        cout<<n<<" Eh multiplo de 4"<<endl;
    }
    else{
        cout<<n<<" Nao eh multiplo de 4"<<endl;
    }
}
