//#include <iostream>
//#include "task4.h"
//#define SIZE 10000
//
//using namespace std;
//
//int main() {
//	char a[SIZE] = "9344216368";
//	char b[SIZE] = "434211421444";
//	sum(a, b);
//}

#include <algorithm>
#include <iostream>
#include <random>
#include <vector>
#include <list>
#include <set>
#include <stack>
#include "profile.h"

using namespace std;
int flag = 0;
int flag_2 = 0;

bool is_attached(vector<vector<int>>& graph, int destiny, int source) {
	if (graph[destiny][source])
		return true;
	else
		return false;
}

bool is_attached_to_all(vector<vector<int>>& graph, int source, vector<int>& destinies) {
	for (int i = 0; i < destinies.size(); ++i) {
		if (!graph[source][destinies[i]])
			return false;
	}
	return true;
}

bool includes_at_least_one_attached_to_all(vector<vector<int> >& graph, vector<int>& sources, vector<int>& destinies) {
	int flag1 = 1;
	for (int i = 0; i < sources.size(); ++i) {
		for (int j = 0; j < destinies.size(); ++j) {
			if (!graph[sources[i]][destinies[j]]) {
				flag1 = 0;
				break;
			}
		}
		if (flag1) {
			return true;
		}
		flag1 = 1;
	}
	return false;
}

vector<int> remove_not_attached_vertexes(vector<vector<int> >& graph, vector<int>& old, int v) {
	vector<int> p;
	for (int i = 0; i < old.size(); ++i) {
		if (graph[v][old[i]])
			p.push_back(old[i]);
	}
	return p;
}

void extend(vector<vector<int> >& graph, vector<int>& candidates, vector<int>& not_, vector<int>& compsub, int need) {
	while (!candidates.empty() && !includes_at_least_one_attached_to_all(graph, not_, candidates) and !flag_2) {
		int v = candidates.back();
		compsub.push_back(v);
		vector<int> new_candidates = remove_not_attached_vertexes(graph, candidates, v);
		vector<int> new_not = remove_not_attached_vertexes(graph, not_, v);
		if (new_not.empty() && new_candidates.empty()) {
			if (compsub.size() == need) {
				flag_2 = 1;
				break;
			}
		}
		else {
			extend(graph, new_candidates, new_not, compsub, need);
		}
		compsub.pop_back();
		candidates.pop_back();
		not_.push_back(v);
	}
}

void max_clique(vector<vector<int> >& graph, int need) {
	vector<int> not_;
	vector<int> compsub;
	vector<int> candidates;
	vector<int> result;
	int sum = 0;
	for (int i = 0; i < graph.size(); ++i) {
		candidates.push_back(i);
	}
	extend(graph, candidates, not_, compsub, need);
}

bool includes_at_least_one_attached_to_all2(vector<vector<int> >& graph, set<int>& K, set<int>& P) {
	int flag1 = 1;
	vector<int> PP;
	vector<int> KK;
	for (int i = 0; i < P.size(); i++) {
		if (P.find(i) != P.end()) {
			PP.push_back(*P.find(i));
		}
	}
	for (int i = 0; i < K.size(); i++) {
		if (K.find(i) != K.end()) {
			KK.push_back(*K.find(i));
		}
	}
	int flag2 = 1;
	for (int i = 0; i < PP.size(); ++i) {
		for (int j = 0; j < KK.size(); ++j) {
			if (!graph[PP[i]][KK[j]]) {
				flag2 = 0;
				break;
			}
		}
		if (flag2) {
			return true;
		}
		flag2 = 1;
	}
	return false;
}

void kerbosh(vector<vector<int>>& a, int SIZE, int need) {
	set <int> M, G, K, P;
	set<int> R = K;
	int sum = 0;
	vector<vector<int>> graph(SIZE);
	for (int i = 0; i < SIZE; ++i) {
		graph[i].resize(SIZE);
	}
	for (int i = 0; i < SIZE; i++) {
		K.insert(i);
	}
	int v, Count = 0, cnt = 0;
	vector<int> Stack1(10000);
	set<int> Stack2[10000];
	set<int>::iterator theIterator;
	theIterator = K.begin();
	int var = 0;
	while (((K.size() != 0)) and (!includes_at_least_one_attached_to_all2(graph, K, P))) {
		if (M.size() == need) {
			flag = 1;
			break;
		}
		if (K.size() != 0) {
			theIterator = K.begin();
			v = *theIterator;
			Stack2[++Count] = M;
			Stack2[++Count] = K;
			Stack2[++Count] = P;
			Stack1[++cnt] = v;
			var++;
			//            cout << Count << endl;
			M.insert(v);

			Димедрол, [14.10.20 13:03]
				if (M.size() >= need) {
					flag = 1;
					break;
				}
			//            if(K == R and var >= 50)
			//                break;

			for (int i = 0; i < SIZE; i++) {
				if (a[v][i]) {
					theIterator = K.find(i);
					if (theIterator != K.end()) {
						K.erase(theIterator);
					}
					theIterator = P.find(i);
					if (theIterator != P.end()) {
						P.erase(theIterator);
					}
				}
			}
			theIterator = K.find(v);
			if (theIterator != K.end()) {
				K.erase(theIterator);
			}
		}
		else {
			if (P.size() == 0)
				if (M.size() >= need) {
					flag = 1;
					break;
				}

			v = Stack1[cnt--];
			P = Stack2[Count--];
			K = Stack2[Count--];
			M = Stack2[Count--];
			theIterator = K.find(v);
			if (theIterator != K.end()) {
				K.erase(theIterator);
			}
			P.insert(v);
		}
	}
}

int main() {
	mt19937 generator;
	for (int i = 0; i < 10000; ++i) {
		int n, l;
		n = uniform_int_distribution<>(1, 50)(generator);
		l = uniform_int_distribution<>(1, 50)(generator);
		vector<vector<int>> graph(n);
		int count = uniform_int_distribution<>(0, 1000)(generator);
		int v1, v2;

		for (int i = 0; i < n; i++)
			graph[i].resize(n);
		for (int i = 0; i < count; i++) {
			//            cin >> v1 >> v2;
			v1 = uniform_int_distribution<>(1, n)(generator);
			v2 = uniform_int_distribution<>(1, n)(generator);

			if (count == 37) {
				cout << v1 << " " << v2 << endl;
			}
			v1--;
			v2--;
			graph[v1][v2] = 1;
			graph[v2][v1] = 1;
		}
		cout << count << " " << n << " " << l << endl;
		for (int i = 0; i < n; i++) {
			graph[i][i] = 0;
		}
		{
			LOG_DURATION("first");
			if (l < n)
				kerbosh(graph, n, l);
			else if (n == l)
				if (count == 0)
					flag = 1;
		}


		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				if (graph[i][j] == 1) {
					graph[i][j] = 0;
					graph[j][i] = 0;
				}
				else {
					graph[i][j] = 1;
					graph[j][i] = 1;
				}
			}
		}
		{
			LOG_DURATION("first");
			if (l < n)
				max_clique(graph, l);
			else if (n == l)
				if (count == 0)
					flag = 1;
		}
		if (flag_2 == flag)
			cout << "OK" << endl;
		else
			cout << "WA" << endl;
		flag = 0;
		flag_2 = 0;
	}

	return 0;
}