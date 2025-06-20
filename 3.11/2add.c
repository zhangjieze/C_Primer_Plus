//这里我将使用类型转化编写2.c的内容
#include <stdio.h>
int main(void)
{
    int ascii_value;

    printf("请输入一个ASCII码值: ");
    scanf("%d", &ascii_value);

    // 使用类型转化打印对应的字符
    printf("对应的字符是: %c\n", (char)ascii_value);

    return 0;
}
// 这个程序将提示用户输入一个ASCII码值，然后打印对应的字符。使用类型转化可以避免编译器的警告，并确保正确地将整数转换为字符
