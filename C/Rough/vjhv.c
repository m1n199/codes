#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  gets(str);
  // str[0]=' ';
  // str[1]='\0';
  strcat(str," ");
  int t=0,h=0,e=0;
  int l=strlen(str);
  for(int i=0;i<l;i++){
    if(str[i]=='\0') continue;
    if(i==0){
      if(str[i]=='t') t++;
      else if(str[i]=='h') h++;
      else if(str[i]=='e') e++;
      str[i]='\0';
      continue;
    }
    if(str[i]=' '){
      for(int j=i+1;j<l;j++)
        if(str[i]=='t') t++;
        else if(str[i]=='h') h++;
        else if(str[i]=='e') e++;
        str[i]='\0';
      }
    }
    printf("%d %d %d",t,h,e);
    return 0;
}
