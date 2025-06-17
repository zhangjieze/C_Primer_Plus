//这个程序是把我的年龄转化为天数，不考虑闰年，使用scanf函数获取用户输入的年龄，并计算出相应的天数。
#include <stdio.h>
int main(){
    int age;
    printf("请输入你的年龄：");
    scanf("%d", &age);
    printf("你的年龄是：%d岁，换算成天数就是：%d天\n", age, age*365);
    return 0;
}