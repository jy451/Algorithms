#include <iostream>
using namespace std;
const int maxx=1e5;
template <typename T>
class queue{
public:
    T quee[maxx];
    int head;
    int tail;
    queue(){
        head=tail=0;
    }
    bool queuefull();
    bool queuenull();
    void push(T x);
    T pop();
};
template <typename T>
bool queue<T>::queuefull(){
    if(tail==maxx && head!=tail)  return 1;
    return 0;
}
template <typename T>
bool queue<T>::queuenull(){
    if(head==tail) return 1;
    return 0;
}
template <typename T>
void queue<T>::push(T x){
    if(queuefull()) return ;
    quee[tail++]=x;
}
template <typename T>
T queue<T>::pop(){
    if(queuenull()) return 1;
    return quee[head++];
}
int main()
{
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    while(!que.queuenull()){
        cout<<que.pop()<<endl;
    }
    return 0;
}