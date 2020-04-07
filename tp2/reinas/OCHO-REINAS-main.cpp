#include <QCoreApplication>

#include <QCoreApplication>

#include <iostream>
#include <iomanip>
using namespace std;

const int tamaniotablero=8;
int nSolucion=0;
int tablero[tamaniotablero*tamaniotablero];



void inicializar(int tab[])
{ for (int i=0;i<tamaniotablero*tamaniotablero;i++)
    tab[i]=0;}


void MostrarSolucion(int t[])
{ //int i;
    nSolucion++;
    cout << "SOLUCION PARA EL PROBLEMA DE OCHO REINAS: " << nSolucion << endl;
    for (int fila=0;fila<tamaniotablero;fila++)
    {for (int col=0;col<tamaniotablero;col++)
        cout << setw(4) << t[fila*tamaniotablero+col];
    cout << endl;}
    //cin >> i;
}


bool Atacada(unsigned int f, unsigned int c){
    bool at=false;
    //Ver en fila
    int col=0; int fil;
    while ((!at) && (col<8)){
        if (tablero[f*tamaniotablero+col]==0)
            col=col+1;
        else
            at=true;
        }
    //Ver Columna
    fil=0;
     while ((!at) && (fil<8)){
          if (tablero[fil*tamaniotablero+c]==0)
                fil=fil+1;
            else
                at=true;
            }
    //Ver Diagonal Principal
     fil=f;col=c;
     if (fil>col){
         fil=fil-col;
         col=0;}
     else
     {   col=col-fil;
         fil=0;}

     while ((fil>=0)&&(col>=0)&&(fil<8)&&(col<8)&&(!at))
     {if (tablero[fil*tamaniotablero+col]==0)
         { fil=fil+1;
           col=col+1;}
         else {
             at=true;
         }
     }

     //Ver Diagonal Secundaria
      col=f+c;
      if (col>(tamaniotablero-1)){
          fil=f+c-(tamaniotablero-1);
          col=tamaniotablero-1;
      }
      else {
          fil=0;
          col=f+c;
      }

      while ((fil>=0)&&(col>=0)&&(fil<8)&&(col<8)&&(!at))
      {if (tablero[fil*tamaniotablero+col]==0)
          { fil=fil+1;
            col=col-1;}
          else {
              at=true;
          }
      }

      return at;
}

void OchoReinas(unsigned int nreina){
    if (nreina==8){
        MostrarSolucion(tablero);}
    else {
      for(int ncol=0;ncol<tamaniotablero;ncol++){
          if (!Atacada(nreina,ncol)){
              tablero[nreina*tamaniotablero+ncol]=nreina+1;
              OchoReinas(nreina+1);
              tablero[nreina*tamaniotablero+ncol]=0;

          }
        }
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Programa recursivo para generar el trayecto de un caballo por todos los cuadros de un tablero de ajedrez
inicializar(tablero);

   OchoReinas(0);
   cout << "Finalizaron las pruebas ....";
    return a.exec();
}

