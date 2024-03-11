#include<bits/stdc++.h>
using namespace std;

string getBinary(int x){
    bitset<8> b(x);

    return b.to_string();
}

int main(){
    

    int a=6;

    int b=4;
    int c=a&b;

    cout<<c<<endl;

cout<<getBinary(343)<<"\n";
cout<<(4&1);
    

    return 0 ;
}
