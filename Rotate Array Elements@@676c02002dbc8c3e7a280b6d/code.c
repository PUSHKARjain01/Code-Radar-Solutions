#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int k;
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int i = 0;i<n;i++){
        arr[i+k] = arr[i]
    }
    for(int j = 0;j<n;j++){
        printf("%d",arr[i]);
    }

}