## Question Link :
https://practice.geeksforgeeks.org/problems/marks-of-pcm2529/1#

class Solution{
    public:
    static bool comparator(const pair<int,pair<int,int>> &a, 
    const pair<int,pair<int,int>> &b){
            if(a.first<b.first)
            return true;
        else if(a.first>b.first) 
            return false;
        if(a.second.first>b.second.first)
            return true;
        else if(a.second.first<b.second.first)
            return false;
        if(a.second.second<b.second.second)
            return true;
        else
            return false;
    }
    
    void customSort (int phy[], int chem[], int math[], int n)
    {
        // your code here
        vector<pair<int,pair<int,int>>> marks;
        for(int i=0;i<n;i++)
        {
            marks.push_back({phy[i],{chem[i],math[i]}});
        }
        sort(marks.begin(),marks.end(),comparator);
        
        for(int i=0;i<n;i++)
        {
            phy[i] = marks[i].first;
            chem[i] = marks[i].second.first;
            math[i] = marks[i].second.second;
        }
    } 
};