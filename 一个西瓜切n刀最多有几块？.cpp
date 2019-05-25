//最多块数=刀数*刀数-刀数+2
#include<iostream>
#define mod 1000000007//这个是求余数时候用的
using namespace std;

int main(){
    int t;
    cin>>t;//样例个数
    while(t--){
        long long n;
        cin>>n;
        cout<<(n*n-n+2)%mod<<endl;
    }//注意这个求余数的方式，注意求余要放在最后
    return 0;
}
