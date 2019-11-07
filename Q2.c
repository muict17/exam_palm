#include <stdio.h>
int countdigit(int n);
int power(int n,int pow);
int main(){
    int n;
    int i,base10=0;
    printf("Input binary : ");
    scanf("%d",&n);
    int digit = countdigit(n);
    int array[digit];
    int binary[]={0},bi=0;
    for(i=digit-1;i>=0;i--){
        array[i]=n%10;
        n=n/10;
        if(array[i]==0){
            array[i] = 1;
        }else array[i] = 0;
        base10 += array[i]*power(2,digit-(i+1));
    }
    for(i=0;i<digit;i++){
        printf("%d",array[i]);
    }
    printf(" (1st complement)-> ");
    base10 += 1;
    int divide = base10;
    //to binary
    int k=0;
    while(divide>0){
        bi = divide%2;
        divide = divide/2;
        binary[k] = bi;
        k++;
    };
    int j=k;
    while(j<digit){
        printf("0");
        j++;
    }
    for(i=k-1;i>=0;i--){
        printf("%d",binary[i]);
    }
    printf(" (2nd complement)\n");
   return 0;
}
int countdigit(int n){
    int count = 0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int power(int n,int pow){
    if(pow==0){
        return 1;
    } return n*power(n,pow-1);
}