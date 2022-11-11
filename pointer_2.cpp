// dynamic memory allocation
#include<iostream>
#include<malloc.h>
using namespace std;
int main(){
    // printf("%d ",sizeof(int));
    // printf("%d  ",sizeof(double));
    // printf("%d ",sizeof(long));
    // printf("%d ",sizeof(char));
    // printf("%d ",sizeof(long long));
    int *p;
    p=(int*)malloc(40);
    
    for(int i=0;i<5;i++)
    
    {
        scanf("%d ",(p+i));
        
    }
     for(int i=0;i<5;i++){
        printf("%d " ,*(p+i));
    }
    return 0;
}
