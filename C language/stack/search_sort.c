#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    int low=0,high=4,mid,key;
    printf("enter the element to search");
    scanf("%d",&key);
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
            printf("element found at index %d \n",mid);
            return 0;
        }
        else if(a[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    printf("not found");
    return 0;
}