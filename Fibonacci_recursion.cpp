#include <iostream>
using namespace std;

int fib(int first, int second, int stopping) // Stopping condition
{
    if (first + second>stopping) // base condition
    return 0;
    
    else
    {
        if(first<1) // printing first element
        {
            cout<<first<<" ";
        }

    cout<<second<<" ";
    
    // updating the elements as current element is the summation of last two
    // and the F(n-2) is moved to F(n-1)
    second = first + second;
    first = second - first ;
    fib(first, second, stopping);
    }
    
}



int main()
{
    
    int first, second,stopping;
    stopping = 500;
    first = 0, second= 1;
    fib(first, second, stopping);
}


