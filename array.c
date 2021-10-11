// Array is linear collection of similar elements

// Array is also known as subscript variable

main()
{
    int a[10],sum=0;
    float avg;
    printf("Enter any ten (10) numbers : \n");
    for (int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<=10;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/10.0;
    printf("Average : %f",avg);
    getch();
}
