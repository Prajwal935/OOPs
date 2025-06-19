#include<iostream>
#include<list>
using namespace std;

struct YouTubeChannel{
  string name;
  int subscribersCount;

  YouTubeChannel(string Name,int SubscriberCount){
    name=Name;
    subscribersCount = SubscriberCount;
  }
  bool operator==(const YouTubeChannel& channel)const {
    return this->name==channel.name;
  }
};

ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel){//passing original objects themselves 
  COUT<<"Name: "<<ytChannel.name<<endl;
  COUT<<"Subscribers: "<<ytChannel.subscribersCount<<endl;
  return COUT;
}

struct MyCollection{
  list<YouTubeChannel>myChannels;

  void operator+=(YouTubeChannel& channel){
    this->myChannels.push_back(channel);
  }
  void operator-=(YouTubeChannel& channel){
    this->myChannels.remove(channel);
  }
};

ostream& operator<<(ostream& COUT, MyCollection& myCollection){
  for (YouTubeChannel ytChannel : myCollection.myChannels)
  {
    COUT<<ytChannel<<endl;
  }
  return COUT;
}

int main(){
  YouTubeChannel yt1=YouTubeChannel("codeBeauty",5000);
  YouTubeChannel yt2=YouTubeChannel("RaiStar",9000);
  // cout<<yt1<<yt2<<endl;
  // operator<<(cout,yt1);

  MyCollection myCollection;
  myCollection += yt1;
  myCollection += yt2;
  myCollection -= yt1;
  cout << myCollection;
  return 0;
}