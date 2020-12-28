#include <iostream>
#include <queue>
#include <utility>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){
	unordered_map<string,int> attributes;
	vector<string> s={"a","b","c","a"};
	for(int i = 0; i < s.size(); i++)attributes[s[i]]++;
	for(auto it=attributes.begin();it!=attributes.end();it++)
		        cout<< it->first<<it->second<<endl;

	return 0;
}
