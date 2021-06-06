#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    int num[10]={0};
    for (int i = 0; i < strlen(s); ++i)
    {
        /* code */
        char ch = s[i];
        if(s[i]<='9'&& s[i]>='0');
            num[s[i]-'0']++;
    }
    for (int i = 0; i < 10; ++i)
    {
        /* code */
        printf("%d ",num[i] );
    }
    return 0;
}
