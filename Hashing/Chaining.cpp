#include <iostream>

using namespace std;

template<typename T> 
struct Node{
    T data;
    Node *next;
};

template<typename T > 
class Hashing
{
    public:
    int H_size;
    Node<T> *Arr;
    Hashing(int H_size1)
    {
        H_size = H_size1;
        Arr = new Node<T>[H_size];
        for(int i=0; i<H_size; i++)
        {
            Arr[i].data = 0;
            Arr[i].next = NULL;
        }
    }
    void insertSort(int key, T val)
    {
        Node<T> *ptr, *temp, *temp2 = new Node<T>;
        temp2->data = val;
        ptr = NULL;
        temp = &Arr[key];
        while(temp!= NULL)
        {
            if( temp->data < val )
            {
                ptr = temp;
                temp = temp->next;
            }
            else 
                break;
        }
        ptr->next = temp2;
        temp2->next = temp;
    }
    int hashKey(int val)
    {
        return val%H_size;
    }
    void insert(T val)
    {
        int key = hashKey(val);
        insertSort(key, val);
    }
    T search(T val)
    {
        int key = hashKey(val);
        Node<T> *temp = Arr[key].next;
        while(temp)
        {
            if(temp->data == val)
                return val;
            temp = temp->next;
        }
        return -1;
    }
};

int main()
{
    Hashing<int> hash(10);
    hash.insert(10);
    hash.insert(9);
    hash.insert(7);
    int a= hash.search(7);
    cout<<a;
    return 0;
}
