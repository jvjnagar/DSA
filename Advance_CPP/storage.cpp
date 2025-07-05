#include<iostream>
using namespace std;

class storagedevice
{
	public:
	virtual void read()=0;

};
class fd: public storagedevice
{
	public:
	 void read(){}
};
class hd: public storagedevice
{
	public:
	virtual void read(){}
	};
class ssd: public storagedevice
{
	public:
	virtual void read(){}
	};
class storagedevicefactory
{
	storagedevicefactory(){}
static	storagedevicefactory *factory;
public:

static storagedevicefactory*  getfactoryinstance()
  {   if(nullptr == factory)
	  {
		  factory = new storagedevicefactory();
	  }
    return factory;
  }

   static storagedevice* createstoragedevice(string devicetype)
   {
	if(devicetype == "hd")
		return new hd();
	else
		return new ssd();
   }
};
storagedevicefactory *storagedevicefactory::factory = nullptr;

void create(storagedevice *obj)
{
	obj->read();
}
int main()
{
	storagedevicefactory *factoryinstance = storagedevicefactory::getfactoryinstance();
storagedevice *device=	factoryinstance->createstoragedevice("ssd");
  device->read();
	return 0;
}
