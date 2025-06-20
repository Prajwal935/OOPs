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

  YouTubeChannel(string Name, string OwnerName)
  {
    name = Name;
    ownerName = OwnerName;
    subscribersCount = 0;
  }

  void GetInfo(){
    cout << "name: " << name << endl;
    cout << "owner name: " << ownerName << endl;
    cout << "subscribers: " << subscribersCount << endl;
    cout << "videos: " << endl;
    for (string videosTitle : publishedVideoTitles)
    {
      cout << videosTitle << endl;
    }
  }

};

int main()
{
  YouTubeChannel ytChannel("codeBeauty", "Prajwal");
  ytChannel.publishedVideoTitles.push_back("C++ for beginers");
  ytChannel.publishedVideoTitles.push_back("OOPs in C++");
  ytChannel.publishedVideoTitles.push_back("HTML and CSS");
  ytChannel.GetInfo();
  
  return 0;
}