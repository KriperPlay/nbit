/*
╱╱╱╭╮╱╱╭╮
╱╱╱┃┃╱╭╯╰╮
╭━╮┃╰━╋╮╭╯
┃╭╮┫╭╮┣┫┃
┃┃┃┃╰╯┃┃╰╮
╰╯╰┻━━┻┻━╯
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "sym.h"

char bit[8] = {'0','0','0','0','0','0','0','0'};
char ext[4] = {'.','n','b','t'};

void all_array(){
    for(int i = 0;i<=sizeof(bit)-1;i++){
        printf("%c",bit[i]); }
    puts(""); }

int two_to_ten(){
    int sum = 0;
    short n = 8;
    for (short i=n-1;i>-1;i--)
       if (bit[i]=='1')
           sum+=pow(2,n-(i+1)) ;
    return sum;
}

int check_name(char* fname){

    short len = strlen(fname);
    short len2 = sizeof(ext);
    short count = 0;
    short i2 = 1;

    for(int i = 0; i<=4;i++){
        if(ext[len2-i2] == fname[len-i2]){
            i2+=1;
            count+=1;
            continue; }
        else
            break;
    }
    if(count == 4)
        return 1;

    return 0;
}

void nbyte(char* fname){

    char pointer = 0;

    FILE* fp = fopen(fname, "r");
    char buffer[4];

    if(fp){
        while((fgets(buffer, sizeof(buffer), fp))!=NULL){
            if(!strcmp(buffer,_mleft))
                pointer--;
            else if(!strcmp(buffer,_mright))
                pointer++;
            else if(!strcmp(buffer, _madd))
                bit[pointer] = '1';
            else if(!strcmp(buffer, _mmin))
                bit[pointer] = '0';
            else if(!strcmp(buffer,_chkbyte))
                all_array();
            else if(!strcmp(buffer,_into))
                printf("%d\n",two_to_ten());
            else if(!strcmp(buffer,_output))
                printf("%c",two_to_ten());
            else if(!strcmp(buffer, _void)){
                pointer = 0;
                for(int i = 0; i<=sizeof(bit); i++)
                    bit[i] = '0'; }
            else if(!strcmp(buffer, _newline))
                puts("");
            else
                continue;
        }

        fclose(fp);
    }
}

int main(int argc, char* argv[]){
    if(check_name(argv[1]))
        nbyte(argv[1]);
    else
        puts("Error file name!");

	return 0;
}
