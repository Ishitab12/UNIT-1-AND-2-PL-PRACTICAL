
//UNIT 1
1. Program to Demonstrate Basic I/O Functions Using Different Data Types 
#include <stdio.h> 
int main() 
{ int age; 
 float height;
double salary; 
char grade; 
 printf("Enter age: "); 
scanf("%d", &age);
printf("Enter height: ");
scanf("%f", &height); 
printf("Enter salary: "); 
scanf("%lf", &salary); 
printf("Enter grade: "); 
scanf(" %c", &grade); 
printf("\n--- Details ---\n"); 
printf("Age = %d\n", age);
printf("Height = %.2f\n", height);
printf("Salary = %.2lf\n", salary);
printf("Grade = %c\n", grade); 
 return 0; }


2. Program to Calculate the Area of a Circle 
#include <stdio.h> 
int main()  
    { float radius, area; 
    const float PI = 3.14159; 
    printf("Enter radius of circle: "); 
    scanf("%f", &radius); 
    area = PI * radius * radius; 
    printf("Area of circle = %.2f\n", area); 
    return 0; }

    3. Program to Calculate the Average of Three Numbers 
    #include <stdio.h> 
    int main() 
    { float a, b, c, average; 
    printf("Enter three numbers: "); 
    scanf("%f %f %f", &a, &b, &c); 
    average = (a + b + c) / 3; 
    printf("Average = %.2f\n", average); 
    return 0; } 

    UNIT 2

    1. Write a C program to demonstrate the order of execution of operators in an expression using operator precedence and associativity.
    #include <stdio.h> 
    int main() 
    { int a = 10, b = 5, c = 2; 
    int result; result = a + b * c; 
    printf("Expression: a + b * c\n"); 
    printf("a = %d, b = %d, c = %d\n", a, b, c); 
    printf("Result = %d\n", result); 
    return 0; } 

    2. Program to Check Whether a Number is Even or Odd 
    #include <stdio.h>  
    int main() 
    {int num;     
     printf("Enter a number: ");     
     scanf("%d", &num);     
      if (num % 2 == 0)     
      { printf("%d is an Even number.\n", num);     }
     else     
     { printf("%d is an Odd number.\n", num);     }   
    return 0; } 

    3. Program to Determine Whether a Number is Positive, Negative, or Zero 
    #include <stdio.h>  
    int main()
     { int num;      
        printf("Enter a number: ");     
        scanf("%d", &num);      
        if (num > 0)     
        { printf("%d is a Positive number.\n", num); }     
        else if (num < 0)    
         { printf("%d is a Negative number.\n", num);  }    
          else     
          {printf("The number is Zero.\n");  }      
          return 0; }


UNIT 3
1. Write a C program to accept elements of integer, float, and character arrays from the user and display the value and corresponding memory address of each array element. 
#include <stdio.h> 
int main()
 { int intArray[3]; 
  float floatArray[3]; 
  char charArray[3]; 
  int i; 
  printf("Enter 3 integer elements:\n"); 
  for (i = 0; i < 3; i++) 
  { scanf("%d", &intArray[i]); 
    printf("\nEnter 3 float elements:\n"); 
    for (i = 0; i < 3; i++)  
    {scanf("%f", &floatArray[i]); 
    printf("\nEnter 3 character elements:\n");} 
    for (i = 0; i < 3; i++) 
    {scanf(" %c", &charArray[i]); 
    printf("\nInteger Array:\n"); }
    for (i = 0; i < 3; i++)  
    {printf("Value = %d, Address = %p\n", intArray[i], (void *)&intArray[i])}; 
    {printf("\nFloat Array:\n"); for (i = 0; i < 3; i++) };
    {printf("Value = %.2f, Address = %p\n", floatArray[i], (void *)&floatArray[i])}; 
    {printf("\nCharacter Array:\n") };
    for (i = 0; i < 3; i++) 
    { printf("Value = %c, Address = %p\n", charArray[i], (void *)&charArray[i]); } 
    return 0; } 

    2. Write a C program to accept the elements of a one-dimensional array and calculate the sum of all its elements.
    #include <stdio.h> 
    int main() 
    { int arr[100]; 
        int n; 
        int i; 
        int sum = 0; 
        printf("Enter the number of elements: "); 
        scanf("%d", &n); printf("Enter %d elements:\n", n); 
        for (i = 0; i < n; i++) 
        { scanf("%d", &arr[i]);
        sum = sum + arr[i]; 
        printf("Sum of array elements = %d\n", sum); 
        return 0; } 

3. Write a C program to read two matrices of the same order, perform matrix addition, and display the resultant matrix using a two-dimensional array.
 #include <stdio.h> 
 int main() 
 { int a[10][10]; 
    int b[10][10]; 
    int sum[10][10]; 
    int rows, columns; 
    int i, j; 
    printf("Enter number of rows: "); 
    scanf("%d", &rows); 
    printf("Enter number of columns: "); 
    scanf("%d", &columns); 
    printf("\nEnter elements of first matrix:\n"); 
    for (i = 0; i < rows; i++) 
        {
        for (j = 0; j < columns; j++) 
        {
    
    scanf("%d", &a[i][j]); } } 
    printf("\nEnter elements of second matrix:\n"); 
    for (i = 0; i < rows; i++) 
    {
    for (j = 0; j < columns; j++) 
    {
   scanf("%d", &b[i][j]);}}
   for (i = 0; i < rows; i++) 
   {
    for (j = 0; j < columns; j++) 
    {
 sum[i][j] = a[i][j] + b[i][j]; }}
  printf("\nResultant Matrix after Addition:\n"); 
  for (i = 0; i < rows; i++) 
  { 
    for (j = 0; j < columns; j++) 
    {
    printf("%d\t", sum[i][j]); }
    
     printf("\n"); } 
     return 0; } 