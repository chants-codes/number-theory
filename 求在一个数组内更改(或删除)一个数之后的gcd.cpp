#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;
int a[100005], qian[100005], hou[100005];

int gcd(int a, int b){
    if(a<b){
        int tmp=a;
        a=b;
        b=tmp;
    }
    int tmp;
    while(b!=0){
        tmp=b;
        b=a%b;
        a=tmp;
    }
    return a;
}

int Max(int a, int b){
    return a>b?a:b;
}

int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    qian[0]=a[0];
    hou[n-1]=a[n - 1];
    for (i=1;i<n;i++) qian[i]=gcd(qian[i-1],a[i]);
    for (i=n-2;i>=0;i--) hou[i]=gcd(hou[i+1],a[i]);
    int max=qian[n-1];
    for (i=0;i<n;i++){
        if(i==0) max=Max(max,hou[1]);
        else if(i==n-1) max=Max(max,qian[n-2]);
        else max=Max(max,gcd(qian[i-1],hou[i+1]));
    }
    cout<<max<<endl;
    return 0;
}