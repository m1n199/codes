#include<stdio.h>

typedef struct employee{
  char empcode[30];
  char name[25];
  int sales;
} EMP; 
int main(){
  EMP emp[30];
  int n,i,sum=0;
  float avg;

  printf("enter the number of employees: ");
    scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Ent. employee details:\n");
      printf("enter the empcode: ");
        scanf("%s",emp[i].empcode);
      printf("Name: ");
        scanf("%s",emp[i].name);
      printf("sales done by the employee: ");
        scanf("%d",&emp[i].sales);
      printf("\n");
  }
  for(i=0;i<n;i++)
    sum= sum+ emp[i].sales;
  avg =(float)sum/n;

  printf("total sales done: %d",sum);
  printf("\naverage sales done: %0.2f",avg);
  return 0;

}
