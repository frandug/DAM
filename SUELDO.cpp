#include <iostream>
using namespace std;
int main(){
	const double IRPF=0.18 , CC= 69.97, FD=24.56,hipoteca=450,luz=65,agua=20,tlf_int=54 , gas=120 , comida=200 , ocio=180 , tabaco=60,g_com=31.84;
	double salario_bruto,retencion , s_neto_menos_gastos,suma_gastos ,paga_mensual ,cuota_empresario=511.35 , cuota_empleado; // error ;
	double sueldo_neto, hola ;

		cout<<"introduzca Paga mensual ";
		cin>>paga_mensual;
		salario_bruto = paga_mensual-cuota_empresario;
		retencion= (salario_bruto * IRPF)+ CC+FD ;//error logico con los negativos deberian estar sumando 
		
		
		sueldo_neto=  salario_bruto - retencion ;
		s_neto_menos_gastos= sueldo_neto -hipoteca - luz-agua-tlf_int-gas-comida-ocio-tabaco-g_com;// error logico meti el FD y me resto mas dinero que el que tenia que hacer 
		suma_gastos =  hipoteca + luz+agua+tlf_int+gas+comida+ocio+tabaco+g_com;
		cuota_empleado=IRPF + CC+ FD;

cout<< "el salario neto es "<<sueldo_neto<< endl;
cout <<" y la retencion es de " <<retencion<< endl;
cout<<"la suma de todos los gastos es de "<<suma_gastos<< endl;
cout<<" el sueldo menos los gastos mensuales quedaria en :"<<s_neto_menos_gastos<< endl;
cout<<"la cuota del empleado es " <<cuota_empleado<< endl;
cout<<"la cuota del empresario es " <<cuota_empresario<<endl;

}