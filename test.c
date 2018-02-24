#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
  char* s = (char *)malloc(10240 * sizeof(char));
  scanf("%s",s);

  int count = 1;
  size_t len = strlen(s);
  for(int i = 0; i < len; i++){
    if(isupper(s[i])){
      count++;
    }
  } 
  printf("%d", count);
  return 0;
}



