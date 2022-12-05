<<<<<<< HEAD
#include "ll_circular.h"
struct node *pattern(struct node **cstart){
    int sum=0;
    struct node *r;
    r=(*cstart)->next;
    while(r!=(*cstart)){
        sum=sum+r->info;
        r=r->next;
    }
        sum=sum+r->info;
        struct node *q=(*cstart)->next;
        while(q!=*cstart){
            q->info=sum-q->info;
            q=q->next;
        }
            q->info=sum-q->info;
}
int main(){
    struct node *poly1=NULL ;
    struct node *poly2=NULL ;
    insbeg(&poly1,2);
    insbeg(&poly1,3);
    insbeg(&poly1,5);
    insbeg(&poly1,4);
    cout<<"polynomial 1:  ";
    traverse(&poly1);
    cout<<endl;
    // ordins(&poly1,69);
    struct node *temp=pattern(&poly1);
    cout<<"the result after pattern is:  ";
    traverse(&poly1);
        cout<<endl;
    return 0;
=======
#include "ll_circular.h"
struct node *pattern(struct node **cstart){
    int sum=0;
    struct node *r;
    r=(*cstart)->next;
    while(r!=(*cstart)){
        sum=sum+r->info;
        r=r->next;
    }
        sum=sum+r->info;
        struct node *q=(*cstart)->next;
        while(q!=*cstart){
            q->info=sum-q->info;
            q=q->next;
        }
            q->info=sum-q->info;
}
int main(){
    struct node *poly1=NULL ;
    struct node *poly2=NULL ;
    insbeg(&poly1,2);
    insbeg(&poly1,3);
    insbeg(&poly1,5);
    insbeg(&poly1,4);
    cout<<"polynomial 1:  ";
    traverse(&poly1);
    cout<<endl;
    // ordins(&poly1,69);
    struct node *temp=pattern(&poly1);
    cout<<"the result after pattern is:  ";
    traverse(&poly1);
        cout<<endl;
    return 0;
>>>>>>> 26a52c7316c6a0450a45f51adc379e68217f8b9c
}