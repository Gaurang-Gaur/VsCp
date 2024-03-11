#include<bits/stdc++.h>
using namespace std;
// for seeing problem space we use ctrl+shift+m;
// for running ctrl+shift+b;


// int main(){

//   double m1,m2,m3,m4,m5;
//   cin>>m1>>m2>>m3>>m4>>m5;

//   double _av,sum;
//   sum=(m1+m2+m3+m4+m5);

//   _av=sum/5;
//   cout<<_av<<" 5 division \n";

//   double sum4,av4;

//   sum4=m1+m2+m3+m4;
//   av4=sum4/4;

//   av4=(av4+m5)/2;
//   cout<<"av4  second method"<<" :" <<av4<<" ";


//     return 0 ;
// }


// #include <iostream>


int sumation(vector<int> &array) {
    
    
int best = 0, sum = 0;
for (int k = 0; k < array.size(); k++) {
  
sum = max(sum,sum+array[k]);

}
    return sum;
}

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    int n;
    cin>>n;
    vector<int> array(n,0);
    for(int i=0;i<array.size();i++){
      cin>>array[i];
    }
    
int best = 0, sum = 0;
for (int k = 0; k < array.size(); k++) {
  
sum = max(array[k],sum+array[k]);
best = max(best,sum);
}
cout <<" using best method:"<< best << "\n";
cout<<"using sum: method: "<<sumation(array);
    return 0;
}
