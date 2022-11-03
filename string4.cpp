#include <iostream>
using namespace std;
int DAT[26];
int main(){
    char str[100];
    int i=0;
    gets(str);
    while(str[i]!='\0'){
        DAT[str[i]-'a']++;
        i++;
    }
    for(i=0; i<26; i++){
        if(DAT[i]!=0){
            
        }
    }
    return 0;
}