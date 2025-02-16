#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i<n+1;i++){
        char x = 'A';
        for(int j = 0;j<i;j++){
            printf("%c ",x);
            x++;


        }
        printf("\n");
    }
}