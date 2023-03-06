#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    FILE *fp;
    char in, file_name[40], choice;
    
    printf("\n\tTEXT-EDITOR");
    printf("\n\n\tEnter File Name : ");
    fgets(file_name, sizeof(file_name), stdin);
    file_name[strcspn(file_name, "\n")] = '\0'; // remove the newline character
    
    printf("\n\n\tWhat can you do: \n\t For Reading, press 'r' \n\t For Writing, press 'w' \n\t For Adding, press 'a' ->  ");
    scanf("%c", &choice);
    
    if (choice == 'r' || choice == 'R') {
        fp = fopen(file_name,"r");
        
        printf("\n\n\n\tREAD MODE\n\n");
        
        while((in = getc(fp)) != EOF) {
            printf("%c",in);
        }
        
        fclose(fp);
    } else if (choice == 'w' || choice == 'W') {
        fp = fopen(file_name,"w");
        
        printf("\n\n\n\tWRITE MODE (For saving File Press Ctrl+Z)\n\n");
        
        while((in=getchar()) != EOF) {
            putc(in,fp);
        }
        
        fclose(fp);
    } else if (choice == 'a' || choice == 'R') {
        fp = fopen(file_name,"a");
        
        printf("\n\n\n\tADD MODE (For saving File Press Ctrl+Z)\n\n");
        
        while((in=getchar()) != EOF) {
            putc(in,fp);
        }
        
        fclose(fp);
    }
    
    getch();
    
    return 0;
}
