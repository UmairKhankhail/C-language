
int add_two_numbers(int,int);

main()
{
    int a,b,c;
    printf("Enter any two numbers : ");
    scanf("%d%d",&a,&b);
    c=add_two_numbers(a,b);
    printf("%d",c);
}



int add_two_numbers(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

