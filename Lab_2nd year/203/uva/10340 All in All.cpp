#include <stdio.h>
#include <string.h>
int main()
    {
    char s1[1000000], s2[1000000];
    int len1, len2, count, i;
    while(scanf("%s %s", s1, s2) != EOF)
 	    {
            len1 = strlen(s1);
            len2 = strlen(s2);
            count=0;
            for(i=0; i < len2; ++i)
                {
                if(count < len1)
                if(s2[i] == s1[count])
                    {
                        count++;
                    }
                }

            if(count == len1)
            printf("Yes\n");
            else
            printf("No\n");
        }
    return 0;
    }


