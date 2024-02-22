class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        wealth = 0
        for row in range(len(accounts)):
            sum = 0
            for column in range(len(accounts[row])):
                sum += accounts[row][column]
            if sum > wealth:
                wealth = sum
        return (wealth)
