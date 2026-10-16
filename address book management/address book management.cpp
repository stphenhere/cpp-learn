#include<iostream>
using namespace std;
#define MAX 1000

//设计联系人结构体
struct person
{
    //姓名
    string m_name;
    //性别 1男 2女
    int m_sex;
    //年龄
    int m_age;
    //电话
    string m_phone;
    //住址
    string m_Addr;
};

//设计通讯录结构体
struct addressbooks
{
    //通讯录中保存的联系人数组
    struct person personarray[MAX];
    //通讯里中当前记录联系人个数
    int m_size;
};

//菜单界面
void showmenu()
{
    cout<<"*********************"<<endl;
    cout<<"*****1.添加联系人*****"<<endl;
    cout<<"*****2.显示联系人*****"<<endl;
    cout<<"*****3.删除联系人*****"<<endl;
    cout<<"*****4.查找联系人*****"<<endl;
    cout<<"*****5.修改联系人*****"<<endl;
    cout<<"*****6.清空联系人*****"<<endl;
    cout<<"*****0.退出通讯录*****"<<endl;
    cout<<"*********************"<<endl;
}

void addperson()
{

}

int main()
{
    //创建通讯录结构体变量
    addressbooks abs;
    //初始化通讯录中当前人员个数
    abs.m_size=0;

    int select=0;//创建用户选择输入的变量

    while(true){
    //菜单调用
    showmenu();
    cin>>select;
    switch(select)
    {
        case 1://添加
        addperson(&abs);//利用地址传递修改实参
            break;
        case 2://显示
            break;   
        case 3://删除
            break; 
        case 4://查找
            break;
        case 5://修改
            break;
        case 6://清空
            break;
        case 0://退出
            cout<<"欢迎下次使用"<<endl;
            system("pause");
            return 0;
            break;
    }
}
}