#include <bits/stdc++.h>
using namespace std;

int Assigning_mice_to_hole(int mice[],int hole[],int m,int h){
    if(m!=h){
      return -1;
}
   sort(mice,mice+m);
   sort(hole,hole+h);

   int max1 =0;
   for(int i=0;i<h;++i){
    if(max1 < abs(mice[i] - hole[i])){
        max1 = abs(mice[i]- hole[i]);
    }
   }
   return max1;
}
int main(){

    int mice[] = {3,2,-4};
    int hole[] = {0,-2,4};
    int m = sizeof(mice)/sizeof(mice[0]);
    int h = sizeof(hole)/sizeof(hole[0]);
    int min_time = Assigning_mice_to_hole(mice,hole,m,h);
    cout << min_time <<endl;
    return 0;
   }



