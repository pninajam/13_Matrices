#include<iostream>
using namespace std;

int main(){
    int n,s;
    s=0;
    cout<<"Ingrese el numero de orden de la matriz cuadratica: ";
    cin>>n;
    int matriz[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Matriz["<<i+1<<"]["<<j+1<<"]:";
            cin>>matriz[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                s+=matriz[i][j];
            }
        }
    }
    cout<<"La Sumatoria de los elementos que este por encima de la Diagonal es: "<<s<<endl;
}   