#include<stdio.h>
main(){

   int count=0,i=0,lean=0;

    FILE *fp;

    if((fp=fopen("/Users/ace-huang/temp/word.text","r"))==NULL){

        printf("error!");

        exit(0);

    }

    char ch;

    while(1){

        if((ch=fgetc(fp))==EOF){

            break;

        }

        if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'||ch=='%'){

                if(lean==0){

                    count++;

                }

                lean=1;

        }else{

            lean=0;

        }

    }

    printf("\n%d\n",count);

    fclose(fp);

}
