#include <stdio.h>
bool checksorting(int n,int arr[n]){
       for(int i = 0;i<n;i++){
     if(arr[i]<=arr[i+1]){
        return true;
     }
     else{
        return False;
     }
    }
    return 0;
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bool ans = checksorting(n,arr[]);
    if(ans == True){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    
}