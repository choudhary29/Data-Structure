#include<iostream>
using namespace std;
void traverse(int *ptr, int n){
    int i;
    for(i=0;i<=n-1;i++){
        cout<<*(ptr+i);
    }
}
int main(){
    int i;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr=&a[3];
    for(i=0;i<=9;i++){
        cout<<a[i];
    }
    cout<<endl;
    for(i=0;i<=9;i++){
        cout<<*(ptr+i);
    }
    cout<<endl;
    for(i=0;i<=9;i++){
        cout<<*(a+i);
    }
    cout<<endl;
    return 0;
}