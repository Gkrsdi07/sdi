/*
#include<stdio.h>
#include<stdarg.h>

/* printf function 
static void *prout(void *str, const char *buf, size_t n)
        {       /* write to file *
        return (fwrite(buf, 1, n, (FILE *)str) == n ? str : NULL);
        }

int (display)(const char *fmt, ...)
        {       /* print formatted to stdout 
        int ans;
        va_list ap;

        va_start(ap, fmt);
        ans = _display(&prout, stdout, fmt, ap);
        va_end(ap);
        return (ans);
}             

int main(){
    display("Hari Om\n");
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for diary entries
struct DiaryEntry {
    char date[20];
    char entry[1000];
};

// Function to display the main menu
void displayMainMenu() {
    printf("\n\nWelcome to your personal diary management system!\n");
    printf("Please select an option from the menu:\n");
    printf("1. Add a new diary entry\n");
    printf("2. View all diary entries\n");
    printf("3. Search for a diary entry by date\n");
    printf("4. Exit\n\n");
}

// Function to add a new diary entry
void addNewEntry(struct DiaryEntry diary[], int *numEntries) {
    printf("\n\nAdding a new diary entry:\n");
    printf("Please enter the date (dd/mm/yyyy): ");
    scanf("%s", diary[*numEntries].date);
    printf("Please enter your entry:\n");
    getchar(); // Consume the newline character left by scanf
    fgets(diary[*numEntries].entry, sizeof(diary[*numEntries].entry), stdin);
    (*numEntries)++;
    printf("Entry added successfully!\n");
}

// Function to view all diary entries
void viewAllEntries(struct DiaryEntry diary[], int numEntries) {
    printf("\n\nDisplaying all diary entries:\n");
    for (int i = 0; i < numEntries; i++) {
        printf("%s: %s", diary[i].date, diary[i].entry);
    }
}

// Function to search for a diary entry by date
void searchEntryByDate(struct DiaryEntry diary[], int numEntries) {
    char searchDate[20];
    printf("\n\nSearching for a diary entry by date:\n");
    printf("Please enter the date to search for (dd/mm/yyyy): ");
    scanf("%s", searchDate);
    for (int i = 0; i < numEntries; i++) {
        if (strcmp(diary[i].date, searchDate) == 0) {
            printf("%s: %s", diary[i].date, diary[i].entry);
            return;
        }
    }
    printf("No diary entries found for the date %s\n", searchDate);
}

int main() {
    struct DiaryEntry diary[100];
    int numEntries = 0;
    int choice;

    while (1) {
        displayMainMenu();
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                addNewEntry(diary, &numEntries);
                break;
            case 2:
                viewAllEntries(diary, numEntries);
                break;
            case 3:
                searchEntryByDate(diary, numEntries);
                break;
            case 4:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
*/

