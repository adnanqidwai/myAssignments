int strinput(char str[])
{
    int ch, i=0;
    while((ch=getchar())!='\n')
        str[i++]=ch;
    str[i]='\0';
    return i;    
}