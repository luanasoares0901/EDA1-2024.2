#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main( )
{
  FILE *fp; //cria um ponteiro para o arquivo
  char s[80];
  fp = fopen ( "POEM.TXT", "r" );
  if ( fp == NULL )
  {
    puts ( "Cannot open file" );
    system("pause");
    exit(0);
  }
  while ( fgets ( s, 79, fp ) != NULL )
    printf ( "%s" , s );
  fclose ( fp );
  system("pause");
}
