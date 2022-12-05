#include <iostream>
#include <cmath>
using namespace std;
int nearest_prime(int n)
{
    if (n & 1)
        n -= 2;
    else
        n--;
    int i, j;
    for (i = n; i >= 2; i -= 2) {
        if (i % 2 == 0)
            continue;
        for (j = 3; j <= sqrt(i); j += 2) {
            if (i % j == 0)
                break;
        }
        if (j > sqrt(i))
            return i;
    }
    return 2;
}
int  division_hashing(int key,int ts){
  int np=nearest_prime(ts);
  int l=key%np;
  return l;
}
int main(){
   int n{};
  cin>>n;
  int a[n];
for(int i{};i<n;i++){
 division_hashing(a[i],n);
}

  return 0;
}