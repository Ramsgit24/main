#include<stdio.h>
#include<string.h>

int main() {
    char s[] = "pwwkew";
    int i, j,l=0;
    for(i = 0; i < strlen(s); i++) 
	{
        for(j = 0; j < i; j++)
		{
            if(s[i] == s[j]) 
			{
                break;
            }
        }
        if(j == i) 
		{ 
            printf("%c", s[i]);
			l++;
        }
    }
	printf("\n lenght of string without repeating characters is :%d\n",l);

    return 0;
}
