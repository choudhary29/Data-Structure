#include<iostream>
#define stacksize 10
#define TRUE 1
#define FALSE 0
using namespace std;
struct Stack{
    int item[stacksize];
    int top;
};
/**************************************/
struct Stack s;
/**************************************/
Initialize()
{
    s.top=-1;
}
/**************************************/
Isempty(){
    if(s.top==-1){
        return true;
    }
    else{
        return false;
    }
}
/**************************************/
push(int x){
    if(s.top==stacksize-1){
        cout<<"stack overflows"<<endl;
        exit(1);
    }
    s.top++;
    s.item[s.top]=x;
}
/**************************************/
pop(int x){
    if(Isempty()){
        cout<<"stack underflows"<<endl;
        exit(1);
    }
    x=s.item[s.top];
    s.top--;
    return x;
}
/**************************************/
Stacktop(int x){
    x=s.item[s.top];
    return x;
}
/**************************************/
int main(){
    int x;
    Initialize();
    int x;
    while(x!=0){
        int r=x%2;
        push(r);
        x=x/2;
      }
      while(!Isempty())
      {
        int a=pop(0);
        cout<<a;
      }
    
    return 0;
}