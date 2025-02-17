#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&c+a>b&&b+c>a){
        printf("Valid");

    }
    else{
        printf("Invalid");
    }
}