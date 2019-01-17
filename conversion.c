#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int d_to_b(int);
int b_t_d(int);
int main()
{
    int num,choice,a,b;
    while(1)
    {
        printf("\n1.for decimal to binary\n2.for binary to decimal\n3.for exit\n");
        printf("Enter choice\t");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter a number ");
            scanf("%d",&num);
            a=d_to_b(num);
            printf("\ndecimal to binary conversion of %d is %d",num,a);
            break;
        case 2:
            printf("\nEnter a number ");
            scanf("%d",&num);
            b=b_to_d(num);
            printf("\nbinary to decimal conversion of %d is %d",num,b);
            break;
        case 3:
            exit (1);
        }
    }
    return 0;
}

int d_to_b(int num)
{
    int rem,x,s=0,c=0,j=0;
    x=sqrt(num*num);
    do
    {
        rem=x%2;
        c++;
        s=s*10+rem;
        x=x/2;
    } while(x!=0);
    if(num+sqrt(num*num)==0)
    {
      s=s*10+1;
      c++;
    }

    num=s;
    s=0;
    while(j!=c)
    {
        rem=num%10;
        j++;
        s=s*10+rem;
        num=num/10;
    }
    return s;
}

int b_to_d(int num)
{
    int r=0,s=0,n;
    while(num>0)
    {
        n=num%10;
        s=s+(n*pow(2,r));
        r++;
        num=num/10;
    }
    return s;
}
