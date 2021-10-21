main()
{
    char a[3][10]={};
    int i;
    for (i=0;i<=2;i++)
       {
         gets(&a[i][0]);

       }
    for (i=0;i<=2;i++)
        {
        printf("%s \n" ,a[i]);

        }

        getch();
}
