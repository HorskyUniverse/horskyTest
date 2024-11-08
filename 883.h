//你是一名C++高级开发工程师，请根据下面的需求描述、输入输出示例、提示和代码框架完善代码。
//
//需求描述：
//在 n x n 的网格 grid 中，我们放置了一些与 x，y，z 三轴对齐的 1 x 1 x 1 立方体。
//每个值 v = grid[i][j] 表示 v 个正方体叠放在单元格(i, j) 上。
//现在，我们查看这些立方体在 xy 、yz 和 zx 平面上的投影。
//投影 就像影子，将 三维 形体映射到一个 二维 平面上。从顶部、前面和侧面看立方体时，我们会看到“影子”。
//返回 所有三个投影的总面积 。
//
//示例：
//示例 1：
//输入：[[1, 2], [3, 4]]
//输出：17
//解释：这里有该形体在三个轴对齐平面上的三个投影(“阴影部分”)。
//示例 2：
//输入：[[1, 2], [3, 4]]
//输出：17
//解释：这里有该形体在三个轴对齐平面上的三个投影(“阴影部分”)。
//示例 3：
//输入：[[1, 0], [0, 2]]
//输出：8
//
//提示：
//n == grid.length == grid[i].length
//1 <= n <= 50
//0 <= grid[i][j] <= 50
//
//代码框架：
//class Solution {
//public:
//	int projectionArea(vector<vector<int>>& grid) {
//
//	}
//};
#include <vector>
#include <algorithm>

using namespace std;

class Solution883 {
public:
	int projectionArea(vector<vector<int>>& grid) {
		int n = grid.size();
		int topArea = 0;
		int frontArea = 0;
		int sideArea = 0;

		for (int i = 0; i < n; ++i) {
			int maxRow = 0;
			int maxCol = 0;
			for (int j = 0; j < n; ++j) {
				if (grid[i][j] > 0) topArea++; // Count non-zero cells for top projection
				maxRow = max(maxRow, grid[i][j]); // Find max height in current row
				maxCol = max(maxCol, grid[j][i]); // Find max height in current column
			}
			frontArea += maxRow; // Sum up max height in each row for front projection
			sideArea += maxCol; // Sum up max height in each column for side projection
		}

		return topArea + frontArea + sideArea;
	}
};
