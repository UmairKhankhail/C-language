main()
{
    int y,x=5;
    y=!x<10;
    printf("%d",y);
    printf("\n");
    y=x>2 && x<20;
    printf("%d",y);
    y=x<0 || x>50;
    printf("\n");
    printf("%d",y);
    getch();
}
