main()
{
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    sweap(&a,&b);  //call by reference or adddress
    printf("a=%d  b=%d",a,b);
    getch();
}

void sweap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
