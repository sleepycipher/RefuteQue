#include <stdio.h>
#include <string.h>
#include <assert.h>
int unit_conversion() {
    int choice;
    char *result;
    printf("Enter the Number 2 for Miles: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            result = "kilometers";
            printf("Kilometers");
            break;
        case 2:
            result = "Miles";
            printf("Miles");
            break;
        default:
            result = "Invalid choice";
    
    assert(strcmp(result, "Miles") == 0); // Switch works with integers only
    printf("Successfully Verified");
    return 0;
    }
}
int main(){
    unit_conversion();
    return 0;
}