#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
  string artist, title, genre;
  int year;
};

vector<Track> read_tracks(int n) {
  vector<Track> t(n);
  for(int i =0;i<n;++i){
      cin>>t[i].artist;
      cin>>t[i].title;
      cin>>t[i].genre;
      cin>>t[i].year;
  }
  return t;
}

void print_track(const Track &t) {
  cout << t.artist;
  cout << " (" << t.year;
  cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

bool cmp(const Track &one, const Track &two){
    if(one.artist!=two.artist) return one.artist<two.artist;
    else if(one.year!=two.year) return one.year<two.year;
    else  return one.title<two.title;

}

int main() {
  int n;
  cin>>n;
  vector<Track> t= read_tracks(n);
  sort(t.begin(),t.end(),cmp);
  string r;
  while(cin>>r){
      for(int i =0;i<n;++i){
          if(r==t[i].genre){
              print_track(t[i]);
          }
      }

      
  }
  



}
