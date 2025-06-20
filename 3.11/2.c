//“编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印输入的字符。这里我没有使用类型转化，所以会产生warning

#include <stdio.h>
int main(void)
{
    char ascii_value;

    printf("请输入一个ASCII码值: ");
    scanf("%d", &ascii_value);

    // 打印对应的字符
    printf("对应的字符是: %c\n", ascii_value);

    return 0;
}