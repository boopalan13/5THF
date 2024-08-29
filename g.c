#include <stdio.h>
#include <string.h>
#include "mylib.c"

int main(int argc, char const *argv[])
{
    char s[] = "boopalanz";
    int len = strlen(s);
    int hash[26] = {0};
    int arr[] = {1,3,6,11,63,978,12,0};
    
    for (int i = 0; i < len; i++)
    {
        hash[s[i] - 'a']++;
    }
    
    // for (int i = 0; i < 26; i++)
    // {
    //     if(hash[i] != 0)
    //     {
    //         printf("%c %d times\n",i + 'a',hash[i]);
    //     }
    // }
    
    if(hash['g' - 'a'] == 0) printf("not found\n");
    else printf("Found\n");
    printArray(hash,0,26);
    toSee(hash,0,26,10);

    return 0;
}
