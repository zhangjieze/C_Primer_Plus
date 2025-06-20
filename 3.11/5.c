/*“一年大约有3.156×107
 秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数”*/

#include <stdio.h>
int main(void){
    double seconds_per_year = 3.156e7; // 一年大约有3.156×10^7秒
    int age;
    printf("请输入您的年龄: ");
    scanf("%d", &age); // 提示用户输入年龄
    printf("您的年龄对应的秒数是: %.5e秒\n", age * seconds_per_year); // 计算并显示对应的秒数以指数显示，可以调整有效位数
    printf("您的年龄对应的秒数是: %.0f秒(整数)\n", age * seconds_per_year); // 计算并显示对应的秒数以整数形式显示
    return 0;
}