//smiles!! use_function
#include <stdio.h>
void smile(void); // 函数声明
int main(void){
    smile();
    smile();
    smile(); 
    printf("\n");
    smile(); 
    smile(); 
    printf("\n");
    smile(); 
    printf("\n");
    return 0;
}

void smile(void){ // 函数定义
    printf("Smile!"); // 输出"Smile!"
}