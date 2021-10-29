main()
{

    float *p;  // static memory allocation
    p=(float*)malloc(4);  // dynamic memory allocation
    *p=3.4;
    printf("%f",*&p);
    getch();
}
