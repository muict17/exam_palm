#include <stdio.h>
void pow3(int n);
int absolute(int *n);
int main(){
   int n;
   printf("Input n : ");
   scanf("%d",&n);
   absolute(&n);
   pow3(n);
   return 0;
}
int absolute(int *n){
    if(*n<0) *n = *n*(-1);
    else *n = *n;
    return *n;
}
void pow3(int n){
    int flag=0;
    for(int i=0;i<=n;i++){
        if(n==i*i*i){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        printf("true\n");
    }else printf("false\n");
}