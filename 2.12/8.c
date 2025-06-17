// one_three
/*
“在C语言中，函数可以调用另一个函数。编写一个程序，调用一个名为one_three()的函数。
该函数在一行打印单词"one",再调用第2个函数two(),然后在另一行打印单词“three
 two()函数在一行显示单词“two” 
 main()函数在调用one_three()函数要打印短语starting now:
并在调用完毕后显示短语“done! ”
*/
#include <stdio.h>
void two(void); // 函数声明
void one_three(void); // 函数声明
int main(void){
    printf("starting now:\n");
    one_three(); // 调用one_three函数
    printf("done!\n"); // 输出"done!"
    return 0;
}

void one_three(void){ // 函数定义
    printf("one\n"); // 输出"one"
    two(); // 调用two函数
    printf("three\n"); // 输出"three"
}


void two(void){ // 函数定义
    printf("two\n"); // 输出"two"
}
// 函数的调用顺序为：main() -> one_three() -> two()
// 函数的调用不需要严格遵循定义的顺序