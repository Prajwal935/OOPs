#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel // base class
{
private:
  string name;
  int subscribersCount;
  list<string> publishedVideoTitles;

protected:
  string ownerName;
  int contentQuality;

public:
  YouTubeChannel(string Name, string OwnerName)
  {
    name = Name;
    ownerName = OwnerName;
    subscribersCount = 0;
    contentQuality=0;
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
  void subscribe()
  {
    subscribersCount++;
  }
  void unSubscribe()
  {
    if (subscribersCount > 0)
      subscribersCount--;
  }
  void publishedVideo(string title)
  {
    publishedVideoTitles.push_back(title);
  }
  void checkAnalytics(){
    if(contentQuality<5){
      cout<<name<<" has bad quality content. "<<endl;
    }else{
      cout<<name<<" has a great content. "<<endl;
    }
  }
};

class CookingYouTubeChannel : public YouTubeChannel
{ // derived class
public:
  CookingYouTubeChannel(string Name, string OwnerName) : YouTubeChannel(Name, OwnerName)
  {
  }
  void practice()
  {
    cout << ownerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
    contentQuality++;
  }
};
class SingersYouTubeChannel : public YouTubeChannel
{ // derived class
public:
  SingersYouTubeChannel(string Name, string OwnerName) : YouTubeChannel(Name, OwnerName)
  {
  }
  void practice()
  {
    cout << ownerName << " is taking singing classes, learning new songs, learning how to dance..." << endl;
    contentQuality++;
  }
};

int main()
{
  CookingYouTubeChannel CookingYtChannel("Amy's kitchen", "Amy");
  SingersYouTubeChannel singersYtChannel("johnSings","John");

  CookingYtChannel.practice();
  singersYtChannel.practice();
  singersYtChannel.practice();
  singersYtChannel.practice();
  singersYtChannel.practice();
  singersYtChannel.practice();
  CookingYtChannel.checkAnalytics();
  singersYtChannel.checkAnalytics();

  YouTubeChannel *yt1 = &CookingYtChannel;
  YouTubeChannel *yt2 = &singersYtChannel;

  yt1->checkAnalytics();
  yt2->checkAnalytics();

  return 0;
}