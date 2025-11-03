// Complete Guide to C++ Programming Foundations
// Exercise 04_03
// How Arrays and Pointers are Related, by Eduardo Corpeño 

#include <iostream>

int main(){
    int highScores[] = {850, 745, 1220, 990};  // High scores in various game stages
    int* scorePtr = highScores;   // Pointer initialized to the address of the array // The array variable is a memory address, so it was not necessary to use '&'
    //int* scorePtr = &highScores[0] //another way to declare
    std::cout << "Initial high score: " << *scorePtr << std::endl;  // Display the first high score using pointer

    std::cout << "Scond high score using pointer: " << *(scorePtr + 1) << std::endl; //in this way we access the next integer in memory

    std::cout << "Third high score using array notation: " << scorePtr[2] << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
