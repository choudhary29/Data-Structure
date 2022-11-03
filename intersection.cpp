#include<iostream>
using namespace std;
void intersectionarray(int a[], int m, int b[], int n){
    int i=0;
    int j=0;
    int k=0;
    int c[10];
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            if(b[j]<a[i]){
                c[k]=b[j];
                j++;
                k++;
            }
            else{
                c[k]=a[i];
                i++;
                j++;
                k++;
            }
        }
    }
    while(i<m){
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<n){
        c[k]=b[j];
        k++;
        j++;
    }
    for(int i=0; i<k; i++){
        cout<<c[i]<<" ";
    }
}
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={0,2,4,6,8};
    intersectionarray(a,5,b,5);
    return 0;
}