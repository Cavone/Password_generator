#include<stdio.h>
#include<stdlib.h>
#include<time.h>

const char s[85]={
                        '.','%','8','v','b','/','c','d','0','e','f','g','1','k','h','E','i','j','{','l','6','m','n','o','p','*','q','r','s',
                        't',';','u','_','w','a','R','x','3','y','!','4','z',',','B','A','#','C','2','D','"','I','F',':','G','?','}','H',
                        '&','J','K','-','L','7','N','M','@','O','P','+','9','Q','#','S','<','T','>','U','V','$','W','X','5','Y','=','Z'
                        };

int main()
{ 
        int n;    
        printf("PASSWORD GENERATOR (2020), written by @Cavone \n\n");
        printf("\nPRESS 'g' TO GENERATE A NEW PASSWORD\n");
        printf("PRESS 'q' TO QUIT\n");
        while(1){
            char answer;
            scanf("%c",&answer);
            switch(answer){

                case 'g':
                    printf("\ninsert the number of characters do you want the password to be long:\n");	
                    scanf("%i",&n);	
                    printf("\n");   
                    char * key = (char *) malloc(n * sizeof(char));
                    srand( time(NULL) ); 
                    for(int i = 0;i < n; i++){
                        key[i] = s[(rand() % 86) ];
                    }
                    printf("PASSWORD GENERATED: ");
                    for(int i = 0; i < n;i++)
                        printf("%c",key[i]);  
                    printf("\n\n");
                    break;

                case 'q':
                    return 0;
                    break;
            }
    }
}
