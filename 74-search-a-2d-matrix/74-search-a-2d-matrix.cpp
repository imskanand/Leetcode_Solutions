class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        bool result = false;
        int lastElementIdxInRow = matrix[0].size() - 1;
        for (int i = 0; i < int(matrix.size()); i++)
        {
            if (target <= matrix[i][lastElementIdxInRow])
            {
                int startIdx = matrix[i][0];
                int lastIdx = matrix[i][lastElementIdxInRow];
                result = binary_search(matrix[i].begin(), matrix[i].end(), target);
                if (result)
                {
                    break;
                }
            }
        }
        return result;
    }
};