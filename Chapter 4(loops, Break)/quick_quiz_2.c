#include<stdio.h>

int main()
{
    int i = 0;
    int n;
    printf("Enter the value\n");
    scanf("%d", &n);
    do
    {
        printf("The value is %d\n", i+1);
        i++;
    }
    while(i<n);

    return 0;
}