#include<stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    printf("%d",sum);
}