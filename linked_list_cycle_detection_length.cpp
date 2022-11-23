#include<iostream>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
using namespace std;
struct node{
    int info;
    struct node *next;
};
// ***************************************
struct node *start;
// ***************************************
struct node *getnode(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
// ***************************************
void insbeg(int x){
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=start;
    start=p;
}
// ****************************************
void insend(int x){
    struct node *p;
    struct node *q;
    q=start;
    while(q->next!=NULL){
        q=q->next;
    }
    p=getnode();
    p->info=x;
    p->next=NULL;
    q->next=p;
    
}
// ***************************************
cycledetection(){
    struct node *t,*r;
    t=start;
    r=start->next;
    while(r!=NULL && r->next!=NULL){
        t=t->next;
        r=r->next;
        r=r->next;
        if(t==r)
            return TRUE;
    }
    return FALSE;
    
}
// **************************************
void traverse(){
    struct node *p;
    p=start;
    while(p!=NULL){
        cout<<p->info<<" ";
        p=p->next;
    }
}
// ***************************************
int main(){

    start=NULL;
    insbeg(100);
    insbeg(200);
    insbeg(300);
    insbeg(400);
    insbeg(500);
    insend(10);
    insend(20);
    insend(30);
    insend(40);
    insend(50);
    struct node *p=start;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=start;
    cycledetection();
    //traverse();
    return 0;
}