#include "iostream"
#include "string"
#include"stdint.h" 


typedef enum 
{
    add,
    substract, 
    multiply, 
    divide,
    leftshift,
    rightshift
}operations;

/*Template classes C++ 14 practice*/
template <typename T> 
T calculate_values(T T1 , T T2, operations op );

template <typename T> 
T calculate_values(T T1 , T T2, operations op )
{
    T temp; 
    switch (op)  
    {
        case add :  temp =  T1+ T2; 
                    break; 

        case substract : temp = T1-T2 ; 
                         break;

        case multiply :  temp = T1*T2;  
                         break;

        case divide  : temp = T1/T2;
                       break;

        default : std::cout<< "not a valid option ";
    }
    return(temp);
}
