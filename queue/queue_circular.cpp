#include<iostream>
using namespace std;
#define queuesize 10
#define true 1
#define false 0
struct cqueue{
    int rear;
    int front;
    int item[queuesize];
};

struct cqueue cq;


void initialize(struct cqueue *cq){
    cq->front=queuesize-1;
    cq->rear=queuesize-1;
}
int isempty(struct cqueue *cq){
    if(cq->rear==(cq->front)){
        return true;
    }
    else{
        return false;
    }
}
void enqueue(struct cqueue *cq,int x){
    if((cq->rear+1)% queuesize==cq->front){
        cout<<"queue overflows"<<endl;
        exit(1);
    }
    else{
    cq->rear=(cq->rear+1)% queuesize;
    cq->item[cq->rear]=x;
    }
}
int dequeue(struct cqueue *cq){
    if(isempty(cq)){
        cout<<"queue underflows"<<endl;
        exit(1);
    }
    else{
    cq->front=(cq->front+1)% queuesize ;
    int x=cq->item[cq->front];
    return x;
    }
}
int main(){

    struct cqueue cq;
    int x;
    initialize(&cq);
    
enqueue(&cq,10);
enqueue(&cq,20);
enqueue(&cq,30);
enqueue(&cq,40);
enqueue(&cq,50);

  x=dequeue(&cq);
  cout<<"popped value is:"<<x<<endl;
  x=dequeue(&cq);
  cout<<"popped value is:"<<x<<endl;
  x=dequeue(&cq);
  cout<<"popped value is:"<<x<<endl;
  x=dequeue(&cq);
  cout<<"popped value is:"<<x<<endl;
  x=dequeue(&cq);
  cout<<"popped value is:"<<x<<endl;
  x=dequeue(&cq);
  cout<<"popped value is:"<<x<<endl;
 return 0;


}