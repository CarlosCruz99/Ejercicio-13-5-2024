#include <iostream>
using namespace std;
int main(){
    float horas=0, salario=0, impuesto=0;
    string nombre=".";
    cout<<"Ingrese su nombre: \n";
    cin>>nombre;
    cout<<"Ingrese sus horas trabajadas: \n";
    cin>>horas;
    if(horas<=160){
        salario=horas*10;
    }
    else if(horas>160){
        salario=1600+((horas-160)*15);
    }
        if(salario>=2201){
            impuesto=salario*0.3;
            salario=(salario-impuesto);
        }
        else if(salario>2000 && salario<2201){
            impuesto=salario*0.2;
            salario=(salario-impuesto);
        }
        cout<<nombre<<", su salario es de: $"<< salario;
        return 0;
}