// class Solution{
//     private:
//     void createPath(vector<vector<int>>&grid,vector < string > & ansvec,string & path,int row , int col,int n){
//         if(row==n-1&&col==n-1){
//             ansvec.push_back(path);
//             return ;
//         }
//         grid[row][col]=0;
//         if(row<n-1&&grid[row+1][col]){
//             path.push_back('D');
//             createPath(grid,ansvec,path,row+1,col,n);
//             path.pop_back();
//            // grid[row+1][col]=1;
//         }
//         if(col!=0&&grid[row][col-1]){
//             path.push_back('L');
//             createPath(grid,ansvec,path,row,col-1,n);
//             path.pop_back();
//             //grid[row][col-1]=1;

//         }
//         if(col<n-1&&grid[row][col+1]){
//             path.push_back('R');
//             createPath(grid,ansvec,path,row,col+1,n);
//             path.pop_back();
//            // grid[row][col+1]=1;
//         }
//         if(row!=0&&grid[row-1][col]){
//             path.push_back('U');
//             createPath(grid,ansvec,path,row-1,col,n);
//             path.pop_back();
//            // grid[row-1][col]=1;
//         }
//         grid[row][col]=1;
//     }
//     public:
//     vector<string> findPath(vector<vector<int> > &grid) {
//         if(grid[0][0]==0)return {};
//         vector < string > ansvec;
//         string path;
//         createPath(grid,ansvec,path,0,0,grid.size());
//         return ansvec;
//     }
// };