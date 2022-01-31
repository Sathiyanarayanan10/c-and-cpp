#include<stdio.h>
#include<conio.h>
void main() {
    char ch;
    int count=0;
    FILE *fptr;
    
    fptr=fopen("text.txt","w");
    if(fptr==NULL) {
    	printf("File can't be created\a");
    	getch();
    	exit(0);
    }
    printf("Enter some text and press enter key:\n");
    while((ch=getche())!='\r') {
    	fputc(ch,fptr);
    }
    fclose(fptr);
    fptr=fopen("text.txt","r");
    printf("\nContents of the File is:");
    while((ch=fgetc(fptr))!=EOF) {
    	count++;
    	printf("%c",ch);
    }
    fclose(fptr);
    printf("\nThe number of characters present in file is: %d",count);
    getch();
}