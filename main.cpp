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

void stack::push(){
    int *temp;
    if(base_ptr == NULL){
        temp = new int;
        cin>>*temp;
        base_ptr = temp;
        stack_ptr = base_ptr;
        temp = NULL;
        return;
    }
    
    cout<< "\n stackptr after = > "<< stack_ptr;
    stack_ptr = stack_ptr + 1;
    temp = stack_ptr;
    cin>>*temp;
    cout<< "\n stackptr after = > "<< stack_ptr;
    cout<< "\n stackptr data => "<<*stack_ptr;
    cout<< "\n baseptr =>"<<base_ptr;
    cout<< "\n basepte data =>"<<*base_ptr; 
    cout<< "\n stack size => "<<stack_ptr - base_ptr;
    temp = NULL;
    return;
}

void stack::pop(){
    int * temp;
    if(base_ptr == NULL || stack_ptr == base_ptr){
        cout<<"cannot pop";
        return;
    }
    temp = stack_ptr;
    cout<< " \n\n stack ptr after => "<<stack_ptr;
    stack_ptr = temp -1;
    temp = NULL;
    cout<<"\n pop success";
   
    cout<< "\n\n stack ptr after => "<<stack_ptr;
    cout<< "\n stack ptr data = > "<<*stack_ptr;
    cout<<"\n base ptr => "<< base_ptr;
    cout<< "\n basepte data =>"<<*base_ptr; 
    cout<< "\n stack size => "<<stack_ptr - base_ptr;
}

int main(){

    int input = 1000;
    stack s;
    while(input!=0){
        cin >> input;
        switch (input)
        {
        case 1:
            s.push();
            cout<<"\n\n pushing stack";
            break;
        case 2:
            s.pop();
            cout<<" \n\n popping stack";
            break;
        case 0:
            cout<<"\n\nexiting program";
            break;
        default:
            cout<<" \n\ninvalid input";
            break;
        }
    }

    return 0;
}