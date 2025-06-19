#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
public:
  string name;
  string ownerName;
  int subscribersCount;
  list<string> publishedVideoTitles;

  YouTubeChannel(string Name,string OwnerName){
    name=Name;
    ownerName=OwnerName;
    subscribersCount=0;
  }
};

int main()
{
  YouTubeChannel ytChannel("codeBeauty", "Prajwal");
  ytChannel.publishedVideoTitles.push_back("C++ for beginers");
  ytChannel.publishedVideoTitles.push_back("OOPs in C++");
  ytChannel.publishedVideoTitles.push_back("HTML and CSS");
  cout<< "name: " << ytChannel.name << endl;
  cout << "owner name: " << ytChannel.ownerName << endl;
  cout << "subscribers: " << ytChannel.subscribersCount << endl;
  cout << "videos: " << endl;
  for (string videosTitle : ytChannel.publishedVideoTitles)
  {
    cout << videosTitle << endl;
  }


cout<<"------------------------------"<<endl;


  YouTubeChannel ytChannel1("Gamer", "RockStar");
  cout << "name: " << ytChannel1.name << endl;
  cout << "owner name: " << ytChannel1.ownerName << endl;
  cout << "subscribers: " << ytChannel1.subscribersCount << endl;
  cout << "videos: " << endl;
  for (string videosTitle : ytChannel1.publishedVideoTitles)
  {
    cout << videosTitle << endl;
  }
  return 0;
}