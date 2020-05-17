#include<iostream> 
#include<vector> 
#include "feature_enable.h"
#include "generic_include.h"
#include "competetive_programming.h"

using namespace std; 


#if COMPETETIVE_PROGRAMMING_ENABLED

void test_competetive_programming_excercises()
{
    int x,y,z,index;
    vector<int>p1 = {0};
    //p1.push_back(10);
    std::cout<<"Enter x and y vaulues(first and second element)"<<std::endl;
    cin>>x>>y;
    std::cout<<"Element to find "<<std::endl;
    cin>>z;
    week_1 *object1 = new week_1();
    object1->input_array = p1;
    object1->driver_code(x,y, p1);
    index = object1->find_out_index_gvn_element(z, p1);
    std::cout<<"index of eleemt is "<< index<<std::endl; 
    delete object1;
}
#endif 
int main()
{

    #if COMPETETIVE_PROGRAMMING_ENABLED
    test_competetive_programming_excercises();
    #else 

    #endif
    int *p = NULL;
    *p = 1;
    return(0);
}