#include<stdio.h>
int main( )
{
  FILE *fp;
  char ch;
  int pqtdecar = 0;
  int pqtdespa = 0;
  int pqtdetab = 0;
  int pqtdenlin = 0;
  fp = fopen ( "Arquivo1.txt", "r" );
  while ( 1 )
  {
    ch = fgetc(fp);
    if(ch==EOF)
      break;
    pqtdecar++;
    if(ch==' ')
      pqtdespa++;
    if (ch=='\t') //esse tab aqui n deu bom n kkkkkkkkkkkkk
      pqtdetab++;
    if (ch=='\n')
      pqtdenlin++;    
  }
  fclose ( fp );
  printf("Quantidade de Caracteres: %d",pqtdecar);
  printf("\nQuantidade de Espacos: %d",pqtdespa);
  printf("\nQuantidade de Tabs: %d",pqtdetab);
  printf("\nQuantidade de Linhas: %d",pqtdenlin);
  return 0;
}
