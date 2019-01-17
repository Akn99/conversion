#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float d_to_b(float);
float b_to_d(float);
int main()
{
    float num,a,b;
    int choice;
    while(1)
    {
        printf("\n1.for decimal to binary\n2.for binary to decimal\n3.for exit\n");
        printf("Enter choice\t");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter a number ");
            scanf("%f",&num);
            a=d_to_b(num);
            printf("\ndecimal to binary conversion of %f is %f",num,a);
            break;
        case 2:
            printf("\nEnter a number ");
            scanf("%f",&num);
            b=b_to_d(num);
            printf("\nbinary to decimal conversion of %f is %f",num,b);
            break;
        case 3:
            exit (1);
        }
    }
    return 0;
}

float d_to_b(float num)
{
    float s=0,fl;
    int rem,c=0,fpnum=0,j=0,x,k,p,i=0;
    k=num;
    fl=num-k;
    x=sqrt(k*k);
    do
    {
        rem=x%2;
        c++;
        s=s*10+rem;
        x=x/2;
    }
    while(x!=0);
    if(k+sqrt(k*k)==0)
    {
        s=s*10+1;
        c++;
    }

    k=s;
    s=0;
    while(j!=c)
    {
        rem=k%10;
        j++;
        s=s*10+rem;
        k=k/10;
    }
    if(fl!=0)
        while(fl>0)
        {
            {
                fl=fl*2;
                p=fl;
                fl=fl-p;
                if(p=0)
                    i++;
                else
                {
                    fpnum=fpnum+pow(10,-i);
                }


            }
        }

    printf("value %f",fpnum);

    return s;
}

float b_to_d(float num)
{
    int r=0,rem,k;
    float s=0;
    k=num;
    while(k>0)
    {
        rem=k%10;
        s=s+(rem*pow(2,r));
        r++;
        k=k/10;
    }
    return s;
}
