// #include <iostream>
// using namespace std;
// int main(){
//    int n{};
//   cin>>n;
//   int a[n];
// // for(int i{};i<n;i++){
// //  cin>>a[i];
// // }
//     int low_bound{};
//     int upper_bound{n-1};
//     int byte_size{sizeof(a[n]/a[0])};
//     int i{};
//     cin>>i;
//     cout<<&a[i]<<endl;
// cout<<(a+(i-low_bound))<<endl;
    
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"size of array:";
    cin>>n;
    int a[n];
    int lower_bound=0;
    int upper_bound=n-1;
    int byte_size=sizeof(a[n]/a[0]);
    int i;
    cout<<"enter the index for which you need address:";
    cin>>i;
    cout<<"by address:"<<&a[i]<<endl;
    cout<<"bu formula:"<<(a+(i-lower_bound))<<endl;
    return 0;
}
