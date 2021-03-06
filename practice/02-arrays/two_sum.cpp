#include <iostream>
#include <vector>
using namespace std;

class TwoSum
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> v;
        bool flag = false;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (nums[j] + nums[i] == target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        return v;
    }
};

int main()
{
    vector<int> nums;
    int size, num, target;
    cout << "\nEnter size of Vector: ";
    cin >> size;
    cout << "\nEnter Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        nums.push_back(num);
    }
    cout << "\nEnter target: ";
    cin >> target;

    TwoSum ts;
    vector<int> locs = ts.twoSum(nums, target);
    for (auto &itr : locs)
    {
        cout << itr << " ";
    }
    cout << endl;

    return 0;
}