#include <iostream>

using namespace std;

int main()
{
    size_t n{0};
    cin >> n;
    
    string input{""};
    string apc[n];
    int total{0};
    
    for(int i{0}; i < n; i++){
        cin >> input;
        
        for(int l{0}; l < input.size() - 1; l++){
            string dummyInput = input;
            dummyInput[l] = ' ';
            dummyInput[l + 1] = ' ';
            
            apc[i] = dummyInput;
        }
        for(int j{0}; j < i; j++){
            
            if(input == apc[i]){
                total++;
            }
        }
    }
    cout << "Total is: " << total << endl;
    

    return 0;
}

    /*  
        aaabcc
        abcc
        abcc
        aacc
        aaac
        aaab
    */
    
    /*
        for(int il{l}; il < input.size() - 2; il++){
            dummyInput[l] = dummyInput[l + 2];
        }
    */
