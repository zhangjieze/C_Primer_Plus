//定义jolly（）函数和deny（）函数，使用函数原型
#include <stdio.h>
void jolly(void); // 函数原型声明
void deny(void);  // 函数原型声明
int main(void) {
    jolly(); // 调用jolly函数
    jolly(); // 再次调用jolly函数
    jolly(); // 第三次调用jolly函数
    deny();  // 调用deny函数
    return 0; // 返回0表示程序正常结束
}

void jolly(void){
    printf("For he's a jolly good fellow!\n");
}

void deny(void){
    printf("Which nobody can deny!\n");
}
