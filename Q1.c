#include <stdio.h>
int main(){
   int n;
   printf("Input array length : ");
   scanf("%d",&n);
   printf("Input array : ");
   int array[n];
   int i,j,temp,sum=0;
   for(i=0;i<n;i++){
       scanf("%d",&array[i]);
   }
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           if(array[i]>array[j]){
               temp = array[i];
               array[i]=array[j];
               array[j]=temp;
           }
       }
   }

   for(i=0;i<n;i++){
       if(i<3){
           sum += array[i];
       }else{
           if(array[i]>0){
           sum += array[i];
            }
       }
   }
   printf("The largest sum : %d\n",sum);
    return 0;
}