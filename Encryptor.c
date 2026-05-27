#include<stdio.h>
int main(){
  FILE *ptr;
  ptr = fopen("encrypted.txt", "a"); //File to append encrypted data into
  if (ptr == NULL) { //in case of file not opening
    printf("Error: Could not open file\n");
    return 1;
  }
  while(1){ //this will run until the user enters 000 as marks
    int marks;
    char name[20];
    scanf("%s", &name);
    scanf("%d", &marks);
    if(marks==000){ //it checks if marks are 000, if yes then it ends the program
      printf("Ended\n");
      break;
    }
    fprintf(ptr, "%s\t", name); //it writes the name into the file
    fprintf(ptr, "%d\n", (marks + 71)^9); //It encrpyts the marks using Cipher method and writes it into the file
  }
  fclose(ptr); //it closes the file
  return 0;
}
