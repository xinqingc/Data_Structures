#include <stdio.h>
int divide1(int m, int n, int *r);
int divide2(int m, int n, int *q, int *r);
int main()
{
   int m, n, q, r;

   printf("Enter two numbers (m and n): \n");
   scanf("%d %d", &m, &n);
   q = divide1(m, n, &r);
   printf("divide1(): quotient %d remainder %d\n", q, r);
   divide2(m, n, &q, &r);
   printf("divide2(): quotient %d remainder %d\n", q, r);
   return 0;
}
int divide1(int m, int n, int *r)
{
    int q = 0, x = m;
    if (n>0)
    {
        while (x >= n)
        {
                x -= n;
                q++;
        }
    }
    (*r) = x;
    return q;
}
int divide2(int m, int n, int *q, int *r)
{
    int x = m;
    (*q) = 0;
    if (n>0)
    {
        while (x >= n)
        {
                x -= n;
                (*q)++;
        }
    }
    (*r) = x;
}
