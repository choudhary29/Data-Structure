#include "ll_char.h"
struct node* vowelconsonant(struct node **start){
    struct node *p=NULL;
    struct node *r=NULL;
    struct node *q=*start;
    char x=0;
    while(q!=NULL){
        if(q->info=='a'||q->info=='e'||q->info=='i'||q->info=='o'||q->info=='u'){
            q=q->next;
            if(p==NULL){
                if(r!=NULL){
                    x=delaft(start,r->info);
                }
                else{
    // cout<<"df";
                    x=delbeg(start);
                    insbeg(start,x);
                    p=*start;
                    r=p;
                }
            }
            else{
                x=delaft(start,r->info);
                insaft(start,p->info,x);
                p=p->next;
            }
        }
        else{
            r=q;
            q=q->next;
        }
    }
    return *start;
}
int main(){
    struct node *start=NULL;
    insbeg(&start,'a');
    insbeg(&start,'b');
    insbeg(&start,'e');
    insbeg(&start,'c');
    insbeg(&start,'i');
    traverse(&start);
    cout<<endl;
    vowelconsonant(&start);
    traverse(&start);
}