#include <stdio.h>
int main(){
    int n;
    int i;
    printf("Input number : ");
    scanf("%d",&n);
    int binary[]={0},bi=0;
    int divide = n;
    //to binary
    printf("%d\n",divide);
    int k=0;
    while(divide>0){
        bi = divide%2;
        divide = divide/2;
        binary[k] = bi;
        k++;
    };
    for(int j=k-1;j>=0;j--){
        printf("%d",binary[j]);
    }
   return 0;
}