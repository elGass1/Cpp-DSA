#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

//displaying queue elements
void display(queue <int> q){
    cout<< "Queue: ";
    while(!q.empty()){
        cout<< q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

//sorting the queue
void sortQueue(queue <int> & q){
    vector <int> v;
    while (!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    sort(v.begin(), v.end());
    for(int x: v){
        q.push(x);
    }
}

//reversing vthe queue
void reverseQueue(queue <int>&q){
    vector <int> v;
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    reverse(v.begin(), v.end());
    for (int x: v){
        q.push(x);
    }
}

//search for a certain value
bool searchQueue(queue <int> q, int key){
    while (!q.empty()){
        if(q.front()==key){
            return true;
        }
        q.pop();
    }
    return false;
}

int main(){

    //manually filling the queue
    
    queue <int> q;
    q.push(14);
    q.push(16);
    q.push(96);
    q.push(22);
    cout<<"after enqueue: \n";
    display(q);

    q.pop();
    cout<<"\n after dequeue \n";
    display(q);

    int key=30;
    if(searchQueue(q,key)==true){
        cout<<key<<" does exist in the queue";
    }else{
        cout<<key<<" does not exist in the queue";
    }

    //queue after sorting
    sortQueue(q);
    cout<<"\n after sorting \n";
    display(q);


    //queue after reversing
    reverseQueue(q);
    cout<<"\n after reversing\n";
    display(q);

    return 0;
}