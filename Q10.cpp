#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int testNum = 2000000; //upper bound for primes
    long long sum = 2; //stores running sum
    vector<int> primes; //contains prime numbers
    primes.push_back(2);
    int count = 1; //number of primes found
    int tempNum = 0;

    for(int i = 3; i < testNum; i+=2) //iterates through odd integers between 2 and testNum to check for primes
    {
        tempNum = i; 
        cout<<i<<" & "<<sum<<"\n";
        
        for(int j=0; j < count; j++) //checks if divisible by any found primes
        {
            while(tempNum % primes.at(j) == 0)
            {
                tempNum = tempNum / primes.at(j); //divides number by primes
            }
        }

        if(tempNum != 1) //if composite number then dividing by all prime factors will equal 1, if not then prime
        {
            primes.push_back(tempNum); //appends prime to vector
            count++;
            sum += tempNum; //adds prime to sum
        }
    }

    cout<<sum;
}