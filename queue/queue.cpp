#include<iostream>
using namespace std;
#define queuesize 3
#define true 1
#define false 0
struct queue{
    int rear;
    int front;
    int item[queuesize];
};

struct queue q;


void initialize(){
    q.front=0;
    q.rear=-1;
}
int isempty(struct queue *q){
    if(q->rear-(q->front)+1==0){
        return true;
    }
    else{
        return false;
    }
}
void enqueue(struct queue *q,int x){
    if(q->rear==queuesize-1){
        cout<<"queue overflows"<<endl;
        exit(1);
    }
    else{
    q->rear=q->rear+1;
    q->item[q->rear]=x;
    }
}
int dequeue(struct queue *q){
    if(isempty(q)){
        cout<<"queue underflows"<<endl;
        exit(1);
    }
    else{
    int x=q->item[q->front];
    q->front=q->front+1;
    return x;
    }
}
int main(){
    struct queue q;
    
//  enqueue(&q,10);
//  enqueue(&q,20);
//  enqueue(&q,30);
//  enqueue(&q,40);
//  enqueue(&q,50);

//  x=dequeue(&q);
//  cout<<"popped value is:"<<x<<endl;
//  x=dequeue(&q);
//  cout<<"popped value is:"<<x<<endl;
//  x=dequeue(&q);
//  cout<<"popped value is:"<<x<<endl;
//  x=dequeue(&q);
//  cout<<"popped value is:"<<x<<endl;
//  x=dequeue(&q);
//  cout<<"popped value is:"<<x<<endl;
//  x=dequeue(&q);
//  cout<<"popped value is:"<<x<<endl;
 return 0;


}