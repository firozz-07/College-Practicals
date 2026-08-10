#include<stdio.h>
int main(){
    int arr[5]={10,20,31,21,78};
    for(int i=0;i<5;i++){
        if(arr[i]%2==1){
            printf(" %d",arr[i]);
        }
    }
    return 0;
}