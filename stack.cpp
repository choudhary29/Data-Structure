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
    push(100);
    push(200);
    push(300);
    push(400);
    push(500);
    x=pop(0);
    cout<<"Popped element is:"<<x<<endl;
    x=pop(0);
    cout<<"Popped element is:"<<x<<endl;
     x=pop(0);
    cout<<"Popped element is:"<<x<<endl;
     x=pop(0);
    cout<<"Popped element is:"<<x<<endl;
     x=pop(0);
    cout<<"Popped element is:"<<x<<endl;
    
    
    return 0;
}