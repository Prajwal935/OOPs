#include<iostream>
#include<list>
using namespace std;

class YouTubeChannel{
  public:
    string name;
    string ownerName;
    int subscribersCount;
    list<string>publishedVideoTitles;
};

int main(){
  YouTubeChannel ytChannel;
  ytChannel.name="codeBeauty";
  ytChannel.ownerName="Prajwal";
  ytChannel.subscribersCount=1800;
  ytChannel.publishedVideoTitles={"c++ for beginners video1","HTML & CSS video1","C++ OOP video1"};

  cout<<"name: "<<ytChannel.name<<endl;
  cout<<"name: "<<ytChannel.ownerName<<endl;
  cout<<"name: "<<ytChannel.subscribersCount<<endl;
  cout<<"videos: "<<endl;
  for (string videosTitle : ytChannel.publishedVideoTitles)
  {
    cout<<videosTitle<<endl;
  }
  return 0;
}