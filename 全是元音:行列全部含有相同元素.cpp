//关键代码是main函数里面的双for
//原来的母串是一个不变的数组，
//仅可以让每行存在一个aeiou
//但是因为双for循环行数和列数，
//使得每行的字符起点都不一样
//也就变相的让每列都有不一样的元音
//最终使得所有行列都至少有一个aeiou

#include<iostream>
#include<string>
using namespace std;

int check(int n){
    for(int i=5;i<=n;i++){
        if(n%i==0&&n/i>=5) return i;
    }//输出的i是行数
    return 0;
}

int main(){
    int a;
    cin>>a;
    int t=check(a);//这里的t是行数
    if(t==0) cout<<-1<<endl;
    else{
        string ma="aeiou";//母串
        string ans="";
        for(int i=1;i<=a/t;i++){
            //string ans="";
            for(int j=1;j<=t;j++){
                ans=ans+ma[(i+j)%5];
            }
            //cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
