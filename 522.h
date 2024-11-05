//你是一名C++高级开发工程师，请根据下面的需求描述、输入输出示例、提示和代码框架完善代码，使用中文回答并添加注释。
//
//需求描述：
//给定字符串列表 strs ，返回其中 最长的特殊序列 的长度。如果最长特殊序列不存在，返回 - 1 。
//特殊序列 定义如下：该序列为某字符串 独有的子序列（即不能是其他字符串的子序列）。
//s 的 子序列可以通过删去字符串 s 中的某些字符实现。
//例如，"abc" 是 "aebdc" 的子序列，因为您可以删除"aebdc"中的“ed”字符来得到 "abc" 。"aebdc"的子序列还包括"aebdc"、 "aeb" 和 "" (空字符串)。
//
//示例：
//示例 1：
//输入 : strs = ["aba", "cdc", "eae"]
//	输出 : 3
//	示例 2 :
//	输入 : strs = ["aaa", "aaa", "aa"]
//	输出 : -1
//
//	提示：
//	2 <= strs.length <= 50
//	1 <= strs[i].length <= 10
//	strs[i] 只包含小写英文字母
//
//	代码框架：
//	class Solution {
//	public:
//		int findLUSlength(vector<string>& strs) {
//
//		}
//};


#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
	int findLUSlength(vector<string>& strs) {
		int result = -1;

		// 计算每个字符串是否是其他字符串的子序列
		for (int i = 0; i < strs.size(); ++i) {
			bool isSubsequence = false;
			for (int j = 0; j < strs.size(); ++j) {
				if (i != j && isSubsequenceOf(strs[i], strs[j])) {
					isSubsequence = true;
					break;
				}
			}
			if (!isSubsequence) {
				result = max(result, (int)strs[i].size());
			}
		}

		return result;
	}

private:
	// 判断str1是否是str2的子序列
	bool isSubsequenceOf(const string& str1, const string& str2) {
		int i = 0, j = 0;
		while (i < str1.size() && j < str2.size()) {
			if (str1[i] == str2[j]) {
				++i;
			}
			++j;
		}
		return i == str1.size();
	}
};
