#include <iostream>
using namespace std;
const int maxx=1e5;
template <typename  T>
class stack{
public:
    T stk[maxx];
    int top;
    stack(){
        top=0;
    }
    bool stackfull();
    bool stacknull();
    void push(T x);
    T pop();
};
template <typename  T>
bool stack<T>::stackfull(){
    if(top==maxx-1) return 1;
    return 0;
}
template <typename  T>
bool stack<T>::stacknull(){
    if(top==0)  return 1;
    return 0;
}
template <typename  T>
T stack<T>::pop(){
    if(stacknull())  return 1;
    return stk[--top];
}
template <typename  T>
void stack<T>::push(T x){
    if(stackfull())  return ;
    stk[top++]=x;
}

int main()
{
    stack<double> st;
    st.push(1.1);
    st.push(2.2);
    st.push(3.3);
    while(!st.stacknull()){
        cout<<st.pop()<<endl;
    }
    return 0;
}