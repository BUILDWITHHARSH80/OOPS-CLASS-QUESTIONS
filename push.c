/* #include<stdio.h>
#define N 5;
int stack[5];
int top=-1;
void Push()
{
  int x;
  printf("Enter data:");
  scanf("%d",&x);
  if (top==(N-1))
  {
    printf("Overflow");
  }
  else
  {
    top++;
    stack[top]=x;
  }
  return 0;
} */
#include <stdio.h>

// Using #define without a semicolon is a common C practice.
// It prevents syntax errors when the preprocessor substitutes N.
#define N 5

// Global stack array and top pointer.
int stack[N];
int top = -1;

// Function to push an element onto the stack.
// It is a void function, so it doesn't return any value.
void Push() {
    int x;
    printf("Enter data: ");
    scanf("%d", &x);

    // Check for stack overflow before pushing.
    if (top == (N - 1)) {
        printf("Overflow\n");
    } else {
        top++;
        stack[top] = x;
        printf("Pushed %d onto the stack.\n", x);
    }
}