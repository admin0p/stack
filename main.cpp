#include<iostream>

using namespace std;

class stack {
    private: 
        int *base_ptr = NULL;
        int *stack_ptr = NULL;
    public:

        void push();
        void pop();
};

int main(){

    int input = 1000;

    while(input!=0){
        cin >> input;
        switch (input)
        {
        case 1:
            cout<<"pushing stack";
            break;
        case 2:
            cout<<"popping stack";
            break;
        case 0:
            cout<<"exiting program";
            break;
        default:
            cout<<"invalid input";
            break;
        }
    }

    return 0;
}