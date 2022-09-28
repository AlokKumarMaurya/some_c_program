#include<stdio.h>
int fab(int number );
int main()
{
    int i,number;
    printf("Enter the number till where you want to print the fabonicci series");
    scanf("%d",&number);
    printf("%d",fab(number));
    return 0;
}

int fab(int number)
{
int i;
if(number==0)
{
    return 0;
}
else if (number==1)
{
    return 1;
}
else
{
    return fab(number-1)+fab(number-2);
}

}