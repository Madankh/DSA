#include<iostream>
#include<stack>
using namespace std;
 
 class queue{
    stack<char> s1;
    // stack<char> s2;
    public:
    void push(int x){
        s1.push(x);
    }

    int pop(){
        // if(s1.empty() and s2.empty()){
        if(s1.empty()){    
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int x = s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item = pop();
        s1.push(x);
        return item;
        // if(s2.empty()){
        //     while(!s1.empty()){
        //         s2.push(s1.top());
        //         s1.pop();
        //     }
        // }
        // int topval = s2.top();
        // s2.pop();
        // return topval;
    }

    bool empty(){
        // if(s1.empty() and s2.empty()){
        if(s1.empty()){    
            return true;
        }else{
            return false;
        }
    }
 };

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    // cout<<q.pop()<<endl;
    return 0;
}