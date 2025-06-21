/*这个程序只是验证一下如果没有指定位数float会输出多少位小数点后的数字🔢*/

#include <stdio.h>

int main(void)
{
    float num = 2.71282;
    printf("num = %f\n", num); //如果没有指定位数，默认输出6位小数点后的数字
    printf("num = %.2f\n", num);
    printf("num = %.3f\n", num); //遵循四舍五入原则
    printf("num = %.4f\n", num);
    return 0;
}