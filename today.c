#include<stdio.h>
int main()
{
int A;
int B;
char ch;
printf("Enter a number A & B");
scanf("%d"&A);
scanf("%d"&B);
scanf("%c"&ch):
switch (ch)
{
    case '+':
    printf("%d",(A+B));
    break;

    case '*':
    printf("%d",(A*B));
    break;

    case '-':
    if(A>B)
      printf("sub=%d",(A-B));
    else
    printf("sub=%d",(B-A));
break;
default:
printf("Input Invalid");
}
return 0;
}