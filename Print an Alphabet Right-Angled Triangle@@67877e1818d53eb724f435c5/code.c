#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        char x = 'A';
        for(int j = 0;j<i;j++){
            printf("%c ",x);
            x++;


        }
        printf("\n");
    }
}