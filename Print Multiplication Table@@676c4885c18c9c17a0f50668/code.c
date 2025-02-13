#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1;i<11;i++){
        int m = n*i;
        printf("%d x %d = %d\n",n,i,m);
    }

 
}