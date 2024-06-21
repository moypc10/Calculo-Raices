#include <bits/stdc++.h>
 
using namespace std;
typedef long double ld;

int main() {
    ld a,b,c;
    cin >> a >> b >> c;

    ld r1 = 0, r2 = 0;
    bool raicesReales = false;

    //Calcular el determinante que nos dira informacion de las raíces
    ld d = pow(b,2) - (4 * a * c);

    //Caso 1: D < 0 = Raíces Complejas
    if(d < 0){
        //Lo dejamos en False
    }
    //Caso 2: D = 0 = Raíces Iguales
    else if(d == 0){
        r1 = -b / (2 * a);
        r2 = r1 ;
        raicesReales = true;
    }
    //Caso 3: D > 0 = Raíces Diferentes
    else if(d > 0){
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        raicesReales = true;
    }

    //Si se encontraron las imprime
    if(raicesReales){
        cout << "{" << r1 << ", " << r2 << "}";
    }else{
        cout << "{ }" << endl;
    }
    
    return 0;
    
}
