#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
    map<int,int> dict;
    vector<int> res;
    for(vector<int>::iterator it = nums1.begin();it != nums1.end();++it)
    {
        dict.insert(make_pair(*it,0));
    }
    for(vector<int>::iterator it = nums2.begin();it != nums2.end();++it)
    {
        if(dict.find(*it) != dict.end())
            dict[*it] ++;
    }
    for(map<int,int>::iterator it = dict.begin();it != dict.end();++it)
        if(it->second >0)
            res.push_back(it->first);
    return res;
}

int main(int argc, char *argv[])
{
    int n1[] = {1,2,1,2};
    int n2[] = {1,1};
    vector<int> nums1(n1,n1+4);
    vector<int> nums2(n2,n2+2);
    vector<int> res = intersection(nums1,nums2);
    return 0;
}
