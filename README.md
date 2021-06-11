# memory-address-example-Cpp

--- Pointers ---
Pointers are symbolic representation of addresses. They enable programs to simulate call-by-reference
as well as to create and manipulate dynamic data structures. It’s general declaration in C/C++ has the format:

Syntax:

datatype *var_name; 
int *ptr;   //ptr can point to an address which holds int data

ref : https://www.geeksforgeeks.org/pointers-c-examples/

--- Memory Address ---
& operator was used to create a reference variable. But it can also be used to get the memory address of 
a variable; which is the location of where the variable is stored on the computer.

When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value 
to the variable, it is stored in this memory address.

To access it, use the & operator, and the result will represent where the variable is stored.

ref : https://www.w3schools.com/cpp/cpp_references_memory.asp

--- Example ---

01) Write a program that declares three one-dimensional arrays named miles, gallons, and mpg. Each 
    array should be capable of holding 10 elements. In the miles array, store the numbers 240.5, 
    300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, and 192.3. In the gallons array, store the 
    numbers 10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, and 8.4. Each element of the mpg array 
    should be calculated as the corresponding element of the miles array divided by the equivalent 
    element of the gallons array: for example, mpg[0] =miles[0] / gallons[0]. Use pointers when 
    calculating and displaying the elements of the mpg array.


02) Write a function named findMax() to find the maximum number between two numbers. You may 
    use a variable called ‘maxi’ which could be used to store the maximum value of the two passed 
    numbers and the value of ‘maxi’ should be set from within findMax().
    Hint: A reference to maxi has to be accepted by findMax()
