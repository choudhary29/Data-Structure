#include "ll_poly.h"
// struct node *polysubll(struct node **poly1,struct node **poly2){
// struct node *q=*poly2;
// while(q!=NULL){
//     q->coff=-1*(q->coff);
//     q=q->next;
// }
// struct node *poly3=polyaddll(poly1,poly2);
// return poly3;
    
// }
int main(){
    struct node *poly1=NULL ;
    struct node *poly2=NULL ;
    insbeg(&poly1,3,1);
    insbeg(&poly1,3,3);
    insbeg(&poly1,4,4);
    insbeg(&poly1,6,5);
    insbeg(&poly2,6,2);
    insbeg(&poly2,5,3);
    insbeg(&poly2,4,4);
    cout<<"polynomial 1:  ";
    traverse(&poly1);
    cout<<endl;
    cout<<"polynomial 2:  ";
    traverse(&poly2);
    cout<<endl;
    cout<<"polynomials after subtraction:  ";
    poly1=polysubll(&poly1,&poly2);
    traverse(&poly1);
    return 0;
}