#include <stdio.h>

int main()
{
    int A;
    int B;
    char ch;

    printf("Enter number A: ");
    scanf("%d", &A);

    printf("Enter number B: ");
    scanf("%d", &B);

    printf("Enter operator (+, -, *): ");
    scanf(" %c", &ch);  // Yaha space bahut jaruri hai

    switch (ch)
    {
        case '+':
            printf("%d", (A + B));
            break;

        case '*':
            printf("%d", (A * B));
            break;

        case '-':
            if (A > B)
                printf("sub=%d", (A - B));
            else
                printf("sub=%d", (B - A));
            break;

        default:
            printf("Input Invalid");
    }

    return 0;
}
