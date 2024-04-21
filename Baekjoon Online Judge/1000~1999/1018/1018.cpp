#include <iostream>
#include <string>
#include <vector>
using namespace std;

string chessB[8] {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string chessW[8] {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

int CountNumToPaint(int startRow, int startCol, vector<string>& board)
{
    int countB = 0, countW = 0;

    for (int i = startRow; i < startRow + 8; ++i)
    {
        for (int j = startCol; j < startCol + 8; ++j)
        {
            if (board[i][j] != chessB[i - startRow][j - startCol])
                ++countB;
            
            if (board[i][j] != chessW[i - startRow][j - startCol])
                ++countW;
        }
    }

    return countB < countW ? countB : countW;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<string> board(N);

    for (int i = 0; i < N; ++i)
        cin >> board[i];

    int min = 2500;
    int maxRow = N - 8;
    int maxCol = M - 8;

    for (int i = 0; i <= maxRow; ++i)
    {
        for (int j = 0; j <= maxCol; ++j)
        {
            int count = CountNumToPaint(i, j, board);

            if (min > count)
            {
                min = count;
            }
        }
    }

    cout << min << '\n';

    return 0;
}