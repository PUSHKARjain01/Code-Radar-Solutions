#include <stdio.h>
int main(){
    int a1,a2;
    scanf("%d %d",&a1,&a2);
    if(a1==a2){
        printf("Equal");
    }
    else{
        if(a1>a2){
            printf("First");
        }
        else{
            printf("Second");
        }
    }
}