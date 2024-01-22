#include <bits/stdc++.h>
using namespace std;

int nodecnt=0,treecnt=0;
vector<int> key,treeid;

struct node{
	int id;
	vector<int> val;
};

struct tree{
	void insert(int id,int x){
		
	}
};

vector<node> nodes;
vector<tree> trees;

node new_node(){
	node nd;
	nd.id=nodecnt++;
	nd.val.resize(key.size());
	for(int &x:nd.val){
		cin>>x;
	}
	for(int i=0;i<key.size();i++){
		if(!treeid[i]) continue;
		trees[treeid[i]].insert(nd.id,nd.val[i]);
	}
	nodes.push_back(nd);
	return nd;
}

void new_key(int name,bool searchable=0){
	key.push_back(name);
	treeid.push_back(0);
	if(searchable){
		treeid[treeid.size()-1]=treecnt++;
		trees.resize(treecnt);
		for(int i=0;i<nodecnt;i++){
			nodes[i].val.resize(key.size());
			trees[treeid.back()].insert(nodes[i].id,nodes[i].val.back());
		}
	}
}

int main(){
    cout<<"Hello World! :)"<<endl;
    return 0;
}
