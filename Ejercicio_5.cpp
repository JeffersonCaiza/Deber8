#include <iostream>
 
using namespace std;
 
int main(){
 
    int i, n;
 
    int a[100];
 
    a[0] = 0;
    a[1] = 1;
 
    cout << "Que termino de la sucecion de numeros desea calcular: ";
 
    cin >> n;
 
    cout << "\n";
 
    for(i=1; i < n; i++){
 
        a[i+1] = a[i-1] + a[i];
 
    }
 
 
    for(i=0; i < n; i++){
 
        cout << a[i] << " ";

    }
    
    
    cout<<"\nEl termino en esa posicion es el: "<<a[i-1]<<endl;
 
 	return 0;
}
