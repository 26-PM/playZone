#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node*mover=head;

    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int main(){

    // Node*head=new Node(20);
    // cout<<head->data<<"\n";
    // cout<<head;
    // return 0;

    vector<int>arr={1,2,3,4,5};
    Node*head=convertArr2LL(arr);
    cout<<head->data;
}

