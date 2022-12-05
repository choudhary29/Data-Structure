<<<<<<< HEAD
#include "ll.h"
void ordins(struct node**start, int key){
    struct node *p;
    struct node *q=NULL;
    q=NULL;
    p=*start;
    while(p!=NULL && key>=p->info){
        q=p;
        p=p->next;
    }
    if(q!=NULL){
        insaft(&q,q->info,key);
    }
    else{
        insbeg(start,key);
    }

   
}
int main(){
    struct node *start1=NULL;
    struct node *start2=NULL;
    insend(&start1,1);
    insend(&start1,2);
    insend(&start1,3);
    insend(&start1,4);
    // insend(&start2,4);
    // insend(&start2,29);
    // insend(&start2,69);
    cout<<"linked list 1:  ";
    traverse(&start1);
    
    // cout<<endl;
    // cout<<"linked list 2:  ";
    // traverse(&start2);
    cout<<endl;
    cout<<"ordered linked list is:  ";
    ordins(&start1,3);
    traverse(&start1);
    return 0;
=======
#include "ll.h"
void ordins(struct node**start, int key){
    struct node *p;
    struct node *q=NULL;
    q=NULL;
    p=*start;
    while(p!=NULL && key>=p->info){
        q=p;
        p=p->next;
    }
    if(q!=NULL){
        insaft(&q,q->info,key);
    }
    else{
        insbeg(start,key);
    }

   
}
int main(){
    struct node *start1=NULL;
    struct node *start2=NULL;
    insend(&start1,1);
    insend(&start1,2);
    insend(&start1,3);
    insend(&start1,4);
    // insend(&start2,4);
    // insend(&start2,29);
    // insend(&start2,69);
    cout<<"linked list 1:  ";
    traverse(&start1);
    
    // cout<<endl;
    // cout<<"linked list 2:  ";
    // traverse(&start2);
    cout<<endl;
    cout<<"ordered linked list is:  ";
    ordins(&start1,3);
    traverse(&start1);
    return 0;
>>>>>>> 26a52c7316c6a0450a45f51adc379e68217f8b9c
}