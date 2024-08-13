#include <iostream>
using namespace std;
//Modularity
int count_Number_Of_Digits(int n){
    int count = 0;
    while(n>0){
        int single_digit = n%10;
        n/=10;
        count++;
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    
    cout<<"Total Digits "<<count_Number_Of_Digits(n)<<endl;
    return 0;
}