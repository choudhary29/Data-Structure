#include<iostream>
using namespace std;
    int n=5;
void arrinsertion(int a[],int *n,int i,int x){
    cout<<"i";
    for(int j=*n-1;j>=i;j--){
        a[j+1]=a[j];
    }
    a[i]=x;
    *n=*n+1;
    cout<<*n<<endl;
}
int pqinsertion(int *a, int *n, int x){
    cout<<"j";
    int i=0;
    while( i<*n && x>=a[i]){
        i++;
    }
    arrinsertion(a,n,i,x);
}
int arrdeletion(int a[],int i, int *n){
    for(int j=i+1;j>=*n-1;j++){
        a[j-1]=a[j];
    }
    *n=*n-1;
    return (*n);
}
int pqdeletion(int a[],int *n,int i){
    // cout<<*n-1<<endl;
    int x=a[*n-1];
    // cout<<x<<endl;
    // cout<<arrdeletion(a,i,n);
    return arrdeletion(a,i,n);
}
int main(){
    int a[5]={1,2,3,4,5};
    int n=5;
    pqinsertion(a,&n,8);
    cout<<pqdeletion(a,&n,4)<<endl;
    cout<<"h";
    return 0;
}