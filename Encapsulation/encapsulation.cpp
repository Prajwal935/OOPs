#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
private:
  string name;
  string ownerName;
  int subscribersCount;
  list<string> publishedVideoTitles;
public:
  YouTubeChannel(string Name, string OwnerName)
  {
    name = Name;
    ownerName = OwnerName;
    subscribersCount = 0;
  }

  void GetInfo()
  {
    cout << "name: " << name << endl;
    cout << "owner name: " << ownerName << endl;
    cout << "subscribers: " << subscribersCount << endl;
    cout << "videos: " << endl;
    for (string videosTitle : publishedVideoTitles)
    {
      cout << videosTitle << endl;
    }
  }
  void subscribe(){
    subscribersCount++;
  }
  void unSubscribe(){
    if(subscribersCount>0)
      subscribersCount--;
  }
  void publishedVideo(string title){
    publishedVideoTitles.push_back(title);
  }
};

int main()
{
  YouTubeChannel ytChannel("codeBeauty", "Prajwal");
  ytChannel.publishedVideo("C++ for beginers");
  ytChannel.publishedVideo("OOPs in C++");
  ytChannel.publishedVideo("HTML and CSS");
  ytChannel.subscribe();
  ytChannel.subscribe();
  ytChannel.subscribe();
  ytChannel.subscribe();
  ytChannel.GetInfo();
  ytChannel.unSubscribe();
  ytChannel.unSubscribe();
  ytChannel.GetInfo();

  return 0;
}