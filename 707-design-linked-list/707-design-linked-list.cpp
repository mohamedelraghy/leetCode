#include <bits/stdc++.h>
using namespace std;

#define P(x) cout << #x << " = { " << x << " }\n"
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define INF 1000000000  

// shortcuts for "common" data types in contests
typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class MyLinkedList
{
    Node *head;
    Node *tail;
    int size;

public:
    MyLinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int get(int index)
    {

        Node *temp = head;

        if (index > size || index < 0)
            return -1;

        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
        }
        
        if(temp == NULL) return -1;
        return temp->data;
    }

    void addAtHead(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;

        if(head->next == NULL){
            tail = head;
        }

        return;
    }

    void addAtTail(int val){

        Node *newNode = new Node(val);
        
        if (head == NULL) head = newNode;

        if (tail != NULL) tail->next = newNode;

        tail = newNode;
        size++;
        return;
    }

    void addAtIndex(int index, int val)
    {
        Node *newNode = new Node(val);
        Node *temp = head;

        if (index > size || index < 0) return;
        if (index == 0) addAtHead(val);
        else if(index == size) addAtTail(val);
        else {

            for (int i = 0; temp != NULL && i < index - 1; i++)
            {

                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
            size++;
        }

        return;
    }

    void deleteAtIndex(int index)
    {
        Node *temp = head;
        if (temp == NULL)
            return;

        if (size == 0 || index < 0 || index >= size){
            return;
        }
        if (index == 0)
        {
            head = head->next;
            delete temp;
            size--;
            if(size == 0) tail = NULL;

        } else {

            for (int i = 0; temp != NULL && i < index - 1; i++)
                temp = temp->next;

            Node *next = temp->next->next;
            delete temp->next;
            temp->next = next;
            size--;

            if (temp->next == NULL) tail = temp;
        }
    }
    void prinList()
    {
        Node *temp = head;
        if (temp == NULL)
        {
            cout << "no data" << endl;
            return;
        }
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
