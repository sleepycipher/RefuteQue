#include <stdio.h>
#include <assert.h>
int global_var; // Global variable
int test_global_variable_initialization() {
    assert(global_var == 0); // Should initialize to zero
    printf("Successfully Verified");
}
int main(){
    test_global_variable_initialization();
    return 0;
}