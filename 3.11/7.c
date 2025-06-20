/*“1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高”*/
#include <stdio.h>
int main(void){
    float inches_to_cm = 2.54; // 1inches = 2.54 centimeters
    float height_inches;
    printf("请输入您的身高（英寸）: ");
    scanf("%f", &height_inches); // 提示用户输入身高
    printf("您的身高对应的厘米数是: %.2f厘米\n", height_inches * inches_to_cm); // 计算并显示对应的厘米数,这里其实可以将身高单独作为一个float变量，不过为了简化代码，我直接在printf中计算了
    return 0;
}