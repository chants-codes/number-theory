//�ؼ�������main���������˫for
//ԭ����ĸ����һ����������飬
//��������ÿ�д���һ��aeiou
//������Ϊ˫forѭ��������������
//ʹ��ÿ�е��ַ���㶼��һ��
//Ҳ�ͱ������ÿ�ж��в�һ����Ԫ��
//����ʹ���������ж�������һ��aeiou

#include<iostream>
#include<string>
using namespace std;

int check(int n){
    for(int i=5;i<=n;i++){
        if(n%i==0&&n/i>=5) return i;
    }//�����i������
    return 0;
}

int main(){
    int a;
    cin>>a;
    int t=check(a);//�����t������
    if(t==0) cout<<-1<<endl;
    else{
        string ma="aeiou";//ĸ��
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
