#include <conio.h>
#include <cstdio>
#include <iostream>
#include <cstring>
#include <time.h>
#include <cstdlib>
#define tam 20
#define tama 35
using namespace std;

int x=0,l,k=0;
int c[10];
float s=0;
float y[tam],a[tam];
class Cine
{
	private:
		int num_cliente;
	    float tota;
	protected:
		int precio[tam];
		string nombre[tam],Sala[11][8];
	public:
		void imprime();
		float compra(int,float);
};

void Cine::imprime()
{
	if(k==0)
	{
		srand(time(NULL));
		l=rand()%21345;
	}
	
	
		num_cliente =l;
		cout<<"\t------------------------------Cinemax------------------------------\t\t\t\t\t"<<endl;
		cout<<endl;
	
		cout<<"Sucursal: San Andres Tomatlan"<<endl;
		cout<<endl;
	
		cout<<"Numero de cliente:"<<num_cliente<<endl;
		cout<<endl;



}

float Cine::compra(int a1,float a2)
{
	if(s!=0)
   {
		tota=a1*a2;
		return tota;
	}
	else{tota=(tota+a1); return tota;}
}

class Dulceria:private Cine
{
	private:
		int Numero_objetos;
		float total;
	public:
		void asigna();
		void alista();
		void ticket();
};
void Dulceria::asigna()
	{
	nombre[1]="Combo Familiar:Incluye 2 palomitas grandes y 4 refrescos grandes        ";
	precio[1]=450;
	nombre[2]="Combo Amigos:Incluye palomitas grandes y 4 refrescos grandes            ";
	precio[2]=400;
	nombre[3]="Combo Pareja:Incluye palomitas grandes y 2 refrescos grandes            ";
	precio[3]=350;
	nombre[4]="Combo Hot dog:Incluye palomitas grandes, un hot dog y 1 refresco mediano";
	precio[4]=330;
	nombre[5]="Combo Nachos:Incluye palomitas medianas, nachos y un refresco grande    ";
	precio[5]=300;
	nombre[6]="Combo Ice:Incluye palomitas grandes,dos Ice y un sanwich                ";
	precio[6]=250;

	}
void Dulceria::alista()
{ int i,o=0,gasto=0;

	asigna();
  	cout<<"\t\t\t\t--------------Dulceria--------------"<<endl;
   	cout<<endl;
	cout<<"\tCombo\t\t\t\t\t\t\t\t\t\tPrecio"<<endl;
	for( i=1;i<=6;i++)
	{
		cout<<"\t"<<(i)<<"-"<<nombre[i]<<"\t"<<"$"<<precio[i]<<endl;
	}

	do{

		cout<<"Escoje un combo"<<endl;
		cin>>x;
      	c[x]=c[x]+1;
		cout<<"Usted escogio el combo:\n "<<nombre[x]<<endl;
		cout<<"$"<<precio[x]<<endl;
		gasto=gasto+precio[x];
		y[x]=precio[x];
		precio[x];
		cout<<"Desea escojer otro combo\n1-Si\n2-No "<<endl;
		cin>>o;
      	system("cls");
	   if(o==1)
	   {
	   		asigna();
	      	cout<<"\t\t\t\t--------------Dulceria--------------"<<endl;
	      	cout<<endl;
			cout<<"\tCombo\t\t\t\t\t\t\t\t\t\tPrecio"<<endl;
			for( i=1;i<=6;i++)
			{
				cout<<"\t"<<(i)<<"-"<<nombre[i]<<"\t"<<"$"<<precio[i]<<endl;
			}
	    }
	}while(o==1);
	s=0;
	total=compra(gasto,1);
	if(o==2)
	{
		system("cls");
		ticket();
	}
}
void Dulceria::ticket()
{

	Cine::imprime();

	cout<<"Cantidad\tCombo\t\t\t\t\t\t\t\t\t\tPrecio"<<endl;

	cout<<endl;
	for(int i=1;i<=6;i++)
	{
		if(y[i]==precio[i])
      {
		cout<<c[i]<<"\t\t"<<(i)<<"-"<<nombre[i]<<"\t"<<"$"<<precio[i]<<endl;
		}

	}
	cout<<endl;
	cout<<"\t\t\t\t\t\t\t\t   		   Precio total:"<<"$"<<total<<endl;
	time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
        cout<<"Fecha y hora de impresion\n"<<output<<endl;
   int i;
     for(i=0;i<tam;i++)
   {      total=0;
   precio[i]=0;
   nombre[i]="NULL";
   c[i]=0;
   y[i]=0;
   }



}


class Cafeteria:private Cine
{
	private:
		float Descuento,total;
	
	public:
		void asigna_precio();
		void mostrar();
		float asignades();
		void tickete();

};

void Cafeteria::asigna_precio()
{
	nombre[1]="Crepa hawaiana       									";
	precio[1]=80;
	nombre[2]="Crepa con peperoni            							";
	precio[2]=75;
	nombre[3]="Crepa de durazno con crema philadelfia y nutella 					";
	precio[3]=65;
	nombre[4]="Crepa de fresa con crema philadelfia y nutella   				  	";
	precio[4]=50;
	nombre[5]="Crepa de platano con nutella    					   		";
	precio[5]=47;
	nombre[6]="Cafe capuchino grande          					   	     	";
	precio[6]=45;
   	nombre[7]="Cafe capuchino mediano							        ";
   	precio[7]=40;
   	nombre[8]="Cafe normal chico								 	";
   	precio[8]=35;
   	nombre[9]="Cafe normal grande           						   		";
	precio[9]=45;
   	nombre[10]="Cafe normal mediano									";
   	precio[10]=40;
   	nombre[11]="Cafe normal chico									";
   	precio[11]=35;
}

void Cafeteria::mostrar()
{ int i,o=0,gasto=0;

	asigna_precio();
   cout<<"\t\t\t\t\t--------------Cafeteria--------------"<<endl;
   cout<<endl;
	cout<<"\tAlimento\t\t\t\t\t\t\t\t\t\tPrecio"<<endl;
	for( i=1;i<=11;i++)
	{
	cout<<"\t"<<(i)<<"-"<<nombre[i]<<"$"<<precio[i]<<endl;
	}

	do{
      	cout<<endl;
		cout<<"Escoje un alimento:"<<endl;
		cin>>x;

		cout<<"Usted escogio el alimento\n "<<nombre[x]<<endl;
		cout<<"$"<<precio[x]<<endl;
      	c[x]=c[x]+1;
		gasto=gasto+precio[x];
		y[x]=precio[x];
		precio[x];
		cout<<"Desea escojer otro alimento\n1-Si\n2-No "<<endl;
		cin>>o;
    	system("cls");
	   	if(o==1)
	   	{
	   		asigna_precio();
			cout<<"\tAlimento\t\t\t\t\t\t\t\t\t\tPrecio"<<endl;
			for( i=1;i<=11;i++)
			{
			cout<<"\t"<<(i)<<"-"<<nombre[i]<<"$"<<precio[i]<<endl;
			}
	   	}
	}while(o==1);

   s=asignades();
	total=compra(gasto,s);
  	if(o==2)
	{
		system("cls");
		tickete();
	}
}


float Cafeteria::asignades()
{
float num;
int h;
string op;
	float des[1000];
   des[123]=.90;
   des[324]=.85;
   des[159]=.75;
   des[666]=.50;
	cout<<"¿El usuario tiene cupon de descuento?"<<endl;
	cin>>op;
	if(op=="Si")
   {
		cout<<"Ingrese el numero del cupon del descuento"<<endl;
		cin>>h;
      des[h];
         num=des[h];



   }else{num=1;}

return num;
}

void Cafeteria::tickete()
{
	Cine::imprime();

	cout<<"Cantidad\tAlimento\t\t\t\t\t\t\t\t   		 	Precio"<<endl;
	for(int i=1;i<=11;i++)
	{
		if(y[i]==precio[i])
      {precio[i]=precio[i]*c[i];
		cout<<c[i]<<"\t\t"<<(i)<<"-"<<nombre[i]<<"$"<<precio[i]<<endl;
		}

	}
	cout<<endl;
	cout<<"\t\t\t\t\t\t\t\t   			   Precio total:"<<"$"<<total<<endl;
   cout<<endl;
	time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
        cout<<"Fecha y hora de impresion\n"<<output<<endl;
        int i;
     for(i=0;i<tam;i++)
   {      total=0;
   precio[i]=0;
   nombre[i]="NULL";
   c[i]=0;
   y[i]=0;
   }
        }

class Salas:private Cine
{
private:
string Sala1[11][8],Sala2[11][8],Sala3[11][8],Sala4[11][8],Sala5[11][8],Sala6[11][8],peli[tam],horario[tam];
char fila;
float total;
int fil,hora,nsal,t;
public:

void AsignaPrecio();
void MostrarBoletos();
string AsignaSala();
void Impresion();
void Cambio();
void TipoHora();
void AsignaHoraPeli();
void GeneraSala();
};

void Salas::AsignaHoraPeli()
{
peli[1]="Avengers Infiniti War";
peli[2]="Que Paso Ayer El Reencuentro";
peli[3]="La Leyenda Del Brian";
peli[4]="Juanito Vuelve a Casa";
peli[5]="El Igualteco en CDMX";
peli[6]="Los Norteños y Las Primas";
horario[1]="2:30 pm";
horario[2]="4:00 pm";
horario[3]="6:30 pm";
horario[4]="8:00 pm";
horario[5]="10:30 pm";
}
void Salas::TipoHora()
{
do{
system("cls");
AsignaHoraPeli();
cout<<"Peliculas disponibles:\n\n"<<endl;
cout<<"Sala 1.................... Avengers Infiniti War\n"<<endl;
cout<<"Sala 2.................... Que Paso Ayer El Reencuentro\n"<<endl;
cout<<"Sala 3.................... La Leyenda Del Brian\n"<<endl;
cout<<"Sala 4.................... Juanito Vuelve a Casa\n"<<endl;
cout<<"Sala 5.................... El Igualteco en CDMX\n"<<endl;
cout<<"Sala 6.................... Los Norteños y Las Primas\n"<<endl;
cout<<"\nSelecione la Sala"<<endl;
cin>>nsal;
if(nsal==0 || nsal>6)
{
 cout<<"ERROR vuelva a intebtarlo"<<endl;
}
  } while(nsal>6 || nsal==0);
  do{
system("cls");
cout<<"\nHorarios disponiblespara la Sala "<<nsal<<"\n"<<endl;

cout<<"Horario 1....2:30 pm \n"<<endl;
cout<<"Horario 2....4:00 pm \n"<<endl;
cout<<"Horario 3....6:30 pm \n"<<endl;
cout<<"Horario 4....8:00 pm \n"<<endl;
cout<<"Horario 5....10:30 pm \n"<<endl;
cout<<"\nSeleccione el horario para su pelicula"<<endl;
cin>>hora;

if(hora==0 || hora>5)
{
 cout<<"ERROR vuelva a intebtarlo"<<endl;
}
  }while(hora>5 || hora==0);
 system("cls");
}

void Salas::Impresion()
{
int i,j,k=1;
char l;
imprime();
cout<<"////////////////////////////TICKETS DE CINE/////////////////////////////"<<endl;
cout<<"\n\n"<<endl;
cout<<"Sala: "<<nsal<<endl;
cout<<"Pelicula: "<<peli[nsal]<<endl;
cout<<"Horario: "<<hora<<endl;
cout<<"La pelicula empieza a las: "<<horario[hora]<<endl;
   cout<<"Cantidad\tBoleto\t\t\t\t   	      	 Precio"<<endl;
   cout<<"\n"<<endl;
	for(int i=1;i<=4;i++)
	{
		if(y[i]==precio[i])
      {precio[i]=precio[i]*c[i];
		cout<<c[i]<<"\t\t"<<(i)<<"-"<<nombre[i]<<"$"<<precio[i]<<endl;
		}

	}
     cout<<"Boletos Apartados para la sala:"<<nsal<<endl;
if(nsal==1)
{
for(i=1;i<=10;i++)
 {
 	for(j=1;j<=7;j++)
   {
      if(Sala1[i][j] == "R")
   	{
       if(j==1)
       {
       l='A';
       }
       if(j==2)
       {
       l='B';
       }
       if(j==3)
       {
       l='C';
       }
       if(j==4)
       {
       l='D';
       }
       if(j==5)
       {
       l='E';
       }
       if(j==6)
       {
       l='F';
       }
       if(j==7)
       {
       l='G';
       }
       cout<<i<<l;
       if(k<t){
       cout<<", ";
       k=k+1;
       }
      }
   }
 }
}

if(nsal==2)
{
for(i=1;i<=10;i++)
 {
 	for(j=1;j<=7;j++)
   {
      if(Sala2[i][j]=="R")
   	{
       if(j==1)
       {
       l='A';
       }
       if(j==2)
       {
       l='B';
       }
       if(j==3)
       {
       l='C';
       }
       if(j==4)
       {
       l='D';
       }
       if(j==5)
       {
       l='E';
       }
       if(j==6)
       {
       l='F';
       }
       if(j==7)
       {
       l='G';
       }
       cout<<i<<l;
       if(k<t){
       cout<<", ";
       k=k+1;
       }
      }
   }
 }
}

if(nsal==3)
{
for(i=1;i<=10;i++)
 {
 	for(j=1;j<=7;j++)
   {
      if(Sala3[i][j]=="R")
   	{
       if(j==1)
       {
       l='A';
       }
       if(j==2)
       {
       l='B';
       }
       if(j==3)
       {
       l='C';
       }
       if(j==4)
       {
       l='D';
       }
       if(j==5)
       {
       l='E';
       }
       if(j==6)
       {
       l='F';
       }
       if(j==7)
       {
       l='G';
       }
       cout<<i<<l;
       if(k<t){
       cout<<", ";
       k=k+1;
       }
      }
   }
 }
}
if(nsal==4)
{
for(i=1;i<=10;i++)
 {
 	for(j=1;j<=7;j++)
   {
      if(Sala4[i][j]=="R")
   	{
       if(j==1)
       {
       l='A';
       }
       if(j==2)
       {
       l='B';
       }
       if(j==3)
       {
       l='C';
       }
       if(j==4)
       {
       l='D';
       }
       if(j==5)
       {
       l='E';
       }
       if(j==6)
       {
       l='F';
       }
       if(j==7)
       {
       l='G';
       }
       cout<<i<<l;
       if(k<t){
       cout<<", ";
       k=k+1;
       }
      }
   }
 }
}

if(nsal==5)
{
for(i=1;i<=10;i++)
 {
 	for(j=1;j<=7;j++)
   {
      if(Sala5[i][j]=="R")
   	{
       if(j==1)
       {
       l='A';
       }
       if(j==2)
       {
       l='B';
       }
       if(j==3)
       {
       l='C';
       }
       if(j==4)
       {
       l='D';
       }
       if(j==5)
       {
       l='E';
       }
       if(j==6)
       {
       l='F';
       }
       if(j==7)
       {
       l='G';
       }
       cout<<i<<l;
       if(k<t){
       cout<<", ";
       k=k+1;
       }
      }
   }
 }
}
if(nsal==6)
{
for(i=1;i<=10;i++)
 {
 	for(j=1;j<=7;j++)
   {
      if(Sala6[i][j]=="R")
   	{
       if(j==1)
       {
       l='A';
       }
       if(j==2)
       {
       l='B';
       }
       if(j==3)
       {
       l='C';
       }
       if(j==4)
       {
       l='D';
       }
       if(j==5)
       {
       l='E';
       }
       if(j==6)
       {
       l='F';
       }
       if(j==7)
       {
       l='G';
       }
       cout<<i<<l;
       if(k<t){
       cout<<", ";
       k=k+1;
       }
      }
   }
 }
}
	cout<<"\n\n"<<endl;
	cout<<"\t\t\t\t   		      Precio total:"<<"$"<<total<<endl;
   cout<<endl;


 cout<<"\n\n"<<endl;
	time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
        cout<<"Fecha y hora de impresion\n"<<output<<endl;

   for(i=0;i<tam;i++)
   {
   precio[i]=0;
   nombre[i]="NULL";
   c[i]=0;
   y[i]=0;
   }
   t=0;
   k=0;
}

void Salas::Cambio()
{
	if(fila=='A')
   {
   fil=1;
   }
   else if(fila=='B')
   {
   fil=2;
   }
   else if(fila=='C')
   {
   fil=3;
   }
   else if(fila=='D')
   {
   fil=4;
   }
   else if(fila=='E')
   {
   fil=5;
   }
   else if(fila=='F')
   {
   fil=6;
   }
   else if(fila=='G')
   {
   fil=7;
   }
}

void Salas::GeneraSala()
{
int i,j;
  for(i=1;i<=10;i++)
 {
 	for(j=1;j<=7;j++)
   {
   Sala1[i][j]='D';
   Sala2[i][j]='D';
   Sala3[i][j]='D';
   Sala4[i][j]='D';
   Sala5[i][j]='D';
   Sala6[i][j]='D';
   }
 }
 Sala1[0][0]=' ';
 Sala1[1][0]='1';
 Sala1[2][0]='2';
 Sala1[3][0]='3';
 Sala1[4][0]='4';
 Sala1[5][0]='5';
 Sala1[6][0]='6';
 Sala1[7][0]='7';
 Sala1[8][0]='8';
 Sala1[9][0]='9';
 Sala1[10][0]="10";
 Sala1[0][1]='A';
 Sala1[0][2]='B';
 Sala1[0][3]='C';
 Sala1[0][4]='D';
 Sala1[0][5]='E';
 Sala1[0][6]='F';
 Sala1[0][7]='G';
  Sala2[0][0]=' ';
 Sala2[1][0]='1';
 Sala2[2][0]='2';
 Sala2[3][0]='3';
 Sala2[4][0]='4';
 Sala2[5][0]='5';
 Sala2[6][0]='6';
 Sala2[7][0]='7';
 Sala2[8][0]='8';
 Sala2[9][0]='9';
 Sala2[10][0]="10";
 Sala2[0][1]='A';
 Sala2[0][2]='B';
 Sala2[0][3]='C';
 Sala2[0][4]='D';
 Sala2[0][5]='E';
 Sala2[0][6]='F';
 Sala2[0][7]='G';
  Sala3[0][0]=' ';
 Sala3[1][0]='1';
 Sala3[2][0]='2';
 Sala3[3][0]='3';
 Sala3[4][0]='4';
 Sala3[5][0]='5';
 Sala3[6][0]='6';
 Sala3[7][0]='7';
 Sala3[8][0]='8';
 Sala3[9][0]='9';
 Sala3[10][0]="10";
 Sala3[0][1]='A';
 Sala3[0][2]='B';
 Sala3[0][3]='C';
 Sala3[0][4]='D';
 Sala3[0][5]='E';
 Sala3[0][6]='F';
 Sala3[0][7]='G';
  Sala4[0][0]=' ';
 Sala4[1][0]='1';
 Sala4[2][0]='2';
 Sala4[3][0]='3';
 Sala4[4][0]='4';
 Sala4[5][0]='5';
 Sala4[6][0]='6';
 Sala4[7][0]='7';
 Sala4[8][0]='8';
 Sala4[9][0]='9';
 Sala4[10][0]="10";
 Sala4[0][1]='A';
 Sala4[0][2]='B';
 Sala4[0][3]='C';
 Sala4[0][4]='D';
 Sala4[0][5]='E';
 Sala4[0][6]='F';
 Sala4[0][7]='G';
  Sala5[0][0]=' ';
 Sala5[1][0]='1';
 Sala5[2][0]='2';
 Sala5[3][0]='3';
 Sala5[4][0]='4';
 Sala5[5][0]='5';
 Sala5[6][0]='6';
 Sala5[7][0]='7';
 Sala5[8][0]='8';
 Sala5[9][0]='9';
 Sala5[10][0]="10";
 Sala5[0][1]='A';
 Sala5[0][2]='B';
 Sala5[0][3]='C';
 Sala5[0][4]='D';
 Sala5[0][5]='E';
 Sala5[0][6]='F';
 Sala5[0][7]='G';
  Sala6[0][0]=' ';
 Sala6[1][0]='1';
 Sala6[2][0]='2';
 Sala6[3][0]='3';
 Sala6[4][0]='4';
 Sala6[5][0]='5';
 Sala6[6][0]='6';
 Sala6[7][0]='7';
 Sala6[8][0]='8';
 Sala6[9][0]='9';
 Sala6[10][0]="10";
 Sala6[0][1]='A';
 Sala6[0][2]='B';
 Sala6[0][3]='C';
 Sala6[0][4]='D';
 Sala6[0][5]='E';
 Sala6[0][6]='F';
 Sala6[0][7]='G';

}

string Salas::AsignaSala()
{
int i,j;
int na,col;
cout<<"=====================================PANTALLA====================================\n\n"<<endl;
  for(j=0;j<=7;j++)
 {
 	for(i=0;i<=10;i++)
   {
   	if(nsal==1)
   	{
   	cout<<Sala1[i][j]<<"\t";
      }
      else if(nsal==2)
   	{
   	cout<<Sala2[i][j]<<"\t";
      }
      else if(nsal==3)
   	{
   	cout<<Sala3[i][j]<<"\t";
      }
      else if(nsal==4)
   	{
   	cout<<Sala4[i][j]<<"\t";
      }
      else if(nsal==5)
   	{
   	cout<<Sala5[i][j]<<"\t";
      }
      else if(nsal==6)
   	{
   	cout<<Sala6[i][j]<<"\t";
      }
   }
   cout<<"\n\n";
 }
 cout<<"\n\n D=disponible R=reservado"<<endl;
for(na=1;na<=t;na++)
{
cout<<"\nIngrese el asiento No."<<na<<endl;
do{
cout<<"Ingrese la columna"<<endl;
cin>>col;
}while(col>10 || col==0);
do{
cout<<"Ingrese la fila"<<endl;
cin>>fila;
}while (fila!='A' && fila!='B' && fila!='C' && fila!='D' && fila!='E' && fila!='F' && fila!='G');
Cambio();
		if(nsal==1)
      {
   if(Sala1[col][fil]=="D")
   {
   Sala1[col][fil]='R';
   }
   else
   {
   na=na-1;
   cout<<"ERROR!! Vuelva a introducir el asiento"<<endl;
   }
   	}
      if(nsal==2)
      {
   if(Sala2[col][fil]=="D")
   {
   Sala2[col][fil]='R';
   }
   else
   {
   na=na-1;
   cout<<"ERROR!! Vuelva a introducir el asiento"<<endl;
   }
   	}
      if(nsal==3)
      {
   if(Sala3[col][fil]=="D")
   {
   Sala3[col][fil]='R';
   }
   else
   {
   na=na-1;
   cout<<"ERROR!! Vuelva a introducir el asiento"<<endl;
   }
   	}
      if(nsal==4)
      {
   if(Sala4[col][fil]=="D")
   {
   Sala4[col][fil]='R';
   }
   else
   {
   na=na-1;
   cout<<"ERROR!! Vuelva a introducir el asiento"<<endl;
   }
   	}
      if(nsal==5)
      {
   if(Sala5[col][fil]=="D")
   {
   Sala5[col][fil]='R';
   }
   else
   {
   na=na-1;
   cout<<"ERROR!! Vuelva a introducir el asiento"<<endl;
   }
   	}
      if(nsal==6)
      {
   if(Sala6[col][fil]=="D")
   {
   Sala6[col][fil]='R';
   }
   else
   {
   na=na-1;
   cout<<"ERROR!! Vuelva a introducir el asiento"<<endl;
   }
   	}
} system("cls");
  cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!SALA ACTUALIZADA!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n"<<endl;
cout<<"=====================================PANTALLA====================================\n\n"<<endl;

   if(nsal==1)
   {
  for(j=0;j<=7;j++)
 {
 	for(i=0;i<=10;i++)
   {
   cout<<Sala1[i][j]<<"\t";
   }
   cout<<"\n\n";
 }
 	}
      if(nsal==2)
   {
  for(j=0;j<=7;j++)
 {
 	for(i=0;i<=10;i++)
   {
   cout<<Sala2[i][j]<<"\t";
   }
   cout<<"\n\n";
 }
 	}
      if(nsal==3)
   {
  for(j=0;j<=7;j++)
 {
 	for(i=0;i<=10;i++)
   {
   cout<<Sala3[i][j]<<"\t";
   }
   cout<<"\n\n";
 }
 	}
      if(nsal==4)
   {
  for(j=0;j<=7;j++)
 {
 	for(i=0;i<=10;i++)
   {
   cout<<Sala4[i][j]<<"\t";
   }
   cout<<"\n\n";
 }
 	}
      if(nsal==5)
   {
  for(j=0;j<=7;j++)
 {
 	for(i=0;i<=10;i++)
   {
   cout<<Sala5[i][j]<<"\t";
   }
   cout<<"\n\n";
 }
 	}
      if(nsal==6)
   {
  for(j=0;j<=7;j++)
 {
 	for(i=0;i<=10;i++)
   {
   cout<<Sala6[i][j]<<"\t";
   }
   cout<<"\n\n";
 }
 	}
system("PAUSE");
 system("cls");
 Impresion();
return Sala1[7][10],Sala2[7][10],Sala3[7][10],Sala4[7][10],Sala5[7][10],Sala6[7][10];
}




void Salas::AsignaPrecio()
{
nombre[1]="Adulto                                           ";
precio[1]=80;
nombre[2]="Tercera Edad                                     ";
precio[2]=53;
nombre[3]="Ninos                                            ";
precio[3]=53;
nombre[4]="Estudiantes                                      ";
precio[4]=40;
}
void Salas::MostrarBoletos()
{
int i,o=0,gasto=0,e=0;
 t=0;

		AsignaPrecio();
   cout<<"\t\t\t--------------Boletos--------------"<<endl;
   cout<<endl;
	cout<<"Tipo de Boleto\t\t\t\t\t  Precio\n"<<endl;
	for( i=1;i<=4;i++)
	{
	cout<<(i)<<"-"<<nombre[i]<<"$"<<precio[i]<<endl;
	}
   cout<<"\n\nLos boletos que compres para cierta pelicula, se apartaran todo el dia por si se pierde una funcion!!!!!!!!"<<endl;
	do{
      cout<<endl;
      	do{
         cout<<"Escoje un Boleto:"<<endl;
			cin>>x;
      	if(x>0 && x<5)
      	{
       t=t+1;
      c[x]=c[x]+1;
		cout<<"Usted escogio el Boleto :"<<nombre[x]<<endl;
		cout<<"precio :$"<<precio[x]<<endl;
      y[x]=precio[x];
		gasto=gasto+precio[x];
      cout<<"Numero de boletos :"<<t<<endl;
      cout<<"Total a pagar : $"<<gasto<<endl;
		cout<<"Desea escojer otro Boleto\n1-Si\n2-No "<<endl;
		cin>>o;
    system("cls");
      	e=0;
      	}
      	else
      	{
      	cout<<"ERROR vuelva a intentarlo"<<endl;
      	e=1;
      	}
         }while(e==1);
   if(o==1)
   {
   	AsignaPrecio();
   cout<<"\t\t\t--------------Boletos--------------"<<endl;
   cout<<endl;
	cout<<"Tipo de Boleto\t\t\t\t\t  Precio\n"<<endl;
	for( i=1;i<=4;i++)
	{
	cout<<(i)<<"-"<<nombre[i]<<"$"<<precio[i]<<endl;
	}

   }
		}while(o==1);

	total=gasto;
    system("cls");
    TipoHora();
    system("cls");
    AsignaSala();

}




int main()
{
int op,i=0;
Dulceria obj[tam];
Cafeteria obj1[tam];
Salas obj2;

obj2.GeneraSala();
do{
	do
	{
   system("cls");
   cout<<"Bienvenido a Cinemax"<<endl;
	cout<<"Que quiere hacer"<<endl;
	cout<<"1-Comprar en dulceria\n2-Comprar en cafeteria\n3-Comprar boletos de cine"<<endl;
	cin>>op;
       switch(op)
	{
		case 1:
      	system("cls");
     		obj[i].alista();break;
		case 2:
      	system("cls");
      	obj1[i].mostrar();break;
   	case 3:
      	system("cls");
         obj2.MostrarBoletos();
   		break;
	default:cout<<"Esa opcion no existe"<<endl;break;
	}


   cout<<"Desea hacer otra opcion con el cliente actual\n1=Si\n2=No"<<endl;
	cin>>x;
    k=1;
	}while(x==1);


cout<<"Desea repetir el menu con diferente cliente--1\nSalir del programa--2"<<endl;
cin>>x;
k=0;
i++;

}while(x==1);
getch();

}
