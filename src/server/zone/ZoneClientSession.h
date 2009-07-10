/*
 *	server/zone/ZoneClientSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef ZONECLIENTSESSION_H_
#define ZONECLIENTSESSION_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/service/proto/BaseClientProxy.h"

#include "engine/service/proto/StandaloneBaseMessage.h"

#include "engine/service/proto/BaseMessage.h"

#include "engine/service/DatagramServiceThread.h"

#include "system/net/SocketAddress.h"

#include "system/net/Socket.h"

#include "engine/core/ManagedObject.h"

namespace server {
namespace zone {

class ZoneClientSession : public ManagedObject {
public:
	ZoneClientSession(DatagramServiceThread* serv, Socket* sock, SocketAddress* addr);

	void sendMessage(BaseMessage* msg);

	void sendMessage(StandaloneBaseMessage* msg);

	void disconnect();

	void disconnect(bool doLock);

	void closeConnection(bool lockPlayer, bool doLock = true);

	void acquire();

	void release();

	String& getAddress();

	void lock(bool doLock = true);

	void unlock(bool doLock = true);

	void setSessionKey(unsigned int key);

	unsigned int getSessionKey();

protected:
	ZoneClientSession(DummyConstructorParameter* param);

	virtual ~ZoneClientSession();

	void _lock(bool doLock = true);

	void _unlock(bool doLock = true);

	string _return_getAddress;

	friend class ZoneClientSessionHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

#include "engine/core/ManagedObjectImplementation.h"

namespace server {
namespace zone {

class ZoneClientSessionImplementation : public ManagedObjectImplementation, public BaseClientProxy {
	unsigned int sessionKey;

	bool disconnecting;

public:
	ZoneClientSessionImplementation(DatagramServiceThread* serv, Socket* sock, SocketAddress* addr);

	void sendMessage(BaseMessage* msg);

	void sendMessage(StandaloneBaseMessage* msg);

	void disconnect();

	void disconnect(bool doLock);

	void closeConnection(bool lockPlayer, bool doLock = true);

	void acquire();

	void release();

	String& getAddress();

	void lock(bool doLock = true);

	void unlock(bool doLock = true);

	void setSessionKey(unsigned int key);

	unsigned int getSessionKey();

	ZoneClientSession* _this;

protected:
	virtual ~ZoneClientSessionImplementation();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();
};

class ZoneClientSessionAdapter : public ManagedObjectAdapter {
public:
	ZoneClientSessionAdapter(ZoneClientSessionImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void sendMessage(BaseMessage* msg);

	void sendMessage(StandaloneBaseMessage* msg);

	void disconnect();

	void disconnect(bool doLock);

	void closeConnection(bool lockPlayer, bool doLock);

	void acquire();

	void release();

	String& getAddress();

	void lock(bool doLock);

	void unlock(bool doLock);

	void setSessionKey(unsigned int key);

	unsigned int getSessionKey();

};

class ZoneClientSessionHelper : public DistributedObjectClassHelper, public Singleton<ZoneClientSessionHelper> {
	static ZoneClientSessionHelper* staticInitializer;

public:
	ZoneClientSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ZoneClientSessionHelper>;
};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*ZONECLIENTSESSION_H_*/
