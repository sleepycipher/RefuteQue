#include <stdio.h>
#include <assert.h>

int user_count; // Global variable

int test_global_variable_initialization() {
    assert(user_count == 0); // Confirm initialized to zero
    int n;
    printf("Enter the Number of Users: ");
    scanf("%d", &n);
    for(int i = 0; i <= n-1; i++){
        user_count++;
    }
    assert(user_count == n); // Incremented correctly
    return 0;
}

int main(){
    test_global_variable_initialization();
    return 0;
}