#include<iostream>
#include "swap.h"
using namespace std;

// 主函数：多文件编译演示
// swap 的声明来自 swap.h，定义在 swap.cpp
int main(){
    int a=10, b=20;
    cout<<"调用前: a="<<a<<"  b="<<b<<endl;

    swap(a,b);

    cout<<"调用后: a="<<a<<"  b="<<b<<endl;
    return 0;
}
