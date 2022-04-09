vector twoSum(vector& v, int t) {
  
int n=v.size();
vector ans;
vector<pair<int,int>>vect;
  
for(int i=0;i<n;i++)
  {
  vect.push_back(make_pair(v[i],i));
  }
  
sort(vect.begin(),vect.end());
int x=0,y=n-1;
while(x<y)
  {
    if(vect[x].first+vect[y].first==t)
      {
        ans.push_back(vect[x].second);
        ans.push_back(vect[y].second);
        break;
      }
    else if(vect[x].first+vect[y].first<t)
        x++;
    else
        y--;
}
return ans;
}
