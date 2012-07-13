/*
 *	server/zone/managers/auction/AuctionsMap.h generated by engine3 IDL compiler 0.60
 */

#ifndef AUCTIONSMAP_H_
#define AUCTIONSMAP_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace auction {

class AuctionItem;

} // namespace auction
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::auction;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#include "server/zone/managers/auction/AuctionTerminalMap.h"

#include "server/zone/managers/auction/TerminalListVector.h"

#include "engine/core/ManagedObject.h"

#include "system/util/VectorMap.h"

namespace server {
namespace zone {
namespace managers {
namespace auction {

class AuctionsMap : public ManagedObject {
public:
	AuctionsMap();

	int addItem(CreatureObject* player, SceneObject* vendor, AuctionItem* item);

	int removeItem(SceneObject* vendor, AuctionItem* item);

	AuctionItem* getItem(unsigned long long id);

	bool containsItem(unsigned long long id);

	TerminalListVector getVendorTerminalData(const String& planet, const String& region, SceneObject* vendor);

	TerminalListVector getBazaarTerminalData(const String& planet, const String& region, SceneObject* vendor);

	int getVendorItemCount(SceneObject* vendor);

	void deleteTerminalItems(SceneObject* vendor);

	int getBazaarItemCount(CreatureObject* player);

	void updateUID(SceneObject* vendor, const String& oldUID, const String& newUID);

	void updateVendorSearch(SceneObject* vendor, bool enabled);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	AuctionsMap(DummyConstructorParameter* param);

	virtual ~AuctionsMap();

	friend class AuctionsMapHelper;
};

} // namespace auction
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::auction;

namespace server {
namespace zone {
namespace managers {
namespace auction {

class AuctionsMapImplementation : public ManagedObjectImplementation {
protected:
	AuctionTerminalMap vendorItemsForSale;

	AuctionTerminalMap bazaarItemsForSale;

	VectorMap<unsigned long long, ManagedReference<AuctionItem* > > allItems;

	VectorMap<unsigned long long, int> bazaarCount;

	Logger logger;

public:
	AuctionsMapImplementation();

	AuctionsMapImplementation(DummyConstructorParameter* param);

	int addItem(CreatureObject* player, SceneObject* vendor, AuctionItem* item);

private:
	int addVendorItem(CreatureObject* player, const String& planet, const String& region, SceneObject* vendor, AuctionItem* item);

	int addBazaarItem(CreatureObject* player, const String& planet, const String& region, SceneObject* vendor, AuctionItem* item);

public:
	int removeItem(SceneObject* vendor, AuctionItem* item);

private:
	int removeVendorItem(SceneObject* vendor, AuctionItem* item);

	int removeBazaarItem(SceneObject* vendor, AuctionItem* item);

public:
	AuctionItem* getItem(unsigned long long id);

	bool containsItem(unsigned long long id);

	TerminalListVector getVendorTerminalData(const String& planet, const String& region, SceneObject* vendor);

	TerminalListVector getBazaarTerminalData(const String& planet, const String& region, SceneObject* vendor);

private:
	void sendVendorUpdateMail(SceneObject* vendor, bool isEmpty);

public:
	int getVendorItemCount(SceneObject* vendor);

	void deleteTerminalItems(SceneObject* vendor);

	int getBazaarItemCount(CreatureObject* player);

	void updateUID(SceneObject* vendor, const String& oldUID, const String& newUID);

	void updateVendorSearch(SceneObject* vendor, bool enabled);

	WeakReference<AuctionsMap*> _this;

	operator const AuctionsMap*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~AuctionsMapImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class AuctionsMap;
};

class AuctionsMapAdapter : public ManagedObjectAdapter {
public:
	AuctionsMapAdapter(AuctionsMap* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int addItem(CreatureObject* player, SceneObject* vendor, AuctionItem* item);

	int removeItem(SceneObject* vendor, AuctionItem* item);

	AuctionItem* getItem(unsigned long long id);

	bool containsItem(unsigned long long id);

	int getVendorItemCount(SceneObject* vendor);

	void deleteTerminalItems(SceneObject* vendor);

	int getBazaarItemCount(CreatureObject* player);

	void updateUID(SceneObject* vendor, const String& oldUID, const String& newUID);

	void updateVendorSearch(SceneObject* vendor, bool enabled);

};

class AuctionsMapHelper : public DistributedObjectClassHelper, public Singleton<AuctionsMapHelper> {
	static AuctionsMapHelper* staticInitializer;

public:
	AuctionsMapHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<AuctionsMapHelper>;
};

} // namespace auction
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::auction;

#endif /*AUCTIONSMAP_H_*/
