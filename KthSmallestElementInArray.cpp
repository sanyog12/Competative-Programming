https://www.codingninjas.com/codestudio/problems/kth-smallest-and-largest-element-of-array_1115488?leftPanelTab=1



#include <bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	vector<int> v;
	sort(arr.begin(),arr.end());
	v.push_back(arr[k-1]);
	v.push_back(arr[n-k]);

	return v;
}