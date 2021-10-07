main()
{
    int a,s;
    printf("Enter any integer : ");
    scanf("%d",&a);
    s=sum(a);
    printf("The sum of first %d natural numbers is : %d",a,s);
    getch();
}

int sum(int a)
{
    int s;
    if (a==1)
        return a;
    s=a+sum(a-1);
    return s;
}
