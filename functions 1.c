main()
{
// function decleration

void add(void);
add();
}

void add()
{
    int a,b,c;
    printf("Enter any two numbers : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("The sum of a and b : %d",c);
    getch();
}
