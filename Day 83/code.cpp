class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int numberOfRows = matrix.size();
        int numberOfColumns = matrix[0].size();
        int totalElements = numberOfRows * numberOfColumns;
        int rowStart = 0;
        int colStart = 0;
        int rowEnd = numberOfRows-1;
        int colEnd = numberOfColumns-1;
        vector<int> ans;
        int count = 0;
        while(count < totalElements){
            for(int i=colStart; i<=colEnd && count < totalElements; i++){
                ans.push_back(matrix[rowStart][i]);
                count++;
            }
            rowStart++; 
            for(int i=rowStart; i<=rowEnd && count < totalElements; i++){
                ans.push_back(matrix[i][colEnd]);
                count++;
            }
            colEnd--;
            for(int i=colEnd; i>=colStart && count < totalElements; i--){
                ans.push_back(matrix[rowEnd][i]);
                count++;
            }
            rowEnd--;
            for(int i=rowEnd; i>=rowStart && count < totalElements; i--){
                ans.push_back(matrix[i][colStart]);
                count++;
            }
            colStart++;
        }
        return ans;
    }
};
