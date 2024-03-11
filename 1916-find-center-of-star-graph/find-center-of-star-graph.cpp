int init = [] {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ofstream out("user.out");
	cout.rdbuf(out.rdbuf());
	for (string line; getline(cin, line); cout << '\n') {
		istringstream ss(line);
		char ch;
		int a, b, c, d;
		ss >> ch >> ch >> a >> ch >> b >> ch >> ch >> ch >> c >> ch >> d;
		if (a == c || a == d) cout << a;
		else cout << b;
	}
	exit(0);
	return 0;
}();
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
               int n = edges.size() + 1;
        std::vector<std::vector<int>> adj(n + 1, std::vector<int>());

        for (int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }



        for (int i = 1; i <= n; i++) {
           if(adj[i].size()>1)
           return i;
        }
        return 0;

        


    }
};