#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {

    char str[100] = "Hello World!.";
    char mystring[100];

    //creating a temporary file
    FILE* tFile = tmpfile();

    //display message if file is not created
    if (tFile == NULL) {
        puts("Unable to create temporary file.");
        return 0;
    }

    //display message when the file is created
    puts("Temporary file is created.");

    //write str in the file
    fputs(str, tFile);

    //sets the file pointer at the 
    //beginning of the stream
    rewind(tFile);

    //display the content of the file
    fgets(mystring, 100, tFile);
    printf("It contains: %s\n", mystring);

    //close the file
    fclose(tFile);

    _getch();
    return 0;
}

