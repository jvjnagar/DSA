void rotate(vector<vector<int> >& mat) {
    int i, j, size;
    size=mat.size();
    //swap diagonally
    for(i=0; i<size; i++)
    {
        for(j=0; j<i; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    //interchange the columns
    for(i=0; i<size; i++)
    {
        for(j=0; j<size/2; j++)
        {
            swap(mat[i][j], mat[i][size-j-1]);
        }
    }
}
