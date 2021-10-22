main()
{
    int a=5;
    int *b;
    b=&a;
    printf("%d \n",&a);
    printf("%d \n",*&a);
    printf("%d \n",&b);
    printf("%d ",*&b);
    getch();
}
