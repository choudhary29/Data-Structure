#include<iostream>
#include<stack>
using namespace std;
    prcd(char a,char b){
        if(a=='('||b=='('){
            return false;
        }
        else{
            if(b==')'){
                return true;
            }
            else{
                if(a=='^'||a=='/'||a=='%'){
         if(b=='^'){
            return false;
         }
         else{
            return true;
         }
    }
         else{
            if(b=='+'||b=='-'){
                return true;
            }
            else{
                return false;
            }
         }
            }
        }
    
    }
    
    
    int main(){
        cout<<prcd('+',')');
        return 0;
    }
   
