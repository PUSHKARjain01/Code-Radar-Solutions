#include <stdio.h>
bool checkprime(int n){
    for(int i = 2;i<n;i++){
        if(n==2){
            return True;
        }
        else if(n%i==0){
            return True;
        }
        else{
            return False;

        }
    }
    return False;
}
int main(){
    int n;
    scanf("%d",&n);
    bool ans = checkprime(n);
    if(ans == True){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}