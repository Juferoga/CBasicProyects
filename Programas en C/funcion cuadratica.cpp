#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int men;
	double div,inter,b,a,c,p=1,res;
	
	system("color 8f");
		cout <<"______________________________________________________________________________"<<endl;
		cout <<"|                       CALCULADORA ECUACION CUADRATICA                       |"<<endl;
		cout <<"|_____________________________________________________________________________|"<<endl;cout<<endl;cout<<endl;
		cout <<"                        ______________________________"<<endl;
		cout <<"                       |-b (+ o -) a raiz(b^2-4ac)/2a|"<<endl;
		cout <<"                       |_____________________________|"<<endl<<endl<<endl;

		while ( p==1 ){
			cout<<"                          Digite el valor para c"<<endl;
			cout<<"                                  -> ";cin>>c;
			cout<<"                          Digite el valor para b"<<endl;
			cout<<"                                  -> ";cin>>b;
			cout<<"                          Digite el valor para a"<<endl;
			cout<<"                                  -> ";cin>>a;
			cout<<"   Realizara la operacion con signo positivo digite 1 o negativo digite 2"<<endl;
			cin>>men;
			inter = b*b-(4*a*c);
			div=2*a;
			switch(men)
{
	case 1: 
	res= (-b +sqrt(inter))/div;
	if(2*a != 0){
	
	cout<<"                                 El resultado Es: " << res<<endl;
}
else {
    cout<<"                            El resultado Es indeterminado " <<endl;
}

		break;
	case 2: 
	res= (-b -sqrt(inter))/div;	
	if(2*a != 0){
	
	
	cout<<"                                 El resultado Es: " << res<<endl;
}
else {
    cout<<"                            El resultado Es indeterminado " <<endl;
}
	break;
}
			
				cout<<"digite 1 para finalizar el programa y otro numero para reiniciar";
		cin>>p;
		
			if (p==1){
		p=3;
		}
		else{
			p=1;
		}
		
			}
	system("pause");
}
