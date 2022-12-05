#include <iostream>
using namespace std;
int main(){
  int m{};
  int n{};
  cin>>m>>n; 
  int a[m][n];
// for(int i{};i<n;i++){
//  cin>>a[i];
// }
    int low_bound{};
    int upper_bound{m-1};
    int low_bound_2{};
    int upper_bound_2{n-1};
 // int byte_size{sizeof(a[n]/a[0])};
    int i{};
    int j;
    cin>>i>>j;
    cout<<&a[i][j]<<endl;
    cout<<(a[0]+((i-low_bound)*(upper_bound_2-low_bound_2+1)+(j-low_bound_2)))<<endl;
    
    return 0;
}