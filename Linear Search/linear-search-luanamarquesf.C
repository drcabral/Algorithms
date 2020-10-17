
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX1 100000    // numero maximo de numeros aleatorios
#define MAX2 2000   // numeros aleatorios no intervalo [0,9999]



int n,                 // tamanho real do array
    chave,             // elemento que sera verificado
    elem[MAX1];        // array para armazenar a quantidade de ocorrencias

int Leitura_Dimensao_Array(void);
void Associando_Valores_Array(int Dim);
short Busca_Linear(int Chave, int Dim);
void Imprimindo_Valores_Array(int Dim);

/*------------------------------------------------------------------*/
int Leitura_Dimensao_Array(void) {
  int dim, continua;
  do {
     continua = 0;
     printf("Set the array lenght: (>= 1 && <= 100000):");
     scanf("%d",&dim);
     if ( (dim <= 0) || (dim > MAX1) ) continua = 1;
   }
  while ( continua );

  return(dim);
} // Leitura_Dimensao_Array


/*------------------------------------------------------------------*/
void Associando_Valores_Array(int Dim) {
 int i;   // indice para percorrer o array
 clock_t semente;

 semente = clock();
 srand((unsigned) semente);  // inicializando o gerador
 for (i = 0; i < Dim; i++)
     elem[i]= rand();        // observe que esta função associa valores somente ao vetor elem

 return;
} // Associando_Valores_Array


/*------------------------------------------------------------------*/

short Busca_Linear(int Chave, int Dim) {
 int i;   // indice para percorrer o array

 for (i = 0; i < Dim; i++)
      if ( elem[i] == Chave ) {return(1);}  // elemento localizado

 return(0);  // elemento nao pertence ao array
}  // Busca_Linear


/*------------------------------------------------------------------*/
void Imprimindo_Valores_Array(int Dim) {
 int i;   // indice para percorrer o array
 for (i = 0; i < Dim; i++)
     printf("\n [%d] = %d ",i,elem[i]);

} // Associando_Valores_Array
/*------------------------------------------------------------------*/


int main(void) {
  int pos = -1;
  n = Leitura_Dimensao_Array();
  Associando_Valores_Array(n);
  Imprimindo_Valores_Array(n);

  printf("\n\n Set the key value"); scanf("%d",&chave);


  //Imprimindo_Valores_Array(n);
 if ( Busca_Linear(chave,n) ) {
     printf("\n The key %d belongs to the array \n\n", chave);
     }
  else printf("\n The key %d do not belong to the array \n\n", chave);

 system("Pause");
 return(0);
}





