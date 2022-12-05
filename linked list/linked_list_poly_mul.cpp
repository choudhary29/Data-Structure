<<<<<<< HEAD
#include "ll_poly.h"
struct node *polymulll(struct node **poly1, struct node **poly2){
    struct node *poly3=NULL;
    struct node *p=NULL;
    struct node *q=NULL;
    p=*poly1;
    q=*poly2;
    while(q!=NULL){
         p=*poly1;
         while(p!=NULL){
            ordins(&poly3,(p->coff)*(q->coff),p->exp+q->exp);
            p=p->next;
         }
         q=q->next;
         p=poly3;
    }
    while(p->next!=NULL){
        if(p->exp==p->next->exp){
            p->coff=p->coff+p->next->coff;
            delaft(&p);
        }
        else{
            p=p->next;
        }
    }
    return poly3;
}

int main(){
    struct node *poly1=NULL ;
    struct node *poly2=NULL ;
    insbeg(&poly1,3,1);
    insbeg(&poly1,3,3);
    insbeg(&poly2,5,3);
    insbeg(&poly2,4,4);
    cout<<"polynomial 1:  ";
    traverse(&poly1);
    cout<<endl;
    cout<<"polynomial 2:  ";
    traverse(&poly2);
    cout<<endl;
    cout<<"polynomials after multiplication:  ";
    poly1=polymulll(&poly1,&poly2);
    ordins(&poly1,5,2);
    traverse(&poly1);
    return 0;
=======
#include "ll_poly.h"
struct node *polymulll(struct node **poly1, struct node **poly2){
    struct node *poly3=NULL;
    struct node *p=NULL;
    struct node *q=NULL;
    p=*poly1;
    q=*poly2;
    while(q!=NULL){
         p=*poly1;
         while(p!=NULL){
            ordins(&poly3,(p->coff)*(q->coff),p->exp+q->exp);
            p=p->next;
         }
         q=q->next;
         p=poly3;
    }
    while(p->next!=NULL){
        if(p->exp==p->next->exp){
            p->coff=p->coff+p->next->coff;
            delaft(&p);
        }
        else{
            p=p->next;
        }
    }
    return poly3;
}

int main(){
    struct node *poly1=NULL ;
    struct node *poly2=NULL ;
    insbeg(&poly1,3,1);
    insbeg(&poly1,3,3);
    insbeg(&poly2,5,3);
    insbeg(&poly2,4,4);
    cout<<"polynomial 1:  ";
    traverse(&poly1);
    cout<<endl;
    cout<<"polynomial 2:  ";
    traverse(&poly2);
    cout<<endl;
    cout<<"polynomials after multiplication:  ";
    poly1=polymulll(&poly1,&poly2);
    ordins(&poly1,5,2);
    traverse(&poly1);
    return 0;
>>>>>>> 26a52c7316c6a0450a45f51adc379e68217f8b9c
}