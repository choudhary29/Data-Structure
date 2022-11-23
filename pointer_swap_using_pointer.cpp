#include<iostream>
using namespace std;
void swaps(int *x, int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;


}
int main(){
    int x,y;
    x=100;
    y=500;
    swaps(&x,&y);
    cout<<x<<" "<<y<<" "<<endl;
    x=10;
    y=50;
    swaps(&x,&y);
    cout<<x<<" "<<y<<" "<<endl;


    return 0;
}