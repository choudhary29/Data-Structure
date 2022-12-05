#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool prcd(char a, char b){
    if(a=='^'||a=='*'||a=='/'||a=='%'){
        if(b=='^'){
            return false;
        }
        else{return true;}
    }
    else{ 
        if(b=='+'||b=='-'){
            return true;
        }
        else {
        return false;
        }
    }
}
string itp(string infix){
        stack<char> s;
    int i=0;
    string postfix="";
    while(infix[i]!='\0')
    {
        // if operand add to the postfix expression
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
        {
            postfix += infix[i];
            i++;
        }
        // if opening bracket then push the stack
        else if(infix[i]=='(')
        {
            s.push(infix[i]);
            i++;
        }
        // if closing bracket encounted then keep popping from stack until 
        // closing a pair opening bracket is not encountered
        else if(infix[i]==')')
        {
            while(s.top()!='('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
            i++;
        }
        else            
        {
            while (!s.empty()&& prcd(s.top(),infix[i])){
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
            i++;
        }
    }
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }


    cout << "Postfix is : " << postfix; //it will print postfix conversion  
    return postfix;
}
int main(){
    stack<char> infix;
    string infi;
    getline(cin,infi);
    itp(infi);
    return 0;
}