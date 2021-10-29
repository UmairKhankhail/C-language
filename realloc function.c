main()
{
    int *ptr;
    ptr=(int*)malloc(4);
    *ptr=5;
    char *ch;
    *ch=(char*)realloc(ptr,1);
    *ch='a';
    printf("%c",*ch);
}
