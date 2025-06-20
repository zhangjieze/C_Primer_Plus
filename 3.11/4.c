/*“编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形式。然后，如果系统支持，再打印成p
 记数法（即十六进制记数法）。按以下格式输出（实际显示的指数位数因系统而异）”*/
#include <stdio.h>
int main(void){
    float num;
    printf("Enter a floating-point value:");
    scanf("%f", &num);//到这里我突然忘记了scanf的输入必须对应
    // 打印小数点形式
    printf("num = %f\n", num);
    // 打印指数形式
    printf("num = %e\n", num);
    // 打印十六进制记数法（如果系统支持）
    printf("num = %a\n", num);
    return 0;
}