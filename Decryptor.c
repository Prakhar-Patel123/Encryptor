#include <stdio.h>

int main(){
  FILE *ptr;
  ptr = fopen("encrypted.txt", "r"); //It opens the file in read mode to read the encrypted data
  if (ptr == NULL) { //In case of file not opening
    printf("Error: Could not open file\n");
    return 1;
  }
  while(1){
    char name[20];
    int num;
    if (fscanf(ptr, "%s", &name) != 1) { //It detect if it could not read a string from the file, if yes then it ends the program
      printf("Error: Could not read name from the file\n");
      fclose(ptr);
      return 1;
    }
    if(fscanf(ptr, "%d\n", &num)!=1){ //It detect if it could not read an integer from the file, if yes then it ends the program
      printf("Error: Could not read an integer from the file\n");
      fclose(ptr);
      return 1;
    }
    printf("The value of name is: %s\n", name); //It reads the name from the file and prints it
    printf("Marks are: %d\n", (num^9)-71); //It reads the encrypted marks from the file, decrypts it using the same cipher method and prints it

  }
  fclose(ptr); //It closes the file
  return 0;
}
