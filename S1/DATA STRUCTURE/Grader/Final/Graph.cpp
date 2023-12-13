#include<iostream>
#include<vector>
using namespace std;
class Graph{
	public:
		int edges[100][100];
		int s_v;
		Graph(int n){
			s_v=n; //s_v?
			for(int i=0;i<s_v;i++){
				for(int j=0;j<s_v;j++){
					edges[i][j]=0;
				}
			}
		}
		void add_adge(int x,int y,int w){
			edges[x][y]=w;
		}
		void print(){
			for(int i=0;i<s_v;i++){
				cout<<i<<":";
				for(int j=0;j<=s_v;j++){
					if(edges[i][j]>0){
						cout<<j<<","<<edges[i][j]<<" ";
					}
				}
				cout<<endl;
			}
		}
		void bft(int start){
			bool visited_bft[100];
			for(int i=0;i<100;i++){
				visited_bft[i]=0;
			}
			visited_bft[start]=1;
			vector<int> q;
			q.push_back(start);
			while(q.empty()==0){
				start=q.front();
				cout<<start<<" ";
				q.erase(q.begin());
				for(int y=0;y<s_v;y++){
					if(visited_bft[y]==0 && edges[start][y]>0){
						visited_bft[y]=1;
						q.push_back(y);
					}
				}
			}
		}
		bool visited_dft[100];
		void sub_dft(int start){
			cout<<start<<" ";
			visited_dft[start]=1;
			for(int y=0;y<s_v;y++){
				if(visited_dft[y]==0 && edges[start][y]>0){
					sub_dft(y);
				}
			}
		}
		void dft(int start){
			for(int i=0;i<100;i++){
				visited_dft[i]=0;
			}
			sub_dft(start);
		}
		void sub_graph(){
			int num_subgraph=1;
			for(int i=0;i<100;i++){
				visited_dft[i]=0;
			}
			for(int y=0;y<s_v;y++){
				if(visited_dft[y]==0){
					cout<<"\nsub graph = "<<num_subgraph<<":";
					sub_dft(y);
					num_subgraph=num_subgraph+1;
				}
			}
		}
		int n_in_degree[100];
		int t_edges[100][100];
		void in_degree(){
			for(int i=0;i<s_v;i++){
				n_in_degree[i]=0;
				for(int j=0;j<s_v;j++){
					for(int k=0;k<s_v;k++){
						if(t_edges[j][k]==1){
							n_in_degree[k]++;
						}
					}
				}
			}
		}
		
};

int main(){
	int vertex,x,y,w,start;
	char c;
	cin>>vertex;
	Graph g(vertex);
	cin>>c;
	while(c!='s'){
		if(c=='e'){
			cin>>x>>y>>w;
			g.add_adge(x,y,w);
		}
		cin>>c;
	}
	while(true){
		cin>>c;
		if(c=='d'){
			cin>>start;
			g.dft(start);
			cout<<endl;
		}
		if(c=='b'){
			cin>>start;
			g.bft(start);
			cout<<endl;
		}
		if(c=='q'){
			break;
		}
	}
	return 0;
}


