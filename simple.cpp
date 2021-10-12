#include <iostream> 

int main() {
    int *p = new int[10];	//allocate a block of memory in heap for our array size 10 
    p[9] = 1; 	//assigns value at last index 

    delete[] p; 	//deallocates the memory from the new above else we will have a memory leak 
    return 0;
}

