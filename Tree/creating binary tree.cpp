#include <iostream>
using namespace std;

struct Node
{
    Node* lchild;
    int value;
    Node* rchild;
};

class queue{
    int size;
    int front;
    int rear;
    Node **Q;
    public:
        queue(){
            front=-1; 
            rear=-1;
            size=10;
            Q = (struct Node**) malloc(this->size*sizeof(Node *)); //array of pointers of node pointers
        }
        queue(int size)
        {
            this->front=-1; 
            this->rear=-1;
            this->size=size;
            Q = (struct Node**) malloc(this->size*sizeof(Node *));
        }
        void enqueue(struct Node *x);
        Node* dequeue();
        bool isEmpty();
};

void queue::enqueue(struct Node *x)
{
    if (front==rear+1)
    {
        printf("queue is full");
    }
    else
    {
        rear=(rear+1)%this->size;
        this->Q[rear]=x;
    }
}

Node* queue::dequeue()
{
    struct Node *x = NULL; 
    if(front==rear)
    {
        printf("queue is empty");
    }
    else
    {
        front= (front +1)%this->size;
        x=this->Q[front];
    }
    return x;
}

bool queue::isEmpty()
{
    if(front==rear)
    {
        printf("queue is empty!");
        return true;
    }
    else 
        return false;
}

Node* TreeCreate()
{
    struct Node *p, *t;
    struct queue q(100);
    int x;
    
    printf("enter the root node value ");
    scanf("%d", &x);
    Node *root = (struct Node *)malloc(sizeof(struct Node));
    root->lchild=root->rchild=NULL;
    root->value=x;
    q.enqueue(root);
    while(!q.isEmpty())
    {
        p=q.dequeue();
        printf("enter the left child node %d value ", p->value);
        scanf("%d", &x);
        if(x!=-1)
        {
            t = (struct Node *) malloc (sizeof(Node));
            t->lchild=t->rchild=NULL;
            t->value=x;
            p->lchild=t;
            q.enqueue(t);
        }
        printf("enter the right child node %d value ", p->value);
        scanf("%d", &x);
        if(x!=-1)
        {
            t = (struct Node *) malloc (sizeof(Node));
            t->lchild=t->rchild=NULL;
            t->value=x;
            p->rchild=t;
            q.enqueue(t);
        }
    }
    printf("tree is created!");
    return root;
}

void Preorder(struct Node *p)
{
    if(p)
    {
        printf("%d, ", p->value);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        printf("%d, ", p->value);
        Inorder(p->rchild);
    }
}

void Postorder(struct Node *p)
{
    if(p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d, ", p->value);
    }
}

int main()
{
    struct Node *root;
    root = TreeCreate();
    printf("\nroot node is %d", root->value);
    printf("\npreorder  ");
    Preorder(root);
    printf("\ninorder ");
    Inorder(root);
    printf("\npostorder ");
    Postorder(root);
    
    return 0;
}
