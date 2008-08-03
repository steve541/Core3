/*
 *	server/zone/objects/creature/shuttle/ShuttleCreature.h generated by engine3 IDL compiler 0.55
 */

#ifndef SHUTTLECREATURE_H_
#define SHUTTLECREATURE_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/util/Coordinate.h"

class Creature;

class Player;

class Ticket;

#include "../Creature.h"

class ShuttleCreature : public Creature {
public:
	ShuttleCreature(const string& planet, const string& city, Coordinate* playerSpawnPoint, unsigned long long oid, unsigned int tax, bool starport);

	void doTakeOff();

	void doLanding();

	void sendPlayerTo(Player* player, Ticket* ticker);

	string& getCity();

	string& getPlanet();

	Coordinate* getArrivalPoint();

	int getArrivalTime();

	unsigned int getTax();

	bool isStarport();

protected:
	ShuttleCreature(DummyConstructorParameter* param);

	virtual ~ShuttleCreature();

	string _return_getCity;
	string _return_getPlanet;

	friend class ShuttleCreatureHelper;
};

class ShuttleCreatureImplementation;

class ShuttleCreatureAdapter : public CreatureAdapter {
public:
	ShuttleCreatureAdapter(ShuttleCreatureImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void doTakeOff();

	void doLanding();

	void sendPlayerTo(Player* player, Ticket* ticker);

	string& getCity();

	string& getPlanet();

	Coordinate* getArrivalPoint();

	int getArrivalTime();

	unsigned int getTax();

	bool isStarport();

};

class ShuttleCreatureHelper : public DistributedObjectClassHelper, public Singleton<ShuttleCreatureHelper> {
	static ShuttleCreatureHelper* staticInitializer;

public:
	ShuttleCreatureHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<ShuttleCreatureHelper>;
};

#include "../CreatureImplementation.h"

class ShuttleCreatureServant : public CreatureImplementation {
public:
	ShuttleCreature* _this;

public:
	ShuttleCreatureServant(unsigned long long oid);
	virtual ~ShuttleCreatureServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*SHUTTLECREATURE_H_*/
