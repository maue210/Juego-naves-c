#include <iostream>
#include<conio.h>
//#include<listas.h>
#include<math.h>
#define PI 3.141592654
using namespace std;
int x1,x2,x,y,ultimo,primero;
int yq1,y2,v,z;
int p0,k;
int Dx1,Dy1;
int l,c,aux;
int resta;
// simetria
double w1;
double angulo;
double distancia,xa,ya,xa1,ya1;
Nodo *actual = actual;
//traslacion
int mx,gx,gy;
int my;
Nodo *trasla = trasla;


//prototipo de funciones

int inclinada(int x1, int x2,int y1,int y2)
{
	k=0;
   Dx1=x2-x1;
   Dy1=y2-y1;
    p0=(2*Dy1)-Dx1;
    
	
   if(x1>x2){
   	x=x1;
   	y=y2;
	ultimo=x1;
	primero=x2;
   }else{
   	x=x1;
   	y=y1;
   	ultimo=x2;
   	primero=x1;
   }  
}

   Nodo* trazarlinea(int x1,int x2,int y1,int y2){
   		resta=1;
	Nodo *lista=NULL;
	
Dx1=x2-x1;
   Dy1=y2-y1;
if(x1>x2 && y1>y2){	
// std::cout<<"llega aqui 0 "<<k<<std::endl;
	l=x1;
	c=y1;
	x1=x2;
	y1=y2;
	x2=l;
	y2=c;
}    
if(x1>x2){
//	 std::cout<<"llega aqui 1 "<<k<<std::endl;
insertarLista(lista,x1,y1);
 x2=x1+(x1-x2);
inclinada(x1,x2,y1,y2);

 while (x<ultimo){
 x=x+1;

if (p0<0){
	k++;
	p0=p0+(2*Dy1);
	
}else{
	
	y=y+1;
	p0=p0+(2*(Dy1-Dx1));
	k++;
}
aux=x;
aux=x-(2*resta);
resta=resta+1;
//x=x-(2*resta);
//resta=resta+1;
//std::cout<<"k: "<<k<<" p: "<<p0<<" x1:  "<<x<<" y1:  "<<y<<std::endl;
insertarLista(lista,aux,y);

				}
				//mostrarlista(lista);
				return 0;
			}
if(y1>y2){
//	 std::cout<<"llega aqui 2 "<<k<<std::endl;
insertarLista(lista,x1,y1);
 y2=y2+(2*(y1-y2));
inclinada(x1,x2,y1,y2);

 while (x<ultimo){
 x=x+1;

if (p0<0){
	k++;
	p0=p0+(2*Dy1);
	
}else{
	
	y=y+1;
	p0=p0+(2*(Dy1-Dx1));
	k++;
}
aux=y;
aux=y-(2*resta);
resta=resta+1;
//x=x-(2*resta);
//resta=resta+1;
//std::cout<<"k: "<<k<<" p: "<<p0<<" x1:  "<<x<<" y1:  "<<y<<std::endl;
insertarLista(lista,x,aux);

				}
				
				return 0;	
}
if(x2>x1 && y2>y1){
//	std::cout<<"llega aqui 123-: "<<Dy1<<Dx1<<std::endl;
if(Dx1<Dy1){
x2= x2+(Dy1-Dx1);
//std::cout<<"llega aqui 123: "<<x2<<std::endl;
}
}
// std::cout<<"llega aqui 3 "<<k<<std::endl;
inclinada(x1,x2,y1,y2);
//std::cout<<"k: "<<k<<" p: "<<p0<<" x1:  "<<x<<" y1:  "<<y<<std::endl;
insertarLista(lista,x,y);
if(x1==x2|y1==y2){
	if(x1==x2){
		if(y1<y2){
	while(y1<y2){
	y1=y1+1;
	y=y1;
	x=x1;
	insertarLista(lista,x,y);
	}
		}else{
			while(y2<y1){
		y1=y1-1;
		y=y1;
		x=x1;
		insertarLista(lista,x,y);
		}
	}
	}else if(y1==y2){
		if(x1<x2){
		while(x1<x2){
		
	x1=x1+1;
	y=y1;
	x=x1;
	insertarLista(lista,x,y);
	}
	}else{
	while(x2<x1){
		
	x1=x1-1;
	y=y1;
	x=x1;
	insertarLista(lista,x,y);	
	}
	}
	}
}else if (x1<x2 && y1<y2){

if(Dx1>Dy1){

while (primero<ultimo){
primero=primero+1;

if (p0<0){
	x=x+1;
	k++;
	p0=p0+(2*Dy1);
	
}else{
	x=x+1;
	y=y+1;
	p0=p0+(2*(Dy1-Dx1));
	k++;
}
//std::cout<<"k: "<<k<<" p: "<<p0<<" x1:  "<<x<<" y1:  "<<y<<std::endl;
insertarLista(lista,x,y);
}
}else{
	resta=0;
while (primero<ultimo){
primero=primero+1;

if (p0<0){
	x=x+1;
	k++;
	p0=p0+(2*Dy1);
	
}else{
	x=x+1;
	y=y+1;
	p0=p0+(2*(Dy1-Dx1));
	k++;
}
aux=x;
aux=aux-resta;
resta=resta+1;
//std::cout<<"k: "<<k<<" p: "<<p0<<" x1:  "<<aux<<" y1:  "<<y<<std::endl;
insertarLista(lista,aux,y);
}	
}
}
	
//getch ();
return lista;
   }

Nodo* coordCirc(int r){
	int x=0;
	int y=r;
	int p=0;
	Nodo *lista=NULL;
	y=r;
	p=1-r;
	insertarLista(lista,x,y);
	while (x<=y){
		if (p<=0){
		x=x+1;
		p=p+(2*x)+1;
		}else{
			x=x+1;
			y=y-1;
			p=p+(2*x)-(2*y)+1;
		}
		insertarLista(lista,x,y);
	//std::cout<<" x1:"<<x<<" y1: "<<y<<std::endl;	
	}
	//mostrarlista(lista);
	return lista;

}

void redon(double w){
	if(w-floor(w) < ceil(w)-w){
	 w1=floor(w);

}
	else{
	
	w1=ceil(w); 	

}
}

void cartpol(int x, int y){

	distancia=sqrt((pow(x,2))+(pow(y,2)));
	angulo= atan(y/x);
	//a grados
	angulo= angulo/(PI/180);
//	std::cout<<"Distancia: "<<distancia<<" Angulo: "<<angulo<<std::endl;

}	

void polcar(double distancia, double angulo){

	angulo= angulo*(PI/180);
	//x=cos(angulo);
	//y=sin(angulo);
	//std::cout<<"Distancia: "<<x<<" Angulo: "<<y<<std::endl;
	xa=distancia*(cos(angulo));

	ya=distancia*(sin(angulo));

//	std::cout<<"x : "<<x<<" y : "<<y<<"angulo"<<angulo<<std::endl;
}

Nodo* simetria(Nodo *lista){
	//Nodo *actual = lista;
	

	while (lista != NULL){

	 xa1=lista->dato1;
	 ya1=lista->dato2;

	//cartpol(xa1,ya1);
	distancia=sqrt((pow(xa1,2))+(pow(ya1,2)));
	angulo= atan(xa1/ya1);
	//a grados
	angulo= angulo/(PI/180);
	//fin

	angulo=angulo-45;

	polcar(distancia,angulo);

	redon(xa);
	xa=w1;
	redon(ya);
	ya=w1;

	int xb=(int) xa;
	int yb=(int) ya;
	insertarLista(actual,xb,yb);
	//std::cout<<"AQUI TERMINA 1 "<<std::endl;

	angulo=angulo-45;

	polcar(distancia,angulo);

	redon(xa);
	xa=w1;
	redon(ya);
	ya=w1;
	 xb=(int) xa;
	 yb=(int) ya;
	
	insertarLista(actual,xb,yb);
//	std::cout<<"AQUI TERMINA 2 "<<std::endl;
	angulo=angulo-45;

	polcar(distancia,angulo);

	redon(xa);
	xa=w1;
	redon(ya);
	ya=w1;
	 xb=(int) xa;
	 yb=(int) ya;

	insertarLista(actual,xb,yb);
//	std::cout<<"AQUI TERMINA 3 "<<std::endl;
		angulo=angulo-45;
	polcar(distancia,angulo);
	redon(xa);
	xa=w1;
	redon(ya);
	ya=w1;
	 xb=(int) xa;
	 yb=(int) ya;
	insertarLista(actual,xb,yb);
	//std::cout<<"AQUI TERMINA 4 "<<std::endl;
		angulo=angulo-45;
	polcar(distancia,angulo);
	redon(xa);
	xa=w1;
	redon(ya);
	ya=w1;
	 xb=(int) xa;
	 yb=(int) ya;
	insertarLista(actual,xb,yb);
//	std::cout<<"AQUI TERMINA 5 "<<std::endl;
		angulo=angulo-45;
	polcar(distancia,angulo);
	redon(xa);
	xa=w1;
	redon(ya);
	ya=w1;
	 xb=(int) xa;
	 yb=(int) ya;
	insertarLista(actual,xb,yb);
	//std::cout<<"AQUI TERMINA 6 "<<std::endl;
			angulo=angulo-45;
	polcar(distancia,angulo);
	redon(xa);
	xa=w1;
	redon(ya);
	ya=w1;
	 xb=(int) xa;
	 yb=(int) ya;
	insertarLista(actual,xb,yb);
	//std::cout<<"AQUI TERMINA 7 "<<std::endl;
			angulo=angulo-45;
	polcar(distancia,angulo);
	redon(xa);
	xa=w1;
	redon(ya);
	ya=w1;
	 xb=(int) xa;
	 yb=(int) ya;
	insertarLista(actual,xb,yb);
	//std::cout<<"AQUI TERMINA 8 "<<std::endl;
	
	lista=lista->siguiente;
}
	//mostrarlista(actual);
	return actual;
	
}
Nodo* traslacion(int mx, int my, Nodo *lista){
	while(lista != NULL){
	//std::cout<<"Entra "<<std::endl;
	gx=lista->dato1;
	gy=lista->dato2;
	gx=gx+mx;
	gy=gy+my;
	insertarLista(trasla,gx,gy);
	lista= lista->siguiente;
	}
	//mostrarlista(trasla);
	return trasla;
}
