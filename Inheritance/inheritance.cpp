#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel//base class
{
private:
  string name;
  int subscribersCount;
  list<string> publishedVideoTitles;
protected:
  string ownerName;

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
};

class CookingYouTubeChannel:public YouTubeChannel{//derived class
public:
  CookingYouTubeChannel(string Name,string OwnerName):YouTubeChannel(Name,OwnerName){

  }
  void practice(){
    cout<<ownerName<<" is practicing cooking, learning new recipes, experimenting with spices..."<<endl;
  }
};

int main()
{
  CookingYouTubeChannel CookingYtChannel("Amy's kitchen","Amy");
  CookingYtChannel.publishedVideo("Apple cake");
  CookingYtChannel.publishedVideo("Chocolate cake");
  CookingYtChannel.publishedVideo("Ice cake");
  CookingYtChannel.subscribe();
  CookingYtChannel.subscribe();
  CookingYtChannel.GetInfo();
  CookingYtChannel.practice();


  CookingYouTubeChannel cookingYtChannel2("John's kitchen","John");
  cookingYtChannel2.publishedVideo("Apple cake");
  cookingYtChannel2.publishedVideo("Chocolate cake");
  cookingYtChannel2.publishedVideo("Ice cake");
  cookingYtChannel2.subscribe();
  cookingYtChannel2.subscribe();
  cookingYtChannel2.GetInfo();
  cookingYtChannel2.practice();
  return 0;
}