//C Program to read a file
// C program for reading the students marks data from file
#include <stdio.h>
int main()
{
     //Pointer to the file
     FILE *fp1;
     //Character variable to read the content of file
     char c;
     //Opening a file in r mode
     /*Mode “r”: It is a read only mode, which means if the file is opened in r mode,
     it won’t allow you to write and modify content of it.
     When fopen() opens a file successfully then it returns the address of first character
      of the file, otherwise it returns NULL*/
     fp1= fopen ("C:\\student.txt", "r");
     while(c != EOF)
     {
        /*fgetc( ): This function reads the character from current pointer’s position
        and upon successful read moves the pointer to next character in the file.
        Once the pointers reaches to the end of the file, this function returns EOF (End of File).
        We have used EOF in our program to determine the end of the file*/
        c = fgetc(fp1);
        if(c==EOF)
            break;
        else
            printf("%c", c);
     }
     fclose(fp1);
     return 0;
}
