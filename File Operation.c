#include<stdio.h>
#include<string.h>

int main() {
    FILE *fp = NULL;
    int op, flag = 1;
    char f_name[20], f_mode[5],input [100];

    while (flag != 4) {
        printf("\nOptions\n\
            1: File open\n\
            2: File close\n\
            3: File status\n\
            4: Exit\n\
            5: Writing to opened file\n\
            6: Reading data from a file\n");

        printf("Enter your Choice: ");
        scanf("%d", &flag);

        switch (flag) {
            case 1:
                if (fp == NULL) {
                    printf("Enter the file name: ");
                    scanf("%s", f_name);
                    printf("Enter the mode: ");
                    scanf("%s", f_mode);
                    fp = fopen(f_name, f_mode);
                    if (fp == NULL) {
                        printf("Error opening the file.\n");
                    } else {
                        printf("File operation successfully opened in %s mode\n", f_mode);
                    }
                }
                else {
                    printf("File is already open. Please close it first.\n");
                }
                break;

            case 2:
                if (fp != NULL) {
                    fclose(fp);
                    fp = NULL;
                    printf("File is successfully closed.\n");
                } else {
                    printf("No file for operation.\n");
                }
                break;

            case 3:
                if (fp != NULL) {
                    printf("%s file is opened in %s mode\n", f_name, f_mode);
                } else {
                    printf("No file is currently open.\n");
                }
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            case 5:
                if (fp != NULL) {
                    printf("Enter data to write to the file: ");
                    scanf(" %[^\n]",input);
                    fprintf(fp, "%s\n",input);
                    printf("Data written to the file.\n");
                } else {
                    printf("No file is currently open.\n");
                }
                break;

            case 6:
                if (fp != NULL) {
                    fseek(fp, 0, SEEK_SET);
                    while (fgets(input, sizeof(input), fp) != NULL) {
                        printf("Data in file: %s",input);
                    }
                } else {
                    printf("No file is currently open.\n");
                }
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
                break;
        }
    }

    return 0;
}
