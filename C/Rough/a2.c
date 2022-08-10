#include <stdio.h>
#include <string.h>
// #include <stdlib.h>
#include <ctype.h>
void replace_word(char* str,char* word,char* replace){
  int i,j,count=0,k,f=1,wl=strlen(word),rl=strlen(replace);
  char t1,t2;
  // if(strncmp(str,q,strlen(q))) count++;
  for(i=0;str[i]!='\0';i++){
    if(isspace(str[i])) continue;
    // count++;
    for(j=i,k=0;isalpha(str[j]);j++,k++)
      if(f&&k<wl&&str[j]!=word[k]) f=0;
      f&&count++;
      if(f){
          for(k=0;str[i+k]!='\0';k++){
            if(wl<rl) {
              printf("more space\n");break;}
            else{

              if(k<rl) str[i+k]=replace[k];
              else str[i+k]=' ';
            }

          }
      }
      f=1;
      i=j-1;
}
// return count;
}
int main(){
  char str[] =" abc abc def abc",word[]="abc",replace[]="xxxx";
  // scanf("%c",);
  printf("%s\n",str);
  replace_word(str,word,replace);
  // printf("count : %d",c);
  // for(int i=0;str[i]!='\0';i++)
      printf("%s\n",str);

  return 0;
}
