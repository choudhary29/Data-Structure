#include<stdio.h>
struct student{
    int roll_no;
    char name[20];
    double perc;

};
int main(){
    struct student s={9085,"kanchan", 38.8}; 
    struct student *ptr;
    ptr=&s;
    scanf("%d %s %lf", &(ptr-> roll_no), ptr->name,&(ptr->perc));
    printf("%d %s %lf", ptr->roll_no, ptr-> name, ptr-> perc);

}