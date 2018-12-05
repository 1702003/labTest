#include<iostream>
using namespace std;
class Audioclip
{
private:
  double channels;
  double resolution;
  double sampleRate;
  double duration;
public:
  Audioclip()
  {
    channels=1;
    resolution=8;
    sampleRate=22050;
    duration=0;
  }
  void set_channels(double c)
  {
    if(c==1 || c==2)
    {
      channels=c;
    }
  }
  void set_resolution(double r)
  {
    if(r==8 || r==16 || r==24)
    {
      resolution=r;
    }
  }
  void set_sampleRate(double s)
  {
    if(s==22050 || s==44100 || s==88200)
    {
      sampleRate=s;
    }
  }
  double get_channels()
  {
    return channels;
  }
  double get_resolution()
  {
    return resolution;
  }
  double get_sampleRate()
  {
    return sampleRate;
  }
  bool StudioQuality()
  {
    if(channels==2 && resolution==24 && sampleRate==88200)
    {
      return true;
    }
    else
      return false;
  }
  double dataSize(double d)
  {
    duration=d;
    return duration*channels*(resolution/8)*sampleRate;
  }
};
int main() {
  double d;
  cout<<"enter duration :"<<endl;
  cin>>d;
  Audioclip a1;
  a1.set_channels(2);
  a1.set_resolution(24);
  a1.set_sampleRate(88200);
  a1.StudioQuality();
  cout<<a1.dataSize(d)<<endl;
  return 0;
}
