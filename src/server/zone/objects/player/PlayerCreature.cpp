/*
 *	server/zone/objects/player/PlayerCreature.cpp generated by engine3 IDL compiler 0.60
 */

#include "PlayerCreature.h"

#include "server/zone/ZoneClientSession.h"

#include "server/zone/objects/player/PlayerObject.h"

#include "server/zone/objects/tangible/Container.h"

#include "server/zone/objects/player/events/PlayerDisconnectEvent.h"

#include "server/zone/objects/player/events/PlayerRecoveryEvent.h"

#include "server/chat/room/ChatRoom.h"

/*
 *	PlayerCreatureStub
 */

PlayerCreature::PlayerCreature(LuaObject* templateData) : CreatureObject(DummyConstructorParameter::instance()) {
	_impl = new PlayerCreatureImplementation(templateData);
	_impl->_setStub(this);
	_impl->_setClassHelper(PlayerCreatureHelper::instance());

	((PlayerCreatureImplementation*) _impl)->_serializationHelperMethod();
}

PlayerCreature::PlayerCreature(DummyConstructorParameter* param) : CreatureObject(param) {
}

PlayerCreature::~PlayerCreature() {
}

void PlayerCreature::notifyInsert(QuadTreeEntry* entry) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((PlayerCreatureImplementation*) _impl)->notifyInsert(entry);
}

void PlayerCreature::notifyDissapear(QuadTreeEntry* entry) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((PlayerCreatureImplementation*) _impl)->notifyDissapear(entry);
}

void PlayerCreature::disconnect(bool closeClient, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addBooleanParameter(closeClient);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->disconnect(closeClient, doLock);
}

void PlayerCreature::unload() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->unload();
}

void PlayerCreature::reload() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->reload();
}

void PlayerCreature::logout(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->logout(doLock);
}

void PlayerCreature::activateRecovery() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->activateRecovery();
}

void PlayerCreature::doRecovery() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->doRecovery();
}

void PlayerCreature::sendMessage(BasePacket* msg) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(msg);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->sendMessage(msg);
}

void PlayerCreature::sendToOwner(bool doClose) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->sendToOwner(doClose);
}

bool PlayerCreature::isOnline() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerCreatureImplementation*) _impl)->isOnline();
}

bool PlayerCreature::isOffline() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerCreatureImplementation*) _impl)->isOffline();
}

bool PlayerCreature::isLoading() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerCreatureImplementation*) _impl)->isLoading();
}

bool PlayerCreature::isLinkDead() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerCreatureImplementation*) _impl)->isLinkDead();
}

bool PlayerCreature::isLoggingIn() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerCreatureImplementation*) _impl)->isLoggingIn();
}

bool PlayerCreature::isLoggingOut() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerCreatureImplementation*) _impl)->isLoggingOut();
}

unsigned int PlayerCreature::getAccountID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((PlayerCreatureImplementation*) _impl)->getAccountID();
}

ZoneClientSession* PlayerCreature::getClient() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return (ZoneClientSession*) method.executeWithObjectReturn();
	} else
		return ((PlayerCreatureImplementation*) _impl)->getClient();
}

byte PlayerCreature::getRaceID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithByteReturn();
	} else
		return ((PlayerCreatureImplementation*) _impl)->getRaceID();
}

unsigned long long PlayerCreature::getSavedParentID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((PlayerCreatureImplementation*) _impl)->getSavedParentID();
}

int PlayerCreature::getSavedZoneID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlayerCreatureImplementation*) _impl)->getSavedZoneID();
}

String PlayerCreature::getFirstName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		method.executeWithAsciiReturn(_return_getFirstName);
		return _return_getFirstName;
	} else
		return ((PlayerCreatureImplementation*) _impl)->getFirstName();
}

void PlayerCreature::setSavedParentID(unsigned long long id) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addUnsignedLongParameter(id);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->setSavedParentID(id);
}

void PlayerCreature::setSavedZoneID(int id) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addSignedIntParameter(id);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->setSavedZoneID(id);
}

void PlayerCreature::setClient(ZoneClientSession* cli) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addObjectParameter(cli);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->setClient(cli);
}

void PlayerCreature::setBiography(const UnicodeString& bio) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addUnicodeParameter(bio);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->setBiography(bio);
}

void PlayerCreature::setRaceID(byte id) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addByteParameter(id);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->setRaceID(id);
}

void PlayerCreature::setOffline() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->setOffline();
}

void PlayerCreature::setLinkDead() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->setLinkDead();
}

void PlayerCreature::setOnline() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->setOnline();
}

void PlayerCreature::setLoggingOut() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->setLoggingOut();
}

void PlayerCreature::setAccountID(unsigned int id) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addUnsignedIntParameter(id);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->setAccountID(id);
}

void PlayerCreature::clearDisconnectEvent() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->clearDisconnectEvent();
}

void PlayerCreature::clearRecoveryEvent() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->clearRecoveryEvent();
}

void PlayerCreature::addChatRoom(ChatRoom* room) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);
		method.addObjectParameter(room);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->addChatRoom(room);
}

void PlayerCreature::removeChatRoom(ChatRoom* room) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);
		method.addObjectParameter(room);

		method.executeWithVoidReturn();
	} else
		((PlayerCreatureImplementation*) _impl)->removeChatRoom(room);
}

/*
 *	PlayerCreatureImplementation
 */

PlayerCreatureImplementation::~PlayerCreatureImplementation() {
}

void PlayerCreatureImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (PlayerCreature*) stub;
	CreatureObjectImplementation::_setStub(stub);
}

DistributedObjectStub* PlayerCreatureImplementation::_getStub() {
	return _this;
}

PlayerCreatureImplementation::operator const PlayerCreature*() {
	return _this;
}

void PlayerCreatureImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PlayerCreatureImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PlayerCreatureImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PlayerCreatureImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PlayerCreatureImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PlayerCreatureImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PlayerCreatureImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PlayerCreatureImplementation::_serializationHelperMethod() {
	CreatureObjectImplementation::_serializationHelperMethod();

	addSerializableVariable("owner", &owner);
	addSerializableVariable("savedZoneID", &savedZoneID);
	addSerializableVariable("savedParentID", &savedParentID);
	addSerializableVariable("onlineStatus", &onlineStatus);
	addSerializableVariable("logoutTimeStamp", &logoutTimeStamp);
	addSerializableVariable("accountID", &accountID);
	addSerializableVariable("raceFile", &raceFile);
	addSerializableVariable("raceID", &raceID);
	addSerializableVariable("startingLocation", &startingLocation);
	addSerializableVariable("startingProfession", &startingProfession);
	addSerializableVariable("biography", &biography);
	addSerializableVariable("lotsRemaining", &lotsRemaining);
	addSerializableVariable("nextAction", &nextAction);
	addSerializableVariable("nextTip", &nextTip);
	addSerializableVariable("chatRooms", &chatRooms);
	addSerializableVariable("incapacitationCounter", &incapacitationCounter);
	addSerializableVariable("firstIncapacitationTime", &firstIncapacitationTime);
	addSerializableVariable("pvpRating", &pvpRating);
	addSerializableVariable("factionStatus", &factionStatus);
}

void PlayerCreatureImplementation::sendMessage(BasePacket* msg) {
	// server/zone/objects/player/PlayerCreature.idl(133):  
	if (owner == NULL){
	// server/zone/objects/player/PlayerCreature.idl(134):  msg.finalize();
	msg->finalize();
	// server/zone/objects/player/PlayerCreature.idl(135):  return;
	return;
}

	else {
	// server/zone/objects/player/PlayerCreature.idl(137):  owner.sendMessage(msg);
	owner->sendMessage(msg);
}
}

bool PlayerCreatureImplementation::isOnline() {
	// server/zone/objects/player/PlayerCreature.idl(144):  return onlineStatus != OFFLINE && onlineStatus != LINKDEAD;
	return onlineStatus != OFFLINE && onlineStatus != LINKDEAD;
}

bool PlayerCreatureImplementation::isOffline() {
	// server/zone/objects/player/PlayerCreature.idl(148):  return onlineStatus == OFFLINE;
	return onlineStatus == OFFLINE;
}

bool PlayerCreatureImplementation::isLoading() {
	// server/zone/objects/player/PlayerCreature.idl(152):  return onlineStatus == LOADING || onlineStatus == LOGGINGOUT;
	return onlineStatus == LOADING || onlineStatus == LOGGINGOUT;
}

bool PlayerCreatureImplementation::isLinkDead() {
	// server/zone/objects/player/PlayerCreature.idl(156):  return onlineStatus == LINKDEAD;
	return onlineStatus == LINKDEAD;
}

bool PlayerCreatureImplementation::isLoggingIn() {
	// server/zone/objects/player/PlayerCreature.idl(160):  return onlineStatus == LOGGINGIN;
	return onlineStatus == LOGGINGIN;
}

bool PlayerCreatureImplementation::isLoggingOut() {
	// server/zone/objects/player/PlayerCreature.idl(164):  return onlineStatus == LOGGINGOUT;
	return onlineStatus == LOGGINGOUT;
}

unsigned int PlayerCreatureImplementation::getAccountID() {
	// server/zone/objects/player/PlayerCreature.idl(168):  return accountID;
	return accountID;
}

ZoneClientSession* PlayerCreatureImplementation::getClient() {
	// server/zone/objects/player/PlayerCreature.idl(172):  return owner;
	return owner;
}

byte PlayerCreatureImplementation::getRaceID() {
	// server/zone/objects/player/PlayerCreature.idl(176):  return raceID;
	return raceID;
}

unsigned long long PlayerCreatureImplementation::getSavedParentID() {
	// server/zone/objects/player/PlayerCreature.idl(180):  return savedParentID;
	return savedParentID;
}

int PlayerCreatureImplementation::getSavedZoneID() {
	// server/zone/objects/player/PlayerCreature.idl(184):  return savedZoneID;
	return savedZoneID;
}

void PlayerCreatureImplementation::setSavedParentID(unsigned long long id) {
	// server/zone/objects/player/PlayerCreature.idl(190):  savedParentID = id;
	savedParentID = id;
}

void PlayerCreatureImplementation::setSavedZoneID(int id) {
	// server/zone/objects/player/PlayerCreature.idl(194):  savedZoneID = id;
	savedZoneID = id;
}

void PlayerCreatureImplementation::setClient(ZoneClientSession* cli) {
	// server/zone/objects/player/PlayerCreature.idl(198):  owner = cli;
	owner = cli;
}

void PlayerCreatureImplementation::setBiography(const UnicodeString& bio) {
	// server/zone/objects/player/PlayerCreature.idl(202):  biography = bio;
	biography = bio;
}

void PlayerCreatureImplementation::setRaceID(byte id) {
	// server/zone/objects/player/PlayerCreature.idl(206):  raceID = id;
	raceID = id;
}

void PlayerCreatureImplementation::setOffline() {
	// server/zone/objects/player/PlayerCreature.idl(210):  onlineStatus 
	if (isLinkDead()){
}
	// server/zone/objects/player/PlayerCreature.idl(214):  = OFFLINE;
	onlineStatus = OFFLINE;
}

void PlayerCreatureImplementation::setOnline() {
	// server/zone/objects/player/PlayerCreature.idl(220):  onlineStatus = ONLINE;
	onlineStatus = ONLINE;
	// server/zone/objects/player/PlayerCreature.idl(222):  doRecovery();
	doRecovery();
}

void PlayerCreatureImplementation::setLoggingOut() {
	// server/zone/objects/player/PlayerCreature.idl(226):  onlineStatus = LOGGINGOUT;
	onlineStatus = LOGGINGOUT;
}

void PlayerCreatureImplementation::setAccountID(unsigned int id) {
	// server/zone/objects/player/PlayerCreature.idl(230):  accountID = id;
	accountID = id;
}

void PlayerCreatureImplementation::clearDisconnectEvent() {
	// server/zone/objects/player/PlayerCreature.idl(234):  disconnectEvent = null;
	disconnectEvent = NULL;
}

void PlayerCreatureImplementation::clearRecoveryEvent() {
	// server/zone/objects/player/PlayerCreature.idl(238):  recoveryEvent = null;
	recoveryEvent = NULL;
}

void PlayerCreatureImplementation::addChatRoom(ChatRoom* room) {
	// server/zone/objects/player/PlayerCreature.idl(242):  chatRooms.put(room);
	(&chatRooms)->put(room);
}

void PlayerCreatureImplementation::removeChatRoom(ChatRoom* room) {
	// server/zone/objects/player/PlayerCreature.idl(246):  chatRooms.drop(room);
	(&chatRooms)->drop(room);
}

/*
 *	PlayerCreatureAdapter
 */

PlayerCreatureAdapter::PlayerCreatureAdapter(PlayerCreatureImplementation* obj) : CreatureObjectAdapter(obj) {
}

Packet* PlayerCreatureAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		disconnect(inv->getBooleanParameter(), inv->getBooleanParameter());
		break;
	case 7:
		unload();
		break;
	case 8:
		reload();
		break;
	case 9:
		logout(inv->getBooleanParameter());
		break;
	case 10:
		activateRecovery();
		break;
	case 11:
		doRecovery();
		break;
	case 12:
		sendMessage((BasePacket*) inv->getObjectParameter());
		break;
	case 13:
		sendToOwner(inv->getBooleanParameter());
		break;
	case 14:
		resp->insertBoolean(isOnline());
		break;
	case 15:
		resp->insertBoolean(isOffline());
		break;
	case 16:
		resp->insertBoolean(isLoading());
		break;
	case 17:
		resp->insertBoolean(isLinkDead());
		break;
	case 18:
		resp->insertBoolean(isLoggingIn());
		break;
	case 19:
		resp->insertBoolean(isLoggingOut());
		break;
	case 20:
		resp->insertInt(getAccountID());
		break;
	case 21:
		resp->insertLong(getClient()->_getObjectID());
		break;
	case 22:
		resp->insertByte(getRaceID());
		break;
	case 23:
		resp->insertLong(getSavedParentID());
		break;
	case 24:
		resp->insertSignedInt(getSavedZoneID());
		break;
	case 25:
		resp->insertAscii(getFirstName());
		break;
	case 26:
		setSavedParentID(inv->getUnsignedLongParameter());
		break;
	case 27:
		setSavedZoneID(inv->getSignedIntParameter());
		break;
	case 28:
		setClient((ZoneClientSession*) inv->getObjectParameter());
		break;
	case 29:
		setBiography(inv->getUnicodeParameter(_param0_setBiography__UnicodeString_));
		break;
	case 30:
		setRaceID(inv->getByteParameter());
		break;
	case 31:
		setOffline();
		break;
	case 32:
		setLinkDead();
		break;
	case 33:
		setOnline();
		break;
	case 34:
		setLoggingOut();
		break;
	case 35:
		setAccountID(inv->getUnsignedIntParameter());
		break;
	case 36:
		clearDisconnectEvent();
		break;
	case 37:
		clearRecoveryEvent();
		break;
	case 38:
		addChatRoom((ChatRoom*) inv->getObjectParameter());
		break;
	case 39:
		removeChatRoom((ChatRoom*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PlayerCreatureAdapter::disconnect(bool closeClient, bool doLock) {
	return ((PlayerCreatureImplementation*) impl)->disconnect(closeClient, doLock);
}

void PlayerCreatureAdapter::unload() {
	return ((PlayerCreatureImplementation*) impl)->unload();
}

void PlayerCreatureAdapter::reload() {
	return ((PlayerCreatureImplementation*) impl)->reload();
}

void PlayerCreatureAdapter::logout(bool doLock) {
	return ((PlayerCreatureImplementation*) impl)->logout(doLock);
}

void PlayerCreatureAdapter::activateRecovery() {
	return ((PlayerCreatureImplementation*) impl)->activateRecovery();
}

void PlayerCreatureAdapter::doRecovery() {
	return ((PlayerCreatureImplementation*) impl)->doRecovery();
}

void PlayerCreatureAdapter::sendMessage(BasePacket* msg) {
	return ((PlayerCreatureImplementation*) impl)->sendMessage(msg);
}

void PlayerCreatureAdapter::sendToOwner(bool doClose) {
	return ((PlayerCreatureImplementation*) impl)->sendToOwner(doClose);
}

bool PlayerCreatureAdapter::isOnline() {
	return ((PlayerCreatureImplementation*) impl)->isOnline();
}

bool PlayerCreatureAdapter::isOffline() {
	return ((PlayerCreatureImplementation*) impl)->isOffline();
}

bool PlayerCreatureAdapter::isLoading() {
	return ((PlayerCreatureImplementation*) impl)->isLoading();
}

bool PlayerCreatureAdapter::isLinkDead() {
	return ((PlayerCreatureImplementation*) impl)->isLinkDead();
}

bool PlayerCreatureAdapter::isLoggingIn() {
	return ((PlayerCreatureImplementation*) impl)->isLoggingIn();
}

bool PlayerCreatureAdapter::isLoggingOut() {
	return ((PlayerCreatureImplementation*) impl)->isLoggingOut();
}

unsigned int PlayerCreatureAdapter::getAccountID() {
	return ((PlayerCreatureImplementation*) impl)->getAccountID();
}

ZoneClientSession* PlayerCreatureAdapter::getClient() {
	return ((PlayerCreatureImplementation*) impl)->getClient();
}

byte PlayerCreatureAdapter::getRaceID() {
	return ((PlayerCreatureImplementation*) impl)->getRaceID();
}

unsigned long long PlayerCreatureAdapter::getSavedParentID() {
	return ((PlayerCreatureImplementation*) impl)->getSavedParentID();
}

int PlayerCreatureAdapter::getSavedZoneID() {
	return ((PlayerCreatureImplementation*) impl)->getSavedZoneID();
}

String PlayerCreatureAdapter::getFirstName() {
	return ((PlayerCreatureImplementation*) impl)->getFirstName();
}

void PlayerCreatureAdapter::setSavedParentID(unsigned long long id) {
	return ((PlayerCreatureImplementation*) impl)->setSavedParentID(id);
}

void PlayerCreatureAdapter::setSavedZoneID(int id) {
	return ((PlayerCreatureImplementation*) impl)->setSavedZoneID(id);
}

void PlayerCreatureAdapter::setClient(ZoneClientSession* cli) {
	return ((PlayerCreatureImplementation*) impl)->setClient(cli);
}

void PlayerCreatureAdapter::setBiography(const UnicodeString& bio) {
	return ((PlayerCreatureImplementation*) impl)->setBiography(bio);
}

void PlayerCreatureAdapter::setRaceID(byte id) {
	return ((PlayerCreatureImplementation*) impl)->setRaceID(id);
}

void PlayerCreatureAdapter::setOffline() {
	return ((PlayerCreatureImplementation*) impl)->setOffline();
}

void PlayerCreatureAdapter::setLinkDead() {
	return ((PlayerCreatureImplementation*) impl)->setLinkDead();
}

void PlayerCreatureAdapter::setOnline() {
	return ((PlayerCreatureImplementation*) impl)->setOnline();
}

void PlayerCreatureAdapter::setLoggingOut() {
	return ((PlayerCreatureImplementation*) impl)->setLoggingOut();
}

void PlayerCreatureAdapter::setAccountID(unsigned int id) {
	return ((PlayerCreatureImplementation*) impl)->setAccountID(id);
}

void PlayerCreatureAdapter::clearDisconnectEvent() {
	return ((PlayerCreatureImplementation*) impl)->clearDisconnectEvent();
}

void PlayerCreatureAdapter::clearRecoveryEvent() {
	return ((PlayerCreatureImplementation*) impl)->clearRecoveryEvent();
}

void PlayerCreatureAdapter::addChatRoom(ChatRoom* room) {
	return ((PlayerCreatureImplementation*) impl)->addChatRoom(room);
}

void PlayerCreatureAdapter::removeChatRoom(ChatRoom* room) {
	return ((PlayerCreatureImplementation*) impl)->removeChatRoom(room);
}

/*
 *	PlayerCreatureHelper
 */

PlayerCreatureHelper* PlayerCreatureHelper::staticInitializer = PlayerCreatureHelper::instance();

PlayerCreatureHelper::PlayerCreatureHelper() {
	className = "PlayerCreature";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PlayerCreatureHelper::finalizeHelper() {
	PlayerCreatureHelper::finalize();
}

DistributedObject* PlayerCreatureHelper::instantiateObject() {
	return new PlayerCreature(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlayerCreatureHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlayerCreatureAdapter((PlayerCreatureImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

