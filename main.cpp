// For CPP test code

#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <tuple>
//#include "2073.h"
//#include "1576.h"
//#include "24012403.h"
//#include "884.h"
//#include "1287.h"
//#include "24022818.h"
//#include "2068.h"
//#include "997.h"
//#include "1002.h"
//#include "LCP72.h"
//#include "1598.h"
//#include "1051.h"
//#include "914.h"
//#include "2024052203.h"
// #include "1496.h"
// #include "20240424.h"
// #include "2024042402.h"
//#include "2024042403.h"
#include "2024052203.h"

using namespace std;



int main() {
	/*Solution2024052202 solution;
	const vector<string> cmds = { "abc","abb","acba","bba" };
	const string cmd = "acba";
	string ans = solution.ShortCmd(cmds, cmd);
	cout << ans << endl;*/

	/*Solution2024052203 solution;

	vector<pair<int, int>> configs = { {2, 3}, {4, 5} };
	vector<tuple<char, int, int>> batchReqs = {
		make_tuple('a', 0, 1),
		make_tuple('a', 5, 6),
		make_tuple('d', 0, 1),
		make_tuple('d', 1, 2),
		make_tuple('a', 0, 6),
		make_tuple('d', 4, 5),
		make_tuple('a', 1, 4)
	};

	vector<tuple<char, int, int>> result = solution.GetBatchCmds(configs, batchReqs);

	for (const auto& cmd : result) {
		char opType = get<0>(cmd);
		int id1 = get<1>(cmd);
		int id2 = get<2>(cmd);
		cout << "(" << opType << ", " << id1 << ", " << id2 << ")" << endl;
	}*/

	cout << __cplusplus << endl;

	return 0;
}

int main2() {
	return 0;
	/*Solution914 s914;
	vector<int> input = { 1, 1, 1, 2, 2, 2, 3, 3 };
	int out = s914.hasGroupsSizeX(input);
	cout << out << endl;*/

	/*int ans = main042403();
	return ans;*/

	// int ans = main0424();
	// return ans;

	/*int ans = main042402();
	return ans;*/

	/*Solution1496 s1496;
	string input = "NESWW";
	bool ans = s1496.isPathCrossing(input);
	cout << ans << endl;*/

	/*Solution1051 s1051;
	vector<int> input = { 1, 1, 4, 2, 1, 3 };
	int ans = s1051.heightChecker(input);
	cout << ans << endl;*/

	/*Solution1598 s1598;
	vector<string> log = { "d1/", "d2/", "../", "d21/", "./" };
	int dep = s1598.minOperations(log);
	cout << dep << endl;*/

	/*SolutionLCP72 sLCP72;
	vector<int> input = { 7, 3, 6, 1, 8 };
	vector<int> output = sLCP72.supplyWagon(input);
	for (auto o : output) {
		cout << o << " ";
	}
	cout << endl;*/

	/*Solution1002 s1002;
	vector<string> input = { "bella", "label", "roller" };
	vector<string> output = s1002.commonChars(input);
	for (auto o : output) {
		cout << o << " ";
	}
	cout << endl;*/

	/*Solution997 s997;
	vector<vector<int>> trust = { {1, 3}, {2, 3}, {2, 1} };
	int n = 3;
	int ans = s997.findJudge(n, trust);
	cout << ans << endl;*/

	/*Solution2068 s2068;
	string word1 = "zzzyyy";
	string word2 = "iiiiii";
	bool ans = s2068.checkAlmostEquivalent(word1, word2);
	cout << ((ans == true) ? "true" : "false");*/

	/*Solution1287 s1287;
	vector<int> arr = {1,2,3,3};
	int ans = s1287.findSpecialInteger(arr);
	cout << ans << endl;

	return 1;*/
	/*char pIn[] = "Hello, world!";
	unsigned int hash = hashSha1(pIn, strlen(pIn));
	std::cout << hash << std::endl;
	return 0;*/

	/*Solution884 s884;
	string s1 = "this apple is sweet";
	string s2 = "this apple is sour";
	vector<string> ans = s884.uncommonFromSentences(s1, s2);
	for (auto a : ans) {
		cout << a << endl;
	}*/

	/*float input = 0;
	for (int i = -230; i < 240; i += 30) {
		input = (float)i + 0.5;
		cout << "input: " << input << "  output: ";
		cout << ZOOM1000HI(input) << endl;
	}*/
	/*Solution s;
	vector<string> instructions = { "LOAD 0", "LOAD 1", "COMPARE 0", "JUMPIF 6", "LOAD 0", "RETURN", "LOAD 1", "RETURN" };
	vector<int> vars = { 3, 1 };
	vector<int> ans;
	ans = s.Interpret(instructions, vars);
	for (auto a : ans) {
		cout << a << endl;
	}*/

	/*Solution1576 s1576;
	string input = "??";
	string ans = s1576.modifyString(input);
	cout << ans << endl;*/

	/*char in[] = {'a', '\0'};
	cout << func(1000, in) << endl;
	cout << func(10, in) << endl;
	return 0;*/
	/*Solution2073 s2073;
	vector<int> input2073 = { 5,1,1,1 };
	int inputK = 0;
	int ans2073 = s2073.timeRequiredToBuy(input2073, inputK);
	cout << ans2073 << endl;
	return 1;*/

}
