#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int h_to_b(int);
int b_to_h(int);
int o_to_b(int);
int b_to_o(int);
int main()
{
    int num,choice,a,b,c,d;
    while(1)
    {
        printf("\n1.for hexdecimal to binary\n2.for binary to hexadecimal\n3.octal to binary\n4.binary to octal\n5.for exit\n");
        printf("Enter choice\t");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter a number ");
            scanf("%x",&num);
            a=h_to_b(num);
            printf("\nHexadecimal to binary conversion of %x is %x",num,a);
            break;
        case 2:
            printf("\nEnter a number ");
            scanf("%x",&num);
            b=b_to_h(num);
            printf("\nBinary to hexadecimal conversion of %x is %x",num,b);
            break;
        case 3:
            printf("\nEnter a number ");
            scanf("%o",&num);
            c=o_to_b(num);
            printf("\nOctal to binary conversion of %o is %o",num,c);
            break;
        case 4:
            printf("\nEnter a number ");
            scanf("%o",&num);
            d=b_to_o(num);
            printf("\nBinary to octal conversion of %o is %o",num,d);
            break;
        case 5:
            exit (1);
        }
    }
    return 0;
}

int h_to_b(int num)
{
 int rem,s=0x0,c=0x0,j=0x0;

    do
    {
        rem=num%0x2;
        c++;
        s=s*0x10+rem;
        num=num/0x2;
    } while(num!=0x0);


    num=s;
    s=0x0;
    while(j!=c)
    {
        rem=num%0x10;
        j++;
        s=s*0x10+rem;
        num=num/0x10;
    }
    return s;
}

int b_to_h(int num)
{
   int r=0x0,s=0x0,n;
    while(num>0x0)
    {
        n=num%0x10;
        s=s+(n*pow(0x2,r));
        r++;
        num=num/0x10;
    }
    return s;
}

int o_to_b(int num)
{
    int rem,s=00,c=00,j=00;

    do
    {
        rem=num%02;
        c++;
        s=s*010+rem;
        num=num/02;
    } while(num!=00);


    num=s;
    s=00;
    while(j!=c)
    {
        rem=num%010;
        j++;
        s=s*010+rem;
        num=num/010;
    }
    return s;
}

int b_to_o(int num)
{
     int r=00,s=00,n;
    while(num>00)
    {
        n=num%010;
        s=s+(n*pow(02,r));
        r++;
        num=num/010;
    }
    return s;
}
