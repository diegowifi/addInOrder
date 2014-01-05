#include <iostream>
#include <string>
using namespace std;

void agrega(string contOrden[], int numPalabra, string agrePalabra){

 string aux;

 for(int k=numPalabra; k>0; k--){

   if(contOrden[k].compare(contOrden[k-1])<0){
     aux=contOrden[k];
     contOrden[k]=contOrden[k-1];
     contOrden[k-1]=aux;

   }

  else break;

 }

}

//--------------------------------------------------------------------------------------

int main()
{
 string rango[100];
 string pal;
 int cont=0;

 do{

   cin>>pal;
    if(pal=="fin")
   break;
   else

   {
   rango[cont]=pal;
    if(cont!=0)
    agrega(rango, cont, pal);
     cont++;
   //cout<<"Lista: ";

   for(int i=0; i<cont; i++){
     cout<<rango[i]<<" ";
   }

   cout<<endl;
   }

   }

 while(true);

    return 0;
}
