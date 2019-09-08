/*
求 a 的 b 次方对 p 取模的值。

输入格式
三个整数 a,b,p ,在同一行用空格隔开。

输出格式
输出一个整数，表示a^b mod p的值。

数据范围
0≤a,b,p≤109

输入样例：
3 2 7
输出样例：
2

解题思路：
快速幂
3^7  
7->111
3*(2^0)=3
3*(2^1)=9
3*(2^2)=81
3^7=3*9*81
*/
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a,b,p;
    cin>>a>>b>>p;
    int res=1 % p;
    while(b){
        if(b&1) //判断最低位是否为1
            res = res * 1ll * a % p ;   //边乘边模防止溢出 *1ll强制转换long long 要放在前面 不能放后面
        a = a *  1ll * a % p;   //相乘就可以得到下个位的值
        b>>=1;  //去掉最低位
    }
    cout<<res<<endl;
    
    return 0;    
}