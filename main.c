#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("Enter the value of A");
    scanf("%d",&a);
    printf("Enter the value of B");
    scanf("%d",&b);
    additionprogram(a,b);
    subtractionprogram(a,b);
    multiplyprogram(a,b);
    Dividedprogram(a,b);
    modulus(a,b);
    increementprogram(a);
    decreementprogram(a);
    return 0;
}
int additionprogram(int a,int b)
{
  int  c=a+b;
    printf("\n Addition \n Addition prog value : %d\n",c);
}
int subtractionprogram(int a, int b)
{
    int c=a-b;
    printf("\n Subtraction \n Subtraction prog value : %d\n",c);
}
int multiplyprogram(int a, int b)
{
    int c=a*b;
    printf("\n Multiply \n Multiply prog value : %d\n",c);
}
int Dividedprogram(int a, int b)
{
    int c= 30/10;
    printf("\n Divided \n Divided prog value : %d\n",c);
}
int modulus (int a, int b)
{
    int c=a%b;
    printf ("\n modulus \n modulus prog value : %d\n ",c);
}
int increementprogram (int a)
{
    a++;
    printf ("\n icreementprogram \n increementprogram prog value : %d\n ",a);
}
int decreementprogram(int a)
{
    a--;
    printf ("\n decreementprogram \n decreementprogramvalue : %d\n ",a);

}



