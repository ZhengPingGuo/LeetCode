#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Solution Time Limit Exceeded
class Solution {
public:
	int maxArea(vector<int>& height) {

		int iMaxArea = 0;
		unsigned int uSize = height.size();

		for (unsigned int i = 0; i < uSize; i++)
		{
			for (unsigned int j = i + 1; j < uSize; j++)
			{
				if ((i != j) && (min(height.at(i), height.at(j))*(j - i) > iMaxArea))
					iMaxArea = min(height.at(i), height.at(j))*(j - i);
			}
		}

		return iMaxArea;
	}
};

int main()
{
	int iTempValue = 0;
	vector<int> vecInput;
	
	while (cin >> iTempValue)
		vecInput.push_back(iTempValue);

	Solution oSolution;
	cout << oSolution.maxArea(vecInput) << endl;

	system("PAUSE");
	return 0;
}