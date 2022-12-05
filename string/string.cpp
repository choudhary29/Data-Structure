#include<iostream>
using namespace std;
int main(){
    char name[20];
    //cin>>name;
    gets(name);
    //cout<<name;
    puts(name);
    int i=0;
    while(name[i]!='\0'){
        i=i+1;
    }
    //cout<<i;
    //reversed string
    i=i-1;
    int j=0;
    // while(j<i){
    //     int t=name[i];
    //     name[i]=name[j];
    //     name[j]=t;
    //     j++;
    //     i--;
    // }
    // cout<<name;
    //palidrome
    int flag=0;
    while(j<i){
        if(name[j]!=name[i]){
            flag=1;
            break;
        }
            j++;
            i--;
        }
        if(flag==1){
            cout<<"not a palindrome";
        }
        else{
            cout<<"palindrome";
        }
        //equal or unequal string
        char name1[20];
        char name2[20];
        gets(name1);
        gets(name2);
        while(name1[i]!='\0'&&name2[i]!='\0'){
            if(name1[i]=name2[i]){
                i++;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"unequal";
        }
        else{
            if(name1[i]==name2[i]){
                cout<<"equal";
            }
            else{
                cout<<"unequal";
            }
        }

    
    return 0;
}