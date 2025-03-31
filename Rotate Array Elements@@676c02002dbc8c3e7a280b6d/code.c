#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int k;
    int prr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int i = 0;i<n;i++){
        if(i+k+1<=n){
        prr[i+k] = arr[i];
        }
        else{
             prr[i+k-n] = arr[i];
        }
    }
    for(int j = 0;j<n;j++){
        printf("%d\n",prr[j]);
    }

}