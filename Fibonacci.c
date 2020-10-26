#include <stdio.h>

int fibonacci(int z)
{
    int f;
    if(z>2)
    {
        f= fibonacci(z-1)+ fibonacci(z-2);
    }
    else
    {
        f=1;
    }
    return f;
}

int main()
{
    int f1 = 1, f2 = 1, f, value, i,Total;
    printf("nth Fibonacci number will be printed. value of n : ");
    scanf("%d", &value);
    for (i = 1; i <= value; i++) {
        if (i <= 2) {
            f = 1;
        }
        else {
            f = f1 + f2;
        }
        f1 = f2;
        f2 = f;
    }
    printf("using non_recursive, The %dth Fibonacci number is %d\n", value, f);

   Total=fibonacci(value);
   printf("using recursive,The %dth Fibonacci number is %d\n",value,Total);

   return 0;
}
