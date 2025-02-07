#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(~(a|b)== 10){
        printf("True");
    }
    else{
        printf("False");
    }
}