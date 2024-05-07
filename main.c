#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
void Increment(int *p)
{
    *p = (*p) + 1;
}
*/
/*
int SumOfElements(int A[], int size)
{
    int  i, sum = 0;
    for(i = 0; i < size; i++)
    {
        sum+= A[i];
    }
    return sum;
}
*/
/*
int Func(int A[][2][2])
{

}
*/
/*
void PrintHelloWorld()
{
    printf("Hello World\n");
}

int* Add(int* a, int* b)
{
    int* c = (int*)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
}
*/
/*
int Add(int a, int b)
{
    return a+b;
}
*/
void A()
{
    printf("Hello");
}
void B(void (*ptr)())
{
    ptr();
}
int main()
{
    B(A);
    /*
    int c;
    int (*p)(int,int);
    p = &Add;
    c = (*p)(2,3);
    printf("%d", c);
    */
    /*
    int a = 2, b = 4;
    int* ptr = Add(&a, &b);

    PrintHelloWorld();
    printf("Sum = %d\n", *ptr);

    */
    /*
    int n;
    printf("Enter size of Array\n");
    scanf("%d",&n);
    int *A = (int*)malloc(n*sizeof(int));
    for(int i = 0; i<n; i++)
    {
        A[i] = i+1;
    }
    for(int i = 0; i<n; i++)
    {
        printf("%d ", A[i]);
    }
    /*
    int C[3][2][2] = {{{2,5},{7,9}},
                      {{3,4},{6,1}},
                      {{0,8},{11,13}}}
    */
     /*
    char C[5];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0';
    printf("%s", C);
    */
    /*
    int A[] = {2,4,5,8,1};
    int size = sizeof(A)/sizeof(A[0]);
    int total = SumOfElements(A, size);
    printf("Sum of elements = %d\n", total);
    */

    /*
    printf("%d\n", A);
    printf("%d\n", &A[0]);
    printf("%d\n",A[0]);
    printf("%d\n", *A);
    */

    /*
    int a;
    a = 10;
    Increment(&a);
    printf("a = %d", a);
    */
    /*
    int x = 5;
    int* p = &x;
    *p = 6;
    int** q = &p;
    int*** r = &q;

    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *(*q));
    printf("%d\n", *(*r));
    printf("%d\n", *(*(*r)));
    ***r = 10;
    printf("x = %d\n", x);
    **q = *p + 2;
    printf("x = %d\n", x);
    */

    /*
    int a = 1025;
    int *p;
    p = &a;
    */
    /*
    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);


    void *p0;
    p0 = p;
    printf("Address = %d", p0);
    */


    /*
    char *p0;
    p0 = (char*)p;
    printf("Size of char is %d bytes\n", sizeof(char));
    printf("Address = %d, value = %d\n", p0, *p0);
    printf("Address = %d, value = %d\n", p0+1, *(p0+1));
    */

    /*
    printf("Address p is %d\n", p);
    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Address p+1 is %d\n", p+1);
    printf("Value at address p+1 is %d\n", *(p+1));
    */


    /*
    printf("Address of P is %d\n", p);
    printf("Value at is is %d\n", *p);
    int b = 20;
    *p = b;
    printf("Address of P is %d\n", p);
    printf("Value at is is %d\n", *p);
     */


    return 0;
}
