
char* reversee(char*);
int length(char*);

main()
{
   char s[10]={'C','o','m','p','u','t','e','r','s','\0'};

   printf("%d \n",length("Computer"));
   printf("%s ",reversee(s));

    getch();
}


int length(char *p)
{
    int l;
    for (l=0; *(p+l)!='\0'; l++);
    return l;
}

char* reversee(char *p)
{
    int l,i;
    char k;
    for (l=0;*(p+l)!='\0';l++);
    for (i=0;i<l/2;i++)
    {
        k=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=k;
    }

    return(p);

}
