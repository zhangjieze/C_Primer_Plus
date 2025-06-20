/*“1个水分子的质量约为3.0×10−23
 克。1夸脱水大约是950克。编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。*/

#include <stdio.h>
int main(void){
    double m_per_molecular = 3.0e-23; // 每个水分子的质量（克）
    float m_per_quart = 950.0; // 每夸脱水的质量（克）
    int quart;
    printf("请输入水的夸脱数: ");
    scanf("%d", &quart);
    double num_molecules = (quart * m_per_quart) / m_per_molecular;
    printf("水分子的数量(取整)大约是: %.0e\n", num_molecules);
    return 0;
}