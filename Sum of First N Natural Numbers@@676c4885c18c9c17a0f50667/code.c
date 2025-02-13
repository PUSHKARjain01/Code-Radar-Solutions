#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum1 = 0;
    while(n>0){
        sum1 = sum1 + n;
        n--;
    }
    printf("%d",sum1);
    return 0;

 
}