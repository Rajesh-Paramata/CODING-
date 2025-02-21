#include<stdio.h>
int primecheck(int n)
{
    int i,count=2;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count==2)
    return n;
    else
    {
        printf("Enter a prime not %d:",n);
        scanf("%d",&n);
        return primecheck(n);
    }
}
void main()
{   
    int size;
    printf("Enter total number of prime numbers: ");
    scanf("%d",&size);
    int array[size];
    int i,sum=0;
    printf("ENTER ELEMENTS:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++)
    {
        array[i]=primecheck(array[i]);
        sum=sum+array[i];
    }
    printf("Sum is : %d\n", sum);
    for(i=0;i<size;i++)
    printf("%d ",array[i]);
}