#include<stdio.h>
int main(){
  char arr1[7]="pratik";
  char arr2[7]="giri";
  printf("copy the string --\n");
  for(int i=0;i<7;i++){
    arr2[i]=arr1[i];
  }          
  char arr3[14];
  printf("concatinate the 2 string \n");
  for(int i=0;i<14;i++){
    if(i<=6)
    arr3[i]=arr1[i];
else 
    arr3[i]=arr2[i-7];
  }

  printf("%s",arr3);

printf("string compare--\n");
for(int i=0;i<7;i++){
    if(arr1[i]!=arr2[i])
    printf("string are not equal\n");

}
return 0;

}