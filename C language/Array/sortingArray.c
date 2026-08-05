#include<stdio.h>
int main(){
    int arr[5]={10,20,30,12,1};
    for(int i=0;i<5;i++){
        int min=i;
        for(int j=i+1;j<5;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    for(int i=0;i<5;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}