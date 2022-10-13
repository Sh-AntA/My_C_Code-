
#include <stdio.h>

int main()
{
    int k=0;
    int i=0;
    int range=0;
    int z =0;
    char s[50]="  ";
    char new_s[50]=" ";
    scanf("%[^\n]%*c",s);

    for(i=(50-1);  i>=0 ;  i--){

        if(s[i] == NULL){
            continue;
        }
        while(k>=0){
            new_s[k]=s[i];
            k=k+1;
            break;
        }
    }


    for(i=0;i<50;i++){
        if(new_s[i]==' '){
            range+=1;
        }
    }

    while(range>0){
        z=0;
        for(i=0;i<50;i++){
            if(new_s[i]==' '){
                z+=1;
            }

            if(z==range){

                    if(new_s[i+1] == NULL || i+1 == 50){
                        continue;
                    }
                printf("%c",new_s[i+1]);
            }
        }
        printf(" ");
        range = range-1;
    }


    i=0;
    while(new_s[i] != ' '){
        printf("%c",new_s[i]);
        i++;
    }


    return 0;
}
