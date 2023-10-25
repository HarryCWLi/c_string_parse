#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "100:Hello,101:World,102:C,103:String Parse,104:Test";
    int pos = 0;
    char d1[] = ",";
    char d2[] = ":";
    char* token;
    char* token2;
    
    while(1) {
        token = strtok(s + pos, d1);
        if(token == NULL)
            break;
        pos += strlen(token)+1;
        
        printf("Main string : [%s]\n", token);
        
        printf("Sub strings : [");
        token2 = strtok(token, d2);
        if(token2) printf("%s", token2);
        while(token2) {
            token2 = strtok(NULL, d2);
            if(token2) printf(", %s", token2);
        }
        printf("]\n\n");
    }

    return 0;
}
