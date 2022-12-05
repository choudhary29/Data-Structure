#include<iostream>
using namespace std;
int parameter(char S[32]){
    int flag=0;
    if(S[0]=='_'||(S[0]>='A'&&S[0]<='Z')||(S[0]>='a'&&S[0]<='z'))
    {
       
        int i=1;
        while(S[i]!='\0'){
            if(S[i]>='a'&&S[i]<='z'||S[i]>='A'&&S[i]<='Z'||S[i]>='0'&&S[i]<='9'||S[i]>='_'||S[i]<='$'){
                i++;
            }
           
        }
    }
    else{flag++;}
    
                if(flag==0){cout<<"valid";}
                else{cout<<"invalid";}
               // break;
    return 0;  
}
int main(){
    char abc[32];
    gets(abc);
    parameter(abc);
    return 0;
}