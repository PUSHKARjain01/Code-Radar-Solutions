#include <stdio.h>
int sorting(int n,int arr[n]){
    for(int i = 0;i<n;i++){
        for(int j = i;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }


    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    sorting(n,arr);
    int ans = arr[n-2];
    for(int i = 0;i<n;i++){
        
         if(n == 1){
            printf("-1");
            break;
        }
        else if(arr[i] != arr[i+1]!=arr[1+2]){
            printf("%d",ans);
            break;
        }
        else{
          printf("-1");
          break;
        }
    } 

 
}