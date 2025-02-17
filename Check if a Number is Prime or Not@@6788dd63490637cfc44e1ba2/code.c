#include <stdio.h>
bool checkprime(int n){
    for(int i = 2;i<n;i++){
        if(n==2){
            return true;
        }
        else if(n%i==0){
            return true;
        }
        else{
            return false;

        }
    }
    return false;
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