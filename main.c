#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if (input>=0)
    {
        printf("OK");
    }
    else(input<10)
    {
        printf("NG");
    }
    return 0;
}
