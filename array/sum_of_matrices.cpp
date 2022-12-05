#include<iostream>
using namespace std;
int main(){
    int a[2][2]{};
    int b[2][2]{};
    int c[2][2]{};
    auto sum=0;
    for(int i=0; i<2; i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0;j<2;j++){
            cin>>b[i][j];
        }
    }

     for(int i=0; i<2; i++){
        for(int j=0;j<2;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
        cout<<endl;
     }
      for(int i=0; i<2; i++){
        for(int j=0;j<2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}