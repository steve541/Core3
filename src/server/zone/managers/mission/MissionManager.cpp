/*
 *	server/zone/managers/mission/MissionManager.cpp generated by engine3 IDL compiler 0.55
 */

#include "MissionManager.h"

#include "MissionManagerImplementation.h"

#include "../../objects/player/Player.h"

#include "../../objects/mission/MissionObject.h"

#include "../../objects/tangible/TangibleObject.h"

#include "server/zone/ZoneServer.h"

/*
 *	MissionManagerStub
 */

MissionManager::MissionManager(ZoneServer* zs, ZoneProcessServerImplementation* ps) {
	_impl = new MissionManagerImplementation(zs, ps);
	_impl->_setStub(this);
}

MissionManager::MissionManager(DummyConstructorParameter* param) {
	_impl = NULL;
}

MissionManager::~MissionManager() {
}

void MissionManager::init() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->init();
}

void MissionManager::unloadManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->unloadManager();
}

void MissionManager::removeMissions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->removeMissions();
}

MissionObject* MissionManager::poolMission(const String& dbKey, int termMask, const String& typeStr, unsigned int descKey, unsigned int titleKey, unsigned int diffLv, float destX, float destY, unsigned int destPlanetCrc, const String& creatorName, unsigned int rewardAmount, float targetX, float targetY, unsigned int targetPlanetCrc, unsigned int depictedObjCrc, const String& descriptionStf, const String& titleStf, unsigned int typeCrc, const String& objectiveDefaults, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(dbKey);
		method.addSignedIntParameter(termMask);
		method.addAsciiParameter(typeStr);
		method.addUnsignedIntParameter(descKey);
		method.addUnsignedIntParameter(titleKey);
		method.addUnsignedIntParameter(diffLv);
		method.addFloatParameter(destX);
		method.addFloatParameter(destY);
		method.addUnsignedIntParameter(destPlanetCrc);
		method.addAsciiParameter(creatorName);
		method.addUnsignedIntParameter(rewardAmount);
		method.addFloatParameter(targetX);
		method.addFloatParameter(targetY);
		method.addUnsignedIntParameter(targetPlanetCrc);
		method.addUnsignedIntParameter(depictedObjCrc);
		method.addAsciiParameter(descriptionStf);
		method.addAsciiParameter(titleStf);
		method.addUnsignedIntParameter(typeCrc);
		method.addAsciiParameter(objectiveDefaults);
		method.addBooleanParameter(doLock);

		return (MissionObject*) method.executeWithObjectReturn();
	} else
		return ((MissionManagerImplementation*) _impl)->poolMission(dbKey, termMask, typeStr, descKey, titleKey, diffLv, destX, destY, destPlanetCrc, creatorName, rewardAmount, targetX, targetY, targetPlanetCrc, depictedObjCrc, descriptionStf, titleStf, typeCrc, objectiveDefaults, doLock);
}

void MissionManager::instanceMission(Player* player, MissionObject* misoCopy, const String& objectives) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);
		method.addObjectParameter(misoCopy);
		method.addAsciiParameter(objectives);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->instanceMission(player, misoCopy, objectives);
}

void MissionManager::setupHardcodeMissions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->setupHardcodeMissions();
}

void MissionManager::sendTerminalData(Player* player, int termBitmask, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);
		method.addSignedIntParameter(termBitmask);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->sendTerminalData(player, termBitmask, doLock);
}

void MissionManager::sendMission(Player* player, String& tKey, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(player);
		method.addAsciiParameter(tKey);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->sendMission(player, tKey, doLock);
}

void MissionManager::doMissionAccept(Player* player, unsigned long long oid, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(oid);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionAccept(player, oid, doLock);
}

void MissionManager::doMissionComplete(Player* player, const String& tKey, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addAsciiParameter(tKey);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionComplete(player, tKey, doLock);
}

void MissionManager::doMissionAbort(Player* player, unsigned long long oid, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(oid);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionAbort(player, oid, doLock);
}

void MissionManager::doMissionAbort(Player* player, const String& tKey, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(player);
		method.addAsciiParameter(tKey);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionAbort(player, tKey, doLock);
}

void MissionManager::evalMission(Player* player, const String& tKey, String& retSay) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(player);
		method.addAsciiParameter(tKey);
		method.addAsciiParameter(retSay);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->evalMission(player, tKey, retSay);
}

void MissionManager::loadPlayerMissions(Player* player, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(player);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->loadPlayerMissions(player, doLock);
}

void MissionManager::savePlayerMission(Player* player, MissionObject* miso, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(player);
		method.addObjectParameter(miso);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->savePlayerMission(player, miso, doLock);
}

void MissionManager::savePlayerKeys(Player* player, const String& curMisoKeys, const String& finMisoKeys, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addObjectParameter(player);
		method.addAsciiParameter(curMisoKeys);
		method.addAsciiParameter(finMisoKeys);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->savePlayerKeys(player, curMisoKeys, finMisoKeys, doLock);
}

void MissionManager::loadMissionScripts() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->loadMissionScripts();
}

void MissionManager::registerFunctions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->registerFunctions();
}

void MissionManager::registerGlobals() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->registerGlobals();
}

/*
 *	MissionManagerAdapter
 */

MissionManagerAdapter::MissionManagerAdapter(MissionManagerImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* MissionManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		init();
		break;
	case 7:
		unloadManager();
		break;
	case 8:
		removeMissions();
		break;
	case 9:
		resp->insertLong(poolMission(inv->getAsciiParameter(_param0_poolMission__String_int_String_int_int_int_float_float_int_String_int_float_float_int_int_String_String_int_String_bool_), inv->getSignedIntParameter(), inv->getAsciiParameter(_param2_poolMission__String_int_String_int_int_int_float_float_int_String_int_float_float_int_int_String_String_int_String_bool_), inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedIntParameter(), inv->getAsciiParameter(_param9_poolMission__String_int_String_int_int_int_float_float_int_String_int_float_float_int_int_String_String_int_String_bool_), inv->getUnsignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter(), inv->getAsciiParameter(_param15_poolMission__String_int_String_int_int_int_float_float_int_String_int_float_float_int_int_String_String_int_String_bool_), inv->getAsciiParameter(_param16_poolMission__String_int_String_int_int_int_float_float_int_String_int_float_float_int_int_String_String_int_String_bool_), inv->getUnsignedIntParameter(), inv->getAsciiParameter(_param18_poolMission__String_int_String_int_int_int_float_float_int_String_int_float_float_int_int_String_String_int_String_bool_), inv->getBooleanParameter())->_getObjectID());
		break;
	case 10:
		instanceMission((Player*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter(), inv->getAsciiParameter(_param2_instanceMission__Player_MissionObject_String_));
		break;
	case 11:
		setupHardcodeMissions();
		break;
	case 12:
		sendTerminalData((Player*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 13:
		sendMission((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendMission__Player_String_bool_), inv->getBooleanParameter());
		break;
	case 14:
		doMissionAccept((Player*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getBooleanParameter());
		break;
	case 15:
		doMissionComplete((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_doMissionComplete__Player_String_bool_), inv->getBooleanParameter());
		break;
	case 16:
		doMissionAbort((Player*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getBooleanParameter());
		break;
	case 17:
		doMissionAbort((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_doMissionAbort__Player_String_bool_), inv->getBooleanParameter());
		break;
	case 18:
		evalMission((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_evalMission__Player_String_String_), inv->getAsciiParameter(_param2_evalMission__Player_String_String_));
		break;
	case 19:
		loadPlayerMissions((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 20:
		savePlayerMission((Player*) inv->getObjectParameter(), (MissionObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 21:
		savePlayerKeys((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_savePlayerKeys__Player_String_String_bool_), inv->getAsciiParameter(_param2_savePlayerKeys__Player_String_String_bool_), inv->getBooleanParameter());
		break;
	case 22:
		loadMissionScripts();
		break;
	case 23:
		registerFunctions();
		break;
	case 24:
		registerGlobals();
		break;
	default:
		return NULL;
	}

	return resp;
}

void MissionManagerAdapter::init() {
	return ((MissionManagerImplementation*) impl)->init();
}

void MissionManagerAdapter::unloadManager() {
	return ((MissionManagerImplementation*) impl)->unloadManager();
}

void MissionManagerAdapter::removeMissions() {
	return ((MissionManagerImplementation*) impl)->removeMissions();
}

MissionObject* MissionManagerAdapter::poolMission(const String& dbKey, int termMask, const String& typeStr, unsigned int descKey, unsigned int titleKey, unsigned int diffLv, float destX, float destY, unsigned int destPlanetCrc, const String& creatorName, unsigned int rewardAmount, float targetX, float targetY, unsigned int targetPlanetCrc, unsigned int depictedObjCrc, const String& descriptionStf, const String& titleStf, unsigned int typeCrc, const String& objectiveDefaults, bool doLock) {
	return ((MissionManagerImplementation*) impl)->poolMission(dbKey, termMask, typeStr, descKey, titleKey, diffLv, destX, destY, destPlanetCrc, creatorName, rewardAmount, targetX, targetY, targetPlanetCrc, depictedObjCrc, descriptionStf, titleStf, typeCrc, objectiveDefaults, doLock);
}

void MissionManagerAdapter::instanceMission(Player* player, MissionObject* misoCopy, const String& objectives) {
	return ((MissionManagerImplementation*) impl)->instanceMission(player, misoCopy, objectives);
}

void MissionManagerAdapter::setupHardcodeMissions() {
	return ((MissionManagerImplementation*) impl)->setupHardcodeMissions();
}

void MissionManagerAdapter::sendTerminalData(Player* player, int termBitmask, bool doLock) {
	return ((MissionManagerImplementation*) impl)->sendTerminalData(player, termBitmask, doLock);
}

void MissionManagerAdapter::sendMission(Player* player, String& tKey, bool doLock) {
	return ((MissionManagerImplementation*) impl)->sendMission(player, tKey, doLock);
}

void MissionManagerAdapter::doMissionAccept(Player* player, unsigned long long oid, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionAccept(player, oid, doLock);
}

void MissionManagerAdapter::doMissionComplete(Player* player, const String& tKey, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionComplete(player, tKey, doLock);
}

void MissionManagerAdapter::doMissionAbort(Player* player, unsigned long long oid, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionAbort(player, oid, doLock);
}

void MissionManagerAdapter::doMissionAbort(Player* player, const String& tKey, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionAbort(player, tKey, doLock);
}

void MissionManagerAdapter::evalMission(Player* player, const String& tKey, String& retSay) {
	return ((MissionManagerImplementation*) impl)->evalMission(player, tKey, retSay);
}

void MissionManagerAdapter::loadPlayerMissions(Player* player, bool doLock) {
	return ((MissionManagerImplementation*) impl)->loadPlayerMissions(player, doLock);
}

void MissionManagerAdapter::savePlayerMission(Player* player, MissionObject* miso, bool doLock) {
	return ((MissionManagerImplementation*) impl)->savePlayerMission(player, miso, doLock);
}

void MissionManagerAdapter::savePlayerKeys(Player* player, const String& curMisoKeys, const String& finMisoKeys, bool doLock) {
	return ((MissionManagerImplementation*) impl)->savePlayerKeys(player, curMisoKeys, finMisoKeys, doLock);
}

void MissionManagerAdapter::loadMissionScripts() {
	return ((MissionManagerImplementation*) impl)->loadMissionScripts();
}

void MissionManagerAdapter::registerFunctions() {
	return ((MissionManagerImplementation*) impl)->registerFunctions();
}

void MissionManagerAdapter::registerGlobals() {
	return ((MissionManagerImplementation*) impl)->registerGlobals();
}

/*
 *	MissionManagerHelper
 */

MissionManagerHelper* MissionManagerHelper::staticInitializer = MissionManagerHelper::instance();

MissionManagerHelper::MissionManagerHelper() {
	className = "MissionManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void MissionManagerHelper::finalizeHelper() {
	MissionManagerHelper::finalize();
}

DistributedObject* MissionManagerHelper::instantiateObject() {
	return new MissionManager(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionManagerAdapter((MissionManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	MissionManagerServant
 */

MissionManagerServant::MissionManagerServant() {
	_classHelper = MissionManagerHelper::instance();
}

MissionManagerServant::~MissionManagerServant() {
}

void MissionManagerServant::_setStub(DistributedObjectStub* stub) {
	_this = (MissionManager*) stub;
}

DistributedObjectStub* MissionManagerServant::_getStub() {
	return _this;
}

