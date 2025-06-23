#include<iostream>
#include<stack>

void DFS(int A[][8], int start)
{
    static int visited[8] = {0};
    int j;
    if (visited[start]==0)
    {
        printf("%d", start);
        visited[start] = 1;
    }
    for(j=1; j<8; j++)
    {
        if(A[start][j], (visited[j]==0))
        {   
            printf("%d", j);
            visited[j]=1;
            DFS(A, j);
        }
    }
}

int main (){
 
    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};
                   
    int start=1;
    DFS(A, start);
}
