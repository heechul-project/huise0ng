#include <stdio.h>
int b[10];
int main(){
   char a[101];   
   int i, max=-1, result;
   scanf("%s",a);
   for(i=0;a[i]='\0';i++){
      b[a[i]-'0']++;
   }
   for(i=0;i<10;i++){
      if(b[i]>max){
         max=b[i];
         result=i;
      } 
   }
   printf("%d", result);
   
}