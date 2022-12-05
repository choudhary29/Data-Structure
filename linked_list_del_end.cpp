<<<<<<< HEAD
// delete end wala
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
// ***************************************

// ***************************************
struct node *getnode(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
// ***************************************
void insbeg(struct node **start,int x){
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=*start;
    *start=p;
}
// ***************************************
void insend(struct node **start,int x){
    struct node *p;
    struct node *q;
    q=*start;
    while(q->next!=NULL){
        q=q->next;
    }
    p=getnode();
    p->info=x;
    p->next=NULL;
    q->next=p;
    
}
// ***************************************
// void insaft(struct node **q,int x){
//     struct node *p,*r;
//     p=getnode();
//     p->info=x;
//     r=(*q)->next;
//     p->next=r;
//     (*q)->next=p;

// }
// ***************************************
void traverse(struct node *start){
    struct node *p;
    p=start;
    while(p!=NULL){
        cout<<p->info<<" ";
        p=p->next;
    }
}
// ***************************************
int delend(struct node **start){
    int x;
    struct node *q, *p;
    p=(*start);
    q=NULL;
    while(p->next!=NULL){
        q=p;
        p=p->next;
    }
    q->next=NULL;
    x=p->info;
    free(p);
    return x;

}
// ***************************************
int main(){
    struct node *start;
    struct node *p;
    start=NULL;
    int x;
    insbeg(&start,100);
    insbeg(&start,200);
    insbeg(&start,300);
    insbeg(&start,400);
    insbeg(&start,500);
    insend(&start,10);
    insend(&start,20);
    insend(&start,30);
    insend(&start,40);
    insend(&start,50);
    traverse(start);
    // p=start;
    // for(int i=1;i<4;i++){
    // p=p->next;
    // }
    // insaft(&p,40);
    // cout<<endl;
    // traverse(start);
    x=delend(&start);
    cout<<endl<<"deleted data is:"<<x<<endl;
    traverse(start);

=======
// delete end wala
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
// ***************************************

// ***************************************
struct node *getnode(){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
// ***************************************
void insbeg(struct node **start,int x){
    struct node *p;
    p=getnode();
    p->info=x;
    p->next=*start;
    *start=p;
}
// ***************************************
void insend(struct node **start,int x){
    struct node *p;
    struct node *q;
    q=*start;
    while(q->next!=NULL){
        q=q->next;
    }
    p=getnode();
    p->info=x;
    p->next=NULL;
    q->next=p;
    
}
// ***************************************
// void insaft(struct node **q,int x){
//     struct node *p,*r;
//     p=getnode();
//     p->info=x;
//     r=(*q)->next;
//     p->next=r;
//     (*q)->next=p;

// }
// ***************************************
void traverse(struct node *start){
    struct node *p;
    p=start;
    while(p!=NULL){
        cout<<p->info<<" ";
        p=p->next;
    }
}
// ***************************************
int delend(struct node **start){
    int x;
    struct node *q, *p;
    p=(*start);
    q=NULL;
    while(p->next!=NULL){
        q=p;
        p=p->next;
    }
    q->next=NULL;
    x=p->info;
    free(p);
    return x;

}
// ***************************************
int main(){
    struct node *start;
    struct node *p;
    start=NULL;
    int x;
    insbeg(&start,100);
    insbeg(&start,200);
    insbeg(&start,300);
    insbeg(&start,400);
    insbeg(&start,500);
    insend(&start,10);
    insend(&start,20);
    insend(&start,30);
    insend(&start,40);
    insend(&start,50);
    traverse(start);
    // p=start;
    // for(int i=1;i<4;i++){
    // p=p->next;
    // }
    // insaft(&p,40);
    // cout<<endl;
    // traverse(start);
    x=delend(&start);
    cout<<endl<<"deleted data is:"<<x<<endl;
    traverse(start);

>>>>>>> 26a52c7316c6a0450a45f51adc379e68217f8b9c
}