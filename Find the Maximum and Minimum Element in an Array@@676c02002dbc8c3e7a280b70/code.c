#include <stdio.h>
int main(){
    int n;
    int min = arr[0];
    int max = arr[0];
    scanf("%d",&arr[n]);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);

    }
      for(int i = 1;i<n;i++){
        if(arr[i]<min){
            arr[i] = min;
        }
        if(arr[i]>max){
            arr[i] = max;
        }

    }
    printf("%d %d",min,max);
}