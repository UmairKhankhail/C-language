
main()

{

 while(1)
 {

    int option;
    printf(" 1.Add\n 2.Subtract\n 3.Multiply\n 4.Divide\n 5.Nature\n 6.Exit\n");
    printf("Enter your Choice: ");

    scanf("%d",&option);
    switch(option)
    {


    case 1:
    {
        int a,b;
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("The sum of %d and %d is %d",a,b,a+b);
    } break;
    case 2:
        {
        int a,b;
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("The difference between %d and %d is %d",a,b,a-b);
        }break;
    case 3:
        {
        int a,b;
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("The product of %d and %d is %d",a,b,a*b);
        }break;
    case 4:
        {
        int a,b;
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("The division of %d and %d is %d",a,b,a/b);
        }break;
    case 5:
        {
        int a,b;
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        a>0?printf("%d is positive.",a):printf("%d is negative integer.",a);
        b>0?printf("\nWhile%d is positive.",b):printf("While \n%d is negative integer.",b);
        }break;

    case 6:
        exit(0);

        }


 }
   getch();

}
