#include<stdio.h>
int main(){
int arr[4]={1,2,3,4};
int l=sizeof(arr[0]);
for (int i=0;i<l;i++){
printf(" %d",arr[i]);
}
return 0;
}