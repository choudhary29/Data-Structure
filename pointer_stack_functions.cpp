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

/**************************************/
void Initialize(struct Stack *s)
{
    
    s->top=-1;
}
/**************************************/
int Isempty(struct Stack s){
    if(s.top==-1){
        return true;
    }
    else{
        return false;
    }
}
/**************************************/
int push(struct Stack *s, int x){
    if(s->top==stacksize-1){
        cout<<"stack overflows"<<endl;
        exit(1);
    }
    s->top++;
    s->item[s->top]=x;
}
/**************************************/
int pop(struct Stack *s,int x){
    if(Isempty(struct Stack s)){
        cout<<"stack underflows"<<endl;
        exit(1);
    }
    x=s->item[s->top];
    s->top--;
    return x;
}
/**************************************/
int Stacktop(struct Stack s,int x){
    x=s.item[s.top];
    return x;
}
/**************************************/
int main(){
    struct Stack *fs;
    int x;
    Initialize(fs);
    push(*fs,100);
    push(*fs,200);
    push(*fs,300);
    push(*fs,400);
    push(*fs,500);
    x=pop(*fs,0);
    cout<<"Popped element is:"<<x<<endl;
    x=pop(*fs,0);
    cout<<"Popped element is:"<<x<<endl;
     x=pop(*fs,0);
    cout<<"Popped element is:"<<x<<endl;
     x=pop(*fs,0);
    cout<<"Popped element is:"<<x<<endl;
     x=pop(*fs,0);
    cout<<"Popped element is:"<<x<<endl;
    
    
    return 0;
}
