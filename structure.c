
struct date
{
    int day,month,year;
};

main()
{
    struct date date={10,27,2021};
    printf("Date: %d-%d-%d",date.day,date.month,date.year);

    struct date today;
    printf("Enter todays date (separated by - ): ");
    scanf("%d-%d-%d",&today.day,&today.month,&today.year);
    printf("Todays Date: %d-%d-%d",today.day,today.month,today.year);
    getch();
}
