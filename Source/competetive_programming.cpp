#include "competetive_programming.h"
#include<vector>
using namespace std;

int randomize_function(const int x,const int y);
template<typename T> 
inline T remove_negativenumber(T t1 , T t2);

//static int find_out_index_gvn_element(const int z , const vector<int>&driver_aray);
static int generate_random_number; 

/*Can use a lambda function instead f*/
template<typename T> 
inline T remove_negativenumber(T t1 , T t2)
{
    return((t1-t2)<0 ? (t2-t1) : (t1-t2)); 
}


void week_1 :: driver_code(const int x , const int  y , vector <int>&driver )
{
    for(int i = 0 ; i<1000; i++)
    {
         driver.push_back(randomize_function(x,y)); 
    } 
}




int  randomize_function(const int x,const int y)
{
    int temp; 
    switch(generate_random_number)
    {
        case 0 : temp = x;
                 generate_random_number++; 
                 break; 
        case 1 : temp = x+y;
                 generate_random_number++; 
                 break;
        case 2 : temp = remove_negativenumber(x,y);
                 generate_random_number++;
                 break ;
        case 3  : temp = y; 
                  generate_random_number++; 
                  break;
        case 4  : temp = x+x; 
                  generate_random_number++;
                  break;
        case 5 : temp = y+y; 
                 generate_random_number++;
                 break;
        default : generate_random_number = 0;
    }
    return(temp);
}



 int week_1 ::  find_out_index_gvn_element(const int z , vector<int> &driver_aray)
{
    int temp ,count = 0,index_found_stat;
    for(int i = 0 ; i<1000; i++)
    {
        if(driver_aray[i] == z)
        {
            temp =i;
            index_found_stat = 1;
            break;
        }
    } 
 
    if(!index_found_stat)
    {
       temp = -1;
    }
    return(temp);
}

void week_1 :: driver_code_init_maxelementsproblem()
{
    vector<int>driver_array;
   // insert_elements_array(double numberofelements,driver_array);
}

