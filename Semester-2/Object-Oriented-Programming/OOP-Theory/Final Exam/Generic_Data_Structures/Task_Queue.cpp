#include "iostream"
using namespace std;

template <typename T>
class ProcessQueue {
    T tasks[5];
    int count = 0;
    public :
    void enqueue(T task) {
        if(count < 5){
            tasks[count++] = task;
        }
    }
    int getCount() { return count; }
};

int main(){
    ProcessQueue<string> queue;
    queue.enqueue("Task 1");
    queue.enqueue("Task 2");
    cout << "Tasks in queue: " << queue.getCount() << endl;
}