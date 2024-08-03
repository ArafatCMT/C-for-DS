#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool my_Anagram(char *s1,char *s2)
{
    bool found = true;
    int cnt_wd1 [26] = {0}, cnt_wd2 [26] = {0};

    for(int i=0; i<strlen(s1); i++)
    {
        cnt_wd1[s1[i] - 'a']++;
    }

    for(int i=0; i<strlen(s2); i++)
    {
        cnt_wd2[s2[i] - 'a']++;
    }

    for(int i = 0; i<26; i++)
    {
        if(cnt_wd1[i] != cnt_wd2[i])
        {
            found =  false;
            break;
        }
    }
    return found;
}
int main()
{
    char s1[100],s2[100];
    scanf("%s %s",&s1,&s2);
    bool flag = my_Anagram(s1,s2);
    (flag==true)?printf("Anagram\n"):printf("Not Anagram\n");
    return 0;
}