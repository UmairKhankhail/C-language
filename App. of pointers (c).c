
void input(int *p)
{
    printf("Enter integer values for array one by one : \n");
    for (int i=0;i<=4;i++)
       {
            scanf("%d",p+i);
       }
}

void display(int *p)
{
    printf("The values of your array are : \n");
    for (int i=0;i<=4;i++)
    {
        printf("%d \n",*(p+i));
    }
}

void sorting(int *p)
{

        printf("Sorted array : \n");

        for (int i=1;i<=4;i++)
        {
            for (int j=0,k;j<=4-1;j++)
            {
                if ((*(p+j))>(*(p+j+1)))
                {
                    k=*(p+j+1);
                    *(p+j+1)=*(p+j);
                    *(p+j)=k;
                }

            }
        }



         for (int i=0;i<=4;i++)
         {
          printf("%d \n",*(p+i));
         }

}

main()
{
    int  arra[5];
    input(&arra);
    display(&arra);
    sorting(&arra);
    getch();
}
