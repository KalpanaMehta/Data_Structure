#include<iostream>
#include<stack>
using namespace std;
// int smallest = INT_MAX;
class MinStack{
    stack<pair<int,int>> st;
public:
    void push_st (int data){
        // if(data<smallest){
        //     smallest = data;
        // }
        // stk.push({data,smallest});

         int min_num ;
        if(st.empty()){
            min_num = data;
        }
        else{
            min_num = min(st.top().second,data);
        }
        st.push({data,min_num});
    }
    int getMin() {

        return  st.top().second;
    }
    void pop(){
        st.pop();
    }

};
int main()
{
    MinStack s;
    s.push_st(-2);
    s.push_st(8);
    s.push_st(-3);
    s.push_st(2);
    s.pop();
    cout<<"minimum value from stack"<<s.getMin()<<endl;

    s.pop();
    cout<<"minimum value from stack"<<s.getMin()<<endl;
    return 0;
}