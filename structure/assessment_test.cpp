//Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. If 
//the dates are equal, display "Dates are equal" otherwise display "Dates are not equal"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct date{
    int date;
    int month;
    int year;
};
int main (){
    int i,flag=0;  struct date d[2]; for(i=0;i<2;i++)
    {
        printf("\nEnter day for the %dth date\n",i+1);
        scanf("%d",&d[i].date);
        printf("\nEnter the month for the %dth date\n",i+1);
        scanf("%d",&d[i].month);
        printf("\nEnter the year for the %dth date\n",i+1);
        scanf("%d",&d[i].year);
    }
    if(d[0].date==d[1].date){
    if(d[0].month==d[1].month){
    if(d[0].year==d[1].year){
        flag=1;
    }
    }
    }
    if(flag==1)
    printf("\nThe dates are equal");
    else
    printf("\nThe dates are not equal");
}