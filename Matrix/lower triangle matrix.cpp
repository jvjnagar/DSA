#include <iostream>
using namespace std;

class LowerTri
{
private:
    int n;
    int *A;
public:
    LowerTri()
    {
       n = 2;
       A = new int[2*(2+1)/2];
    }
    LowerTri(int n)
    {
        this->n = n;
        A = new int[n*(n+1)/2];
    }
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
    ~LowerTri()
    {
        delete [] A;
    }
    int getDimension(){return n;}
};

// row-major mapping
void LowerTri::Set( int i, int j, int x)
{
    if(i>=j)
    {
        A[i*(i-1)/2+j-1] = x;
    }
}
// row-major mapping
int LowerTri::Get(int i, int j)
{
    if(i>=j)
    {
        return A[i*(i-1)/2+j-1];
    }
    else 
    {
        return 0;
    }
}

void LowerTri::Display()
{
    int i, j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i>=j)
            {
                printf("%d ",A[i*(i-1)/2+j-1]);
            }
            else 
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("enter the size of matrix \n");
    scanf("%d", &n);
    LowerTri m(n);
    
    printf("enter the matrix elements \n");
    int i, j, x;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            
            scanf("%d", &x);
            m.Set(i, j, x);
        }
    }
    printf("\n \n");
    
    m.Display();
    
    
    return 0;
}

