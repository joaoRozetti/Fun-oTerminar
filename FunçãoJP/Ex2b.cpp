#include<iostream>

using namespace std;

int v(int n){
    return n%2==0;
}

int main(){
    int n;
    cout<<"Digite um numero inteiro: ";
    cin>>n;

    int result = v(n);
    if(result=1){
        cout<<n<<" Eh par"<<endl;
    }
    else{
        cout<<n<<" Eh impar"<<endl;
    }
}