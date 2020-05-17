#include<iostream> 
#include <vector>
using namespace std;


class week_1
{
    /*Construct an infinite sequence of the integers */
    public :
         /*construct an infite sequence of integers that only contains first,second or combinations of first and second*/
         vector<int>input_array;
         /*Week 1 Addition Substraction problem*/
         void driver_code(const int x , const int  y , vector<int> &driver);
         int find_out_index_gvn_element(const int z , vector<int> &driver_aray);
         /*Week 1 maximum elements_problem */
         double numberofelements ;
         void driver_code_init_maxelementsproblem();
         void print_array(const vector<int>&p1);         
    private : 
         void insert_elements_array(double numberofelements,vector<int>&driver_array);
};                 


