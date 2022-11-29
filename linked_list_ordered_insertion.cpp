#include "ll.h"
void ordins(struct node**start, int key){
    struct node *p;
    struct node *q=NULL;
    
    p=*start;
   
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
    ordins(&start1,4);
    traverse(&start1);
    return 0;
}