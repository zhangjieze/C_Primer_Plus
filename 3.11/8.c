/*“在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺。
编写一个程序，提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量。
思考对于该程序，为何使用浮点类型比整数类型更合适？”*/
#include <stdio.h>
int main(void){
    float cups_to_pints = 0.5; // 1杯 = 0.5品脱
    float cups_to_ounces = 8.0; // 1杯 = 8盎司
    float cups_to_tablespoons = 2*cups_to_ounces; // 1杯 = 2盎司 = 16大汤勺
    float cups_to_teaspoons = 3*cups_to_tablespoons; // 1杯 = 16大汤勺 = 48茶勺
    float cups;
    printf("请输入杯数: ");
    scanf("%f", &cups); // 提示用户输入杯数
    // 计算并显示等价容量
    printf("等价容量:\n");
    printf("品脱: %.2f\n", cups * cups_to_pints); //计算并显示品脱
    printf("盎司: %.2f\n", cups * cups_to_ounces); // 计算并显示盎司
    printf("大汤勺: %.2f\n", cups * cups_to_tablespoons); // 计算并显示大汤勺
    printf("茶勺: %.2f\n", cups * cups_to_teaspoons); // 计算并显示茶勺
    return 0;
}

/*为什么使用浮点类型比整数类型更合适？
因为在计算的过程中可能会遇到小数的情况，比如在转换单位时，可能会出现非整数的结果(3*0.5=1.5)。使用浮点类型可以更准确地表示这些值，而整数类型则会导致精度丢失。*/