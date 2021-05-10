#include<iostream>
int main(void){
    std::cout << "This is a loop corner"<<std::endl;

    // WHILE LOOP 
    int a = 5;
    while (a--){
        std::cout<< "a = " << a << std::endl;
    }
    // End...

    // FOR LOOP
    for (int i = 1; i <= 10; i++){
        std::cout << "2 X "<< i << " = " << 2*i << std::endl; 
    }
    // END...

    // DO - WHILE LOOP
    
    int bhardwaj = 8717;
    do{
        std::cout << "#8717 is great." << std::endl;

    } while (bhardwaj-- > 8710);
    //END...
    
    return 0;
    
}