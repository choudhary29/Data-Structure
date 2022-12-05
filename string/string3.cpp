//prefix or substrings
#include <iostream>
using namespace std;
int main(){
    string name{};
    getline(cin,name);
   int size= name.size();
for(int i=0;i<size;i++){
    for(int j=0;j<=i;j++){
        cout<<name[j];
    }
    cout<<endl;
}
    return 0;
}