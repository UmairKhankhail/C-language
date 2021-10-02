main()
{
    int i=0,x;
    while(i<=5)
    {
        printf("Enter any number: ");
        scanf("%d",&x);
        if(x>0)
        {
            break;
        }
    i++;
    }
    i==6?printf("loop ends normally"):printf("break is applied");
}
