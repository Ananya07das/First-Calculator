#include <stdio.h>
int main()
{
  int num1 , num2 , choice;

  printf("Enter 1st number:");
  scanf("%d" , &num1);

  printf("1. ADDITION\n");
  printf("2. SUBTRACTION\n");
  printf("3. MULTIPLICATION\n");
  printf("4. DIVISION\n");
  printf("5. REMAINDER\n");

  printf("\nEnter your choice:");
  scanf("%d" , &choice);

  switch(choice)
  {
    case 1:
    printf("+");
    break;

    case 2:
    printf("-");
    break;

    case 3:
    printf("*");
    break;

    case 4:
    printf("/");
    break;

    case 5:
    printf("%%");
    break;

  }

   printf("\nEnter 2nd number:");
  scanf("%d" , &num2);

  int sum= num1+num2;
  int sub= num1-num2;
  int multiply = num1*num2;
  float divide = (float)num1/num2;
  int remainder = num1%num2;

  if(choice==1)
  {
  printf("RESULT:%d\n" , sum);
  }

  if(choice==2)
  {
    printf("RESULT:%d\n" , sub);
  }

  if(choice==3)
  {
    printf("RESULT:%d\n" , multiply);
  }

  if(choice==4)
  {
    printf("RESULT:%.2f\n" , divide);
  }

  if(choice== 5)
  {
    printf("RESULT:%d\n" , remainder);
  }

return 0; 
}