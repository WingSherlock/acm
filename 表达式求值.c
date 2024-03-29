/*********************
今天上课，老师教了小易怎么计算加法和乘法，乘法的优先级大于加法，但是如果一个运算加了括号，那么它的优先级是最高的。例如：
1
2
3
4
1+2*3=7
1*(2+3)=5
1*2*3=6
(1+2)*3=9
现在小易希望你帮他计算给定3个数a，b，c，在它们中间添加"+"， "*"， "("， ")"符号，能够获得的最大值。

输入描述:
一行三个数a，b，c (1 <= a, b, c <= 10)

输出描述:
能够获得的最大值

输入例子1:
1 2 3

输出例子1:
9
*************************/
#include <iostream>
#include <string>
#include <map>
#include <math.h>
#include <vector>
#include<algorithm>
#include<cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    int num[3];
    for(int i=0;i<3;i++){
        cin>>num[i];
    }
    sort(num,num+3);
    int a=(num[0]+num[1])*num[2];
    int b=num[0]*num[1]*num[2];
    if(a>b)
        cout<<a;
    else
        cout<<b;
}
