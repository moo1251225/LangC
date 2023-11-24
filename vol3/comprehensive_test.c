#include<stdio.h>

int main(){
    int count = 26;
    for(int i=1; i <= 25; i++){
        if(i%3 == 0){
            printf("%d\n",i);
        }
    }
    while(count <= 50){
        if(count % 3 == 0){
            printf("%d\n",count);
            count++;
        }
        else count++;
    }      
    return 0;
}