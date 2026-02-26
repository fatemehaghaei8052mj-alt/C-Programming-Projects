#include <stdio.h>
#include <stdlib.h>
#include "diverses.h"

int main(){

 char word_orig[31];
 char *word_cpy;
 int i = 0;
 int len;

  printf("Gebein sie ein wort ein 8 <= 30 zeichnen):  ");
  len = zklesen(word_orig,31);INCLR

  word_cpy=(char*)malloc((len + 1)*sizeof(char));
  if (word_cpy == NULL) return 1;

  while(word_orig[i] != '\0'){
  if((word_orig[i] == 'A' ||word_orig[i] == 'a' ||
      word_orig[i] == 'U' ||word_orig[i] == 'u' ||
      word_orig[i] == 'O' ||word_orig[i] == 'o')
      && (word_orig[i+1] == 'e')){

      word_cpy[i] = word_orig[i];
      word_cpy[i+1] = ':';
      i++;
      }

      else
      {
      word_cpy[i]= word_orig[i];
      }
      i++;

  }

  word_cpy[i] = '\0';

     printf("Original: %s\n", word_orig);
     printf("Kopie   : %s\n", word_cpy);

    free(word_cpy);
    PAUSE
    return 0;

}
