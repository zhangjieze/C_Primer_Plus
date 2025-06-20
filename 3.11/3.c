//“发出一声警报，然后打印下面的文本"
/*“Startled by the sudden sound, Sally shouted,
"By the Great Pumpkin, what was that!”*/

#include <stdio.h>
int main(void) {
    // 发出警报
    printf("\a");

    // 打印文本
    printf("Startled by the sudden sound, Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was that!\"\n");

    return 0;
}