#include <stdio.h>
#include <string.h>
#include <assert.h>
int test_switch_case() {
    int num = 2;
    char *result;
    switch (num) {
        case 1:
            result = "One";
            break;
        case 2:
            result = "Two";
            break;
        default:
            result = "Other";
    }
    assert(strcmp(result, "Two") == 0); // Switch works with integers only
    printf("Successfully Verified");
    return 0;
}
int main(){
    test_switch_case();
    return 0;
}