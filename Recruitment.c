#include <stdio.h>  
int main()  
{  
    int i, len = 0;  
    char str[20]; 
    gets(str);
    printf("%s", str);
    len = sizeof(str)/sizeof(str[0]);  

    for(i = 0; i < len; i++){  
          

        if(isupper(str[i])){  
           
            str[i] = tolower(str[i]);  
        }  
        else if(islower(str[i])){  
         
            str[i] = toupper(str[i]);  
        }  
    }  
    printf("String after case conversion : \n %s", str);  
    return 0;  
}