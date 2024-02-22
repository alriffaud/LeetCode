int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) 
{
    int row, column, wealth = 0, sum;

    for (row = 0; row < accountsSize; row++)
    {
        sum = 0;
        for (column = 0; column < accountsColSize[row]; column++)
        {
            sum += accounts[row][column];
        }
        if (sum > wealth)
        {
            wealth = sum;
        }
    }
    return (wealth);
}