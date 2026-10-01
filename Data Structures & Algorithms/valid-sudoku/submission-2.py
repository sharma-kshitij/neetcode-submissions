class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        def checkSquares(board) -> bool:
            for l in range (0,9,3):
                for k in range(0,9,3):
                    arr = []
                    for i in range(0,3):
                        for j in range(0,3):
                            if(board[i+k][j+l] != "."):
                                arr.append(board[i+k][j+l])
                
                    if (len(set(arr))!=len(arr)):
                        return False
            return True

        for i in range(9):
            horizontal = []
            vertical = []
            for j in range(9):
                if(board[i][j] != "."):
                    horizontal.append(board[i][j])
                if(board[j][i]!="."):
                    vertical.append(board[j][i])
            if (len(set(horizontal))!= len(horizontal)):
                return False
            if (len(set(vertical)) != len(vertical)):
                return False
        if not (checkSquares(board)):
            return False
        return True