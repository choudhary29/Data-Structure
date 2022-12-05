#include<iostream>
using namespace std;
    int toh(int n, char s, char m, char d){
    if(n==1){
        cout<<s<<"-->"<<d<<endl;
    }
    else{
        toh(n-1, s, d, m);
        cout<<s<<"-->"<<d<<endl;
        toh(n-1, m, s, d);

    }

    return 0;
}
int main(){
    int n{};
    cin>>n;
    char s{'S'},d{'D'},m{'M'};
    toh(n,s,m,d);
    return 0;
}