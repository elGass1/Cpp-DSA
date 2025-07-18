#include <iostream>
#include <stack>

using namespace std;

void displayStack(stack <int> s){
    //since the stack can only give us access to the most top element
    //we must pop each element after display
    while (!s.empty()){
        cout<<s.top()<<' ';
        s.pop();
    }
}

int main(){

    stack <int> s;
    //inserting elements into the stack
    s.push(69);
    s.push(96);
    s.push(88);
    //stack contains {88,96,69}
    //removing elements from the stack
    s.pop();
    //now it contains {96,69}
    displayStack(s);
    return 0;
    

}