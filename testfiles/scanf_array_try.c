/*我比较好奇使用数组scanf得到的具体内容是什么，因此进行以下测试*/
#include <stdio.h>
int main(void) {
    char str[100];
    printf("请输入一个字符串: ");
    scanf("%s", str);  // 注意：scanf读取字符串时会忽略空格
    printf("你输入的字符串是: %s\n", str);
    for(int i=0; str[i] != '\0'; i++) {
        printf("str[%d] = %c\n", i, str[i]);
    }
    return 0;
}
// 运行结果：
// 请输入一个字符串: Hello World
// 你输入的字符串是: Hello
// 说明：scanf读取字符串时会忽略空格，只读取第一个单词。
// 如果需要读取包含空格的字符串，可以使用fgets函数替代scanf，如下所示：
/*
#include <stdio.h>
int main() {
    char str[100];
    printf("请输入一个字符串: ");
    fgets(str, sizeof(str), stdin);  // 使用fgets读取包含空格的字符串
    printf("你输入的字符串是: %s\n", str);
    return 0;
}
*/
// 运行结果：
// 请输入一个字符串: Hello World
// 你输入的字符串是: Hello World
// 说明：fgets可以读取包含空格的整行输入，直到遇到换行符或达到指定长度。
// 注意：使用fgets时，字符串末尾会包含换行符，如果不需要，可以手动去除。
