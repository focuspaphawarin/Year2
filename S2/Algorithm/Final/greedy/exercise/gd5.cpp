#include<iostream>
using namespace std;
struct Line{
	int x;
	int y;
};
void merge_line(Line line[],int x,int y,int n)
{
	Line subline[n];
	int last_end = x;
	int subline_index = 0;
	int count = 0;
	while(last_end<y)
    {
		int max_y = INT_MIN;
		int max_index = -1;
		for(int i=0;i<n;i++)
        {
			if(line[i].x<=last_end && line[i].y>max_y) 
            { 
				max_y = line[i].y;
				max_index = i;
			}
		}
		if(max_index!=-1)
        {
			subline[subline_index].x = line[max_index].x;
			subline[subline_index].y = line[max_index].y;
			last_end = line[max_index].y; 
			subline_index++;
			count++;
		}
	}
	
	cout << count << endl;
	
	for(int i=0;i<subline_index;i++)
    {
		cout << subline[i].x << " " << subline[i].y << endl;
	}
}
int main()
{
	int n;
	cin >> n;
	Line line[n];
	for(int i=0;i<n;i++)
    {
		cin >> line[i].x >> line[i].y;
	}
	int x,y;
	cin >> x >> y;
	merge_line(line,x,y,n);
}


// 10
// 1 2
// 3 5
// 1 5
// 2 4
// 4 5
// 3 6
// 2 7
// 7 9
// 4 8
// 1 3
// 1 9