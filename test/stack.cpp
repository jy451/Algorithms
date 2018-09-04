
#include <iostream>
using namespace std;
const int maxx=1e5;
template <typename T>
class stack{
    public:
        T stk[maxx];
        int top;
        stack(){
            top=0;
        };
        bool isempty();
        bool isfull();
        void push(T x);
        T pop();
};
template <typename T>
bool stack<T>::isempty(){
    if (top==0){
        return 1;
    }
    else{
        return 0;
    }
}

template <typename T>
bool stack<T>::isfull(){
    if (top==maxx-1){
        return 1;
    }
    else{
        return 0;
    };
};

template <typename T>
void stack<T>::push(T x){
    if (!isfull()){
        stk[top++]=x;
        return ;
    };
    return ;
};
template <typename T>
T stack<T>::pop(){
    if (!isempty()){
        return  stk[--top];
    };
    return 0;
};

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    while(!st.isempty()){
        cout<<st.pop()<<endl;
    }
    return 0;
};