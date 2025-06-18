/*这个程序演示float精度不足的情况*/
#include <stdio.h>
int main(void){
    float a,b;
    a = 2.e17+1.0;
    b = a - 2.e17;
    printf("a = %f\n", a);
    printf("b = %f\n", b);
    return 0;
}
// 运行结果：
/*这个程序显示float类型的精度不足以表示大数和小数的差异*/