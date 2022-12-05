#include<iostream>
#include<climits>
using namespace std;
int partition(int a[],int low,int high){
    int i=low;
    int j=high+1;
    int pivot=a[low];
    do{
        do{
            i=i+1;
           }   while(a[i]<pivot);
        
        do{
            j=j-1;
         } while(a[j]>pivot);
        
        if(i<j){
           int t=a[i];
           a[i]=a[j];
           a[j]=t;

        }
      }  while(i<j);
        int t=a[j];
        a[j]=a[low];
        a[low]=t;
    
    return j;
}
//****************************
void quicksort(int a[], int low, int high){
    if(low<high){
        int j;
        j=partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}
//******************************
int main(){
    int a[11]={5, 7, 17, 6, 9, 8, 11, 18, 12 };
    a[10]=__INT_MAX__;
    for(int i=0; i<=9; i++){
        quicksort(a,0,9);
        cout<<a[i]<<" ";
    }
    return 0;

}
