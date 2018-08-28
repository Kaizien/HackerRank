#include <stdio.h>
#include <iostream>

/*
    basic pointers review: 
    int *x; creates a memory pointer
    *x = &y; sets the pointer's current location to the memory location where b is stored at. also, with this address, we can now pull the value being stored at that memory location
    cout << *x; prints out the current value being stored at the pointer's location
    cout << &x; prints out the current memory location of our pointer 'x'
*/
void update(int *a, int *b)
{
    int sum = *a + *b; //create a temp variable 'sum' , so we don't overwrite the value at *a
    *b = abs(*a - *b); //set pointer b to equal the absolute value of poitner b
    *a = sum;         // set pointer a to equal the sum value we found
}

int main()
{
    int a, b;
    std::cin  >> a >> b;
    
    int *pa = &a;  //create a pointer and point it to the memory location of 'a'
    int *pb = &b;  //create a pointer and point it to the memory location of 'b'
    
    update(pa, pb);
   
    std::cout << *pa << std::endl << *pb;
    return 0;
}

