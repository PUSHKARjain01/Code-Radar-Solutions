#include <stdio.h>
#include <stdbool.h>
bool checkprime(int n){
    for(int i = 2;i<n;i++){
        if(n==2){
            return true;
        }
        else if(n%i==0){
            return false;
        }
        else{
            return true;

        }
    }
    return true;
}
int main(){
    int n;
    scanf("%d",&n);
    bool ans = checkprime(n);
    if(ans == true){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}