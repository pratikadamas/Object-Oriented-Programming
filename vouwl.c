#include<stdio.h>
int main(){
    printf(" string is  pratik giri-\n");
    char arr[]="paratik giri";
    for(int i=0;arr[i]!='\0';i++){
     switch(i){
        case'a':  printf("%c",arr[i]);
                  break;
                  
       case'e':   printf("%c",arr[i]);
                  break;
       case'i':   printf("%c",arr[i]);
                  break;
    case'o':     printf("%c",arr[i]);
                  break;
                
     case'u':     printf("%c",arr[i]);
                  break;
     }

    }
    return 0;

}