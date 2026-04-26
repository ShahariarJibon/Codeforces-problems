#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[20];
        scanf("%s",str);
        int l=strlen(str);
        int pos=-1;
        for (int i = 1; i < l; i++)
        {
            if (str[i] != str[0])
            {
                pos=i;
                break;
            }
        }
        if (pos==-1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");

            char temp = str[0];
            str[0] = str[pos];
            str[pos] = temp;

            printf("%s\n", str);
        }
    }
    return 0;
}
