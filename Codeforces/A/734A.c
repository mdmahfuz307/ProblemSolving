// Anton and Danik
#include<stdio.h>
int main()
{
    int i,d = 0, a = 0, n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    for (i = 0;s[i]!='\0';i++)
    {
        if(s[i]=='A')
            a++;
            else
            d++;
    }
    if(a>d)
        printf("Anton");
        else if(d>a)
        printf("Danik");
        else
        printf("Friendship");
        return 0;
}