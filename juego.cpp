#include<graphics.h>
#include<conio.h>
#include <iostream>
#include <Calcularlinea.h>
#include <stdlib.h>
#include <windows.h>
#include <list>
//#include<winbgim.h>
using namespace std;
 int midx, midy;
 int puntuacion=0;
 int page=1;
 	COLORREF verdeFuerte = RGB (45, 121, 55);
	COLORREF verdeMedio = RGB (50, 159, 64);
	COLORREF verdeBajo = RGB (44, 192, 64);
	COLORREF verdeBajisimo = RGB (33, 220, 58);
	COLORREF verdeBajisisimo = RGB (0, 255, 34);
	COLORREF azulito = RGB (190, 245, 234);
	Nodo *listag = listag;
	Nodo *lisnave=lisnave;
//COLOR(r, g, b)
delimitar(){
   midx = getmaxx();
   midy = getmaxy();
   setviewport(midx-1366, midy-768, midx+1366, midy+768, 1);
 
  
} 

void rectangulo(int ladox,int ladoy,int x, int y,int col){

	int x2=x+ladox;
	int y2=y+ladoy;
	Nodo* lista=trazarlinea(x,x2,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, col);
	lista=lista->siguiente;
	}
	lista=trazarlinea(x,x,y,y2);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, col);
	lista=lista->siguiente;
	}
	lista=trazarlinea(x2,x2,y,y2);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2,col);
	lista=lista->siguiente;
	}
	lista=trazarlinea(x,x2,y2,y2);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, col);
	lista=lista->siguiente;
	}

	
}

//bases
bases(){
	int o=1357;
	int u=158;
	int z=9;
	int w=400;
	
	while(u>0){
	
	rectangulo(o,u,z,w,3);
	//rectangulo(1355,343,14,405,3);
	
	z=z+2;
	w=w+2;
	o=o-4;
	u=u-4;

}

	/*setcolor(3);
    setfillstyle(SOLID_FILL, 3);
    floodfill(100, 600, 3);*/
    
    	Nodo *lista=simetria(coordCirc(70));
	traslacion(423,508,lista);
	while(trasla!=NULL){
	putpixel(trasla->dato1, trasla->dato2, azulito);
	trasla=trasla->siguiente;
	
	}
		lista=simetria(coordCirc(69));
	traslacion(423,508,lista);
	while(trasla!=NULL){
	putpixel(trasla->dato1, trasla->dato2, azulito);
	trasla=trasla->siguiente;
	
	}
		o=1356;
	 u=53;
	 z=9;
	w=558;
	
	while(u>0){
	
	rectangulo(o,u,z,w,2);
	//rectangulo(1355,343,14,405,3);
	
	z=z+1;
	w=w+1;
	o=o-2;
	u=u-2;

}
		o=1356;
	 u=113;
	 z=9;
	w=611;
	
	while(u>0){
	
	rectangulo(o,u,z,w,2);
	//rectangulo(1355,343,14,405,3);
	
	z=z+2;
	w=w+2;
	o=o-4;
	u=u-4;

}
    
	/* lista=trazarlinea(9,1365,558,558);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, 2);
	lista=lista->siguiente;
	}
	lista=trazarlinea(9,1365,740,740);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, 2);
	lista=lista->siguiente;
	}
	lista=trazarlinea(9,9,558,740);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, 2);
	lista=lista->siguiente;
	}
	lista=trazarlinea(1365,1365,558,740);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, 2);
	lista=lista->siguiente;
	}
	setcolor(2);
    setfillstyle(SOLID_FILL, 2);
	floodfill(20,665,2);*/
}
colinas(){

//primer canion
rectangulo(6,3,12,396,4);
rectangulo(6,3,18,392,4);
rectangulo(6,3,24,396,4);
rectangulo(6,3,30,392,4);
rectangulo(32,3,12,388,4);
rectangulo(26,3,18,384,4);
rectangulo(12,3,28,380,4);
rectangulo(6,3,32,376,4);
rectangulo(6,3,35,372,4);
rectangulo(6,3,38,368,4);	
//colinas
	y=400;
	int i=400;
	while(i<558){
	Nodo *lista=trazarlinea(9,72,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}

y=404;
i=404;
while(i<558){
	Nodo *lista=trazarlinea(12,18,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
	
}

//colina 2
	y=470;
	i=470;
	while(i<558){
	Nodo *lista=trazarlinea(72,114,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//colina 3
	y=490;
	i=490;
	while(i<558){
	Nodo *lista=trazarlinea(114,166,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//colina 4
	y=490;
	i=490;
	while(i<558){
	Nodo *lista=trazarlinea(306,348,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//ciudadcupula
rectangulo(100,5,373,465,4);
rectangulo(70,5,388,460,4);
rectangulo(40,5,403,455,4);
//colina 5
	y=470;
	i=470;
	while(i<558){
	Nodo *lista=trazarlinea(348,498,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//colina 6
	y=490;
	i=490;
	while(i<558){
	Nodo *lista=trazarlinea(498,540,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//torre
rectangulo(6,20,555,420,4);
rectangulo(6,20,561,420,0);
rectangulo(16,2,553,431,4);
rectangulo(16,2,553,427,4);
rectangulo(16,2,553,423,4);
//colina 7

	y=440;
	i=440;
	while(i<558){
	Nodo *lista=trazarlinea(540,582,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//colina 8
	y=420;
	i=420;
	while(i<558){
	Nodo *lista=trazarlinea(582,615,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//cañon principal
rectangulo(32,5,663,350,4);
rectangulo(15,30,647,344,4);
rectangulo(20,25,668,349,4);
rectangulo(15,30,696,344,4);
rectangulo(64,10,647,358,4);
rectangulo(10,5,673,344,4);

//colina 9
	y=374;
	i=374;
	while(i<558){
	Nodo *lista=trazarlinea(615,741,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//torre 2
rectangulo(6,20,756,400,4);
rectangulo(6,20,762,400,0);
rectangulo(16,2,754,411,4);
rectangulo(16,2,754,407,4);
rectangulo(16,2,754,403,4);
//colina 10
	y=420;
	i=420;
	while(i<558){
	Nodo *lista=trazarlinea(741,783,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//colina 11
	y=450;
	i=450;
	while(i<558){
	Nodo *lista=trazarlinea(783,814,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//colina 12
	y=490;
	i=490;
	while(i<558){
	Nodo *lista=trazarlinea(814,845,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//ciudad
rectangulo(151,3,845,490,0);
rectangulo(15,25,870,465,4);
rectangulo(15,35,885,455,4);
rectangulo(15,30,900,460,4);
rectangulo(15,40,915,450,4);
rectangulo(15,20,930,470,4);
//colina 13
	y=490;
	i=490;
	while(i<558){
	Nodo *lista=trazarlinea(995,1026,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//colina 14
	y=450;
	i=450;
	while(i<558){
	Nodo *lista=trazarlinea(1026,1176,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//colina 15
	y=490;
	i=490;
	while(i<558){
	Nodo *lista=trazarlinea(1176,1207,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//torre 3
rectangulo(6,20,1223,420,4);
rectangulo(6,20,1229,420,0);
rectangulo(16,2,1221,431,4);
rectangulo(16,2,1221,427,4);
rectangulo(16,2,1221,423,4);
//colina 16
	y=440;
	i=440;
	while(i<558){
	Nodo *lista=trazarlinea(1207,1251,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//colina 17
	y=400;
	i=400;
	while(i<558){
	Nodo *lista=trazarlinea(1251,1303,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
//colina 18
rectangulo(6,3,1358,370,4);
rectangulo(6,3,1352,366,4);
rectangulo(6,3,1346,370,4);
rectangulo(6,3,1340,366,4);
rectangulo(32,3,1332,362,4);
rectangulo(28,3,1332,358,4);
rectangulo(12,3,1336,354,4);
rectangulo(6,3,1337,350,4);
rectangulo(6,3,1334,346,4);
rectangulo(6,3,1331,342,4);
	y=374;
	i=374;
	while(i<558){
	Nodo *lista=trazarlinea(1303,1366,y,y);
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, verdeBajisisimo);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}

}
ciudad(){
	y=528;
	int i=528;
	while(i<558){
	Nodo *lista=trazarlinea(191,211,y,y);
	
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, azulito);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;
}
	y=508;
	i=508;
	while(i<558){
	Nodo *lista=trazarlinea(213,233,y,y);
	
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, azulito);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;	
}
	y=528;
	i=528;
	while(i<558){
	Nodo *lista=trazarlinea(235,255,y,y);
	
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, azulito);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;	
}
	y=543;
	i=543;
	while(i<558){
	Nodo *lista=trazarlinea(257,277,y,y);
	
	while(lista!=NULL){
	putpixel(lista->dato1, lista->dato2, azulito);
	lista=lista->siguiente;
	
	}
	i++;
	y=y+1;	
	//ciudad 2
}

}
class nave{
int x,y,v;
public:
nave(int _x,int _y,int _v):x(_x),y(_y),v(_v){}
void pintar();
void pintar2();
void mover();
void mover2();
void borrar();
void traslacionMov(int movx,int movy);
int getY(){return y;}
int getX(){return x;}
void setY(int y){
	y=y;
}
void setX(int g){
	x=g;
}
void setV(int h){
	v=h;
}
};
void nave::borrar(){
rectangulo(88,27,x,y,0);
setcolor(0);
    setfillstyle(SOLID_FILL, 0);
	floodfill(x+2,y+2,0);
}
void nave:: traslacionMov(int movx,int movy){
	x=x+movx;
	y=y+movy;
}

void nave::pintar(){
	
	rectangulo(30,3,x,y,5);
    
	rectangulo(26,3,x+10,y-4,9);
    
	rectangulo(46,3,x,y-8,13);
    
	rectangulo(74,3,x+10,y-12,10);
    
	rectangulo(42,3,x,y-16,6);
    
	rectangulo(32,3,x+10,y-20,12);

	rectangulo(14,3,x+14,y-24,14);
	

}
void nave::pintar2(){
	rectangulo(30,3,x,y,5);
    
	rectangulo(26,3,x-6,y-4,9);
    
	rectangulo(46,3,x-16,y-8,13);
    
	rectangulo(74,3,x-50,y-12,10);
    
	rectangulo(42,3,x-12,y-16,6);
    
	rectangulo(27,3,x-2,y-20,12);

	rectangulo(14,3,x+6,y-24,14);

}

void nave::mover(){

	rectangulo(30,3,x,y,0);
    
	rectangulo(26,3,x+10,y-4,0);
    
	rectangulo(46,3,x,y-8,0);
    
	rectangulo(74,3,x+10,y-12,0);
    
	rectangulo(42,3,x,y-16,0);
    
	rectangulo(32,3,x+10,y-20,0);

	rectangulo(14,3,x+14,y-24,0);
	
	traslacionMov(v,0);
	
}
void nave::mover2(){
	rectangulo(30,3,x,y,0);
    
	rectangulo(26,3,x-6,y-4,0);
    
	rectangulo(46,3,x-16,y-8,0);
    
	rectangulo(74,3,x-50,y-12,0);
    
	rectangulo(42,3,x-12,y-16,0);
    
	rectangulo(27,3,x-2,y-20,0);

	rectangulo(14,3,x+6,y-24,0);
	traslacionMov(-v,0);
}
class bala{
	int x1,ix2,y1,iy2;
	bool choca;
	public:
	bala(int _x1,int _y1,int _ix2, int _iy2,bool _choca):x1(_x1),y1(_y1),ix2(_ix2),iy2(_iy2),choca(_choca){}
	mover();
	borrar();
	choque(class nave &n);
	int getY(){return y1;}
	int getX(){return x1;}
	bool getChoca(){return choca;}
	void traslacionMov(int ix2,int iy2);
	
};
void bala:: traslacionMov(int ix2,int iy2){
	x1=x1+ix2;
	y1=y1-iy2;
}
bala::choque(class nave &n){
	if(x1 >= n.getX() && x1<n.getX()+100 && y1>=n.getY() && y1<= n.getY()+30){
	choca=true;
	n.setV(0);
	puntuacion++;
	//n.borrar();
	}
	
}
bala::mover(){
//Sleep(18);
if(y1>0){
	rectangulo(5,5,x1,y1,0);
	traslacionMov(ix2,iy2);
	rectangulo(5,5,x1,y1,3);
}

	//x1=x1+ix2;
	//y1=y1-iy2;
	
}
bala::borrar(){
	//	rectangulo(5,5,x1,y1,3);
//Sleep(18);

	//x1=x1+ix2;
	//y1=y1-iy2;
	
}

main()
{
	initwindow(1366,768);


	delimitar();
	
	nave n(-30,100,10);
	nave n_1(-30,100,10);
	nave n__1(-30,100,10);
	nave n2(-30,200,10);
	nave n3(-30,300,10);
	nave n_3(-30,300,10);
	nave n__3(-30,300,10);
	nave n4(1300,100,10);
	nave n5(1300,200,10);
	nave n_5(1300,200,10);
	nave n__5(1300,200,10);
	nave n6(1300,300,10);
	/*bala b(46,369,5,5);
	bala b2(678,342,0,5);
	bala b3(1325,348,-5,5);*/
	list<bala*> B;
	list<bala*>::iterator it;

	bases();
	colinas();
	ciudad();

	bool game_over=false;
	int contador1=9;
	int contador2=9;
	int contador3=9;
	int contador4=9;
	int contador5=9;
	
	

	while(!game_over){

	cout << "Entra";
		while(contador1<=1400){
	cout << "Entra";
			if(kbhit()){
				char tecla =getch();
				if(tecla == ' '){
				
				B.push_back(new bala(678,337,0,5,false));
			}
				if(tecla == 'm'){
				
				B.push_back(new bala(1325,348,-5,5,false));
			}
				if(tecla == 'v'){
				
				B.push_back(new bala(46,369,5,5,false));
			}
			
			}
			for(it = B.begin(); it != B.end(); it++){
				
			
		//	if((*it)->getChoca()==false){
			
			(*it)->choque(n);
			(*it)->choque(n_1);
			(*it)->choque(n5);
			(*it)->choque(n_5);
			(*it)->choque(n3);
			(*it)->choque(n_3);
			(*it)->choque(n__5);
			(*it)->choque(n__3);
				(*it)->mover();
					
		
			}
			setactivepage(0);
			n.pintar();
			
			//setvisualpage(1);
			n.mover();
			
			contador1=contador1+10;
		
			
			}
			while(contador2<=1400){
				if(kbhit()){
				char tecla =getch();
					if(tecla == ' '){
				
				B.push_back(new bala(678,337,0,5,false));
			}
				if(tecla == 'm'){
				
				B.push_back(new bala(1325,348,-5,5,false));
			}
				if(tecla == 'v'){
				
				B.push_back(new bala(46,369,5,5,false));
			}
			}
			for(it = B.begin(); it != B.end(); it++){
		
				(*it)->choque(n);
				(*it)->choque(n_1);
			(*it)->choque(n5);
			(*it)->choque(n_5);
			(*it)->choque(n3);
			(*it)->choque(n_3);
			(*it)->choque(n__5);
			(*it)->choque(n__3);
				(*it)->mover();
				
			
			
		
		}
				setactivepage(0);
				n_1.pintar();
				n5.pintar2();
				//setvisualpage(1);
				n_1.mover();
				n5.mover2();
			
				contador2=contador2+10;	
			}
				while(contador3<=1400){
					if(kbhit()){

				char tecla =getch();
					if(tecla == ' '){
				
				B.push_back(new bala(678,337,0,5,false));
			}
				if(tecla == 'm'){
				
				B.push_back(new bala(1325,348,-5,5,false));
			}
				if(tecla == 'v'){
				
				B.push_back(new bala(46,369,5,5,false));
			}
			}
			for(it = B.begin(); it != B.end(); it++){
		
			(*it)->choque(n);
				(*it)->choque(n_1);
			(*it)->choque(n5);
			(*it)->choque(n_5);
			(*it)->choque(n3);
			(*it)->choque(n_3);
			(*it)->choque(n__5);
			(*it)->choque(n__3);
				(*it)->mover();
				
				
		
		
		
			}
					setactivepage(0);
					n_5.pintar2();
					n__1.pintar();
					n3.pintar();
					//setvisualpage(1);
					n_5.mover2();
					n__1.mover();
					n3.mover();	
						
					contador3=contador3+10;
				}
					while(contador4<=1400){
						if(kbhit()){
							
				char tecla =getch();
					if(tecla == ' '){
				
				B.push_back(new bala(678,337,0,5,false));
			}
				if(tecla == 'm'){
				
				B.push_back(new bala(1325,348,-5,5,false));
			}
				if(tecla == 'v'){
				
				B.push_back(new bala(46,369,5,5,false));
			}
			}
			for(it = B.begin(); it != B.end(); it++){
	
				(*it)->choque(n);
				(*it)->choque(n_1);
			(*it)->choque(n5);
			(*it)->choque(n_5);
			(*it)->choque(n3);
			(*it)->choque(n_3);
			(*it)->choque(n__5);
			(*it)->choque(n__3);
				(*it)->mover();
					(*it)->borrar();
			
			
		
		}
					setactivepage(0);
					n_3.pintar();
					n__5.pintar2();
					//setvisualpage(1);
					n_3.mover();
					n__5.mover2();	
					contador4=contador4+10;
					}
					while(contador5<=1400){
						if(kbhit()){
				char tecla =getch();
					if(tecla == ' '){
				
				B.push_back(new bala(678,337,0,5,false));
			}
				if(tecla == 'm'){
				
				B.push_back(new bala(1325,348,-5,5,false));
			}
				if(tecla == 'v'){
				
				B.push_back(new bala(46,369,5,5,false));
			}
			}
			for(it = B.begin(); it != B.end(); it++){
	
			(*it)->choque(n);
				(*it)->choque(n_1);
			(*it)->choque(n5);
			(*it)->choque(n_5);
			(*it)->choque(n3);
			(*it)->choque(n_3);
			(*it)->choque(n__5);
			(*it)->choque(n__3);
				(*it)->mover();
				(*it)->borrar();
			
			
			
		}
						setactivepage(0);
					n__3.pintar();
					//setvisualpage(1);
					n__3.mover();
						
					contador5=contador5+10;
					}
					n.setX(-65);
					n_1.setX(-65);
					n5.setX(1300);
					n_5.setX(1300);
					n__1.setX(-65);
					n3.setX(-65);
					n_3.setX(-65);
					n__5.setX(1300);
					n__3.setX(-65);
					n.setV(10);
					n_1.setV(10);
					n5.setV(10);
					n_5.setV(10);
					n__1.setV(10);
					n3.setV(10);
					n_3.setV(10);
					n__5.setV(10);
					n__3.setV(10);
					contador1=9;
					contador2=9;
			  	    contador3=9;
 				    contador4=9;
 				    contador5=9;
					//break;
					std::cout<<"PUNTUACION: "<<puntuacion<<std::endl;
		
}


	
    getch();
    closegraph();
    return 0;
}
