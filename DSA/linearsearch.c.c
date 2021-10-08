#include<stdio.h>
void main(){
    int len=9, arr[9]={10,50,60,70,90,20,30,40,80},i,pos;
    
    int num;
    printf("Enter number you want to search :: ");
    scanf("%d",&num);
    for (i=0;i<len;i++){
        if(num==arr[i]){
            pos=i;
        };
    };
    printf("Position of element :: %d",pos+1);
    }