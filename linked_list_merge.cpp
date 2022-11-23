#include "ll.h"
struct node *mergell(struct node **start1, struct node **start2, struct node **start3){
    struct node *p,*q;
    p=*start1;
    q=*start2;
    *start3= NULL;
    while(p!=NULL && q!=NULL){
        if(p->info<q->info){
            insend(start3, p->info);
            p=p->next;
        }
        else{
            insend(start3,q->info);
            q=q->next;
        }
    }
    while(p!=NULL){
        insend(start3,p->info);
        p=p->next;
    }
    while(q!=NULL){
        insend(start3,q->info);
        q=q->next;
    }
    return *start3;
}
int main(){
    struct node *start1=NULL;
    struct node *start2=NULL;
    struct node *start3=NULL;  
    insend(&start1,1);
    insend(&start1,2);
    insend(&start1,3);
    insend(&start1,4);
    insend(&start2,4);
    insend(&start2,29);
    insend(&start2,69);
    cout<<"linked list 1:  ";
    traverse(&start1);
    
    cout<<endl;
    cout<<"linked list 2:  ";
    traverse(&start2);
    cout<<endl;
    cout<<"merged linked list is:  ";
    mergell(&start1,&start2,&start3);
    traverse(&start3);
    return 0;
}