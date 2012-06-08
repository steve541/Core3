/*
 *	server/zone/objects/tangible/pharmaceutical/EnhancePack.cpp generated by engine3 IDL compiler 0.60
 */

#include "EnhancePack.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

#include "server/zone/objects/building/BuildingObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/managers/player/PlayerManager.h"

/*
 *	EnhancePackStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_,RPC_GETEFFECTIVENESS__,RPC_GETATTRIBUTE__,RPC_GETDURATION__,RPC_ISENHANCEPACK__};

EnhancePack::EnhancePack() : PharmaceuticalObject(DummyConstructorParameter::instance()) {
	EnhancePackImplementation* _implementation = new EnhancePackImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("EnhancePack");
}

EnhancePack::EnhancePack(DummyConstructorParameter* param) : PharmaceuticalObject(param) {
	_setClassName("EnhancePack");
}

EnhancePack::~EnhancePack() {
}



void EnhancePack::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	EnhancePackImplementation* _implementation = static_cast<EnhancePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(values, firstUpdate);
}

void EnhancePack::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	EnhancePackImplementation* _implementation = static_cast<EnhancePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void EnhancePack::loadTemplateData(SharedObjectTemplate* templateData) {
	EnhancePackImplementation* _implementation = static_cast<EnhancePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

int EnhancePack::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	EnhancePackImplementation* _implementation = static_cast<EnhancePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

unsigned int EnhancePack::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	EnhancePackImplementation* _implementation = static_cast<EnhancePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_);
		method.addObjectParameter(healer);
		method.addObjectParameter(patient);
		method.addBooleanParameter(applyBattleFatigue);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->calculatePower(healer, patient, applyBattleFatigue);
}

float EnhancePack::getEffectiveness() {
	EnhancePackImplementation* _implementation = static_cast<EnhancePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEFFECTIVENESS__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getEffectiveness();
}

byte EnhancePack::getAttribute() {
	EnhancePackImplementation* _implementation = static_cast<EnhancePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETATTRIBUTE__);

		return method.executeWithByteReturn();
	} else
		return _implementation->getAttribute();
}

float EnhancePack::getDuration() {
	EnhancePackImplementation* _implementation = static_cast<EnhancePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDURATION__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getDuration();
}

bool EnhancePack::isEnhancePack() {
	EnhancePackImplementation* _implementation = static_cast<EnhancePackImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISENHANCEPACK__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isEnhancePack();
}

DistributedObjectServant* EnhancePack::_getImplementation() {

	_updated = true;
	return _impl;
}

void EnhancePack::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	EnhancePackImplementation
 */

EnhancePackImplementation::EnhancePackImplementation(DummyConstructorParameter* param) : PharmaceuticalObjectImplementation(param) {
	_initializeImplementation();
}


EnhancePackImplementation::~EnhancePackImplementation() {
}


void EnhancePackImplementation::finalize() {
}

void EnhancePackImplementation::_initializeImplementation() {
	_setClassHelper(EnhancePackHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void EnhancePackImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<EnhancePack*>(stub);
	PharmaceuticalObjectImplementation::_setStub(stub);
}

DistributedObjectStub* EnhancePackImplementation::_getStub() {
	return _this.get();
}

EnhancePackImplementation::operator const EnhancePack*() {
	return _this.get();
}

void EnhancePackImplementation::lock(bool doLock) {
	_this.get()->lock(doLock);
}

void EnhancePackImplementation::lock(ManagedObject* obj) {
	_this.get()->lock(obj);
}

void EnhancePackImplementation::rlock(bool doLock) {
	_this.get()->rlock(doLock);
}

void EnhancePackImplementation::wlock(bool doLock) {
	_this.get()->wlock(doLock);
}

void EnhancePackImplementation::wlock(ManagedObject* obj) {
	_this.get()->wlock(obj);
}

void EnhancePackImplementation::unlock(bool doLock) {
	_this.get()->unlock(doLock);
}

void EnhancePackImplementation::runlock(bool doLock) {
	_this.get()->runlock(doLock);
}

void EnhancePackImplementation::_serializationHelperMethod() {
	PharmaceuticalObjectImplementation::_serializationHelperMethod();

	_setClassName("EnhancePack");

}

void EnhancePackImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(EnhancePackImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool EnhancePackImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (PharmaceuticalObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "EnhancePack.effectiveness") {
		TypeInfo<float >::parseFromBinaryStream(&effectiveness, stream);
		return true;
	}

	if (_name == "EnhancePack.duration") {
		TypeInfo<float >::parseFromBinaryStream(&duration, stream);
		return true;
	}

	if (_name == "EnhancePack.attribute") {
		TypeInfo<byte >::parseFromBinaryStream(&attribute, stream);
		return true;
	}


	return false;
}

void EnhancePackImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = EnhancePackImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int EnhancePackImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = PharmaceuticalObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "EnhancePack.effectiveness";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&effectiveness, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "EnhancePack.duration";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&duration, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "EnhancePack.attribute";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<byte >::toBinaryStream(&attribute, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 3;
}

EnhancePackImplementation::EnhancePackImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		setLoggingName("EnhancePack");
	setLoggingName("EnhancePack");
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		effectiveness = 0;
	effectiveness = 0;
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		duration = 0;
	duration = 0;
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		attribute = 0;
	attribute = 0;
}

void EnhancePackImplementation::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		effectiveness = values.getCurrentValue("power");
	effectiveness = values->getCurrentValue("power");
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		super.medicineUseRequired = values.getCurrentValue("skillmodmin");
	PharmaceuticalObjectImplementation::medicineUseRequired = values->getCurrentValue("skillmodmin");
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		setUseCount(values.getCurrentValue("charges"));
	setUseCount(values->getCurrentValue("charges"));
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		duration = values.getCurrentValue("duration");
	duration = values->getCurrentValue("duration");
}

void EnhancePackImplementation::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		super.fillAttributeList(msg, object);
	PharmaceuticalObjectImplementation::fillAttributeList(msg, object);
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		string attributeName = BuffAttribute.getName(attribute);
	String attributeName = BuffAttribute::getName(attribute);
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		string enhace = "examine_enhance_" + attributeName;
	String enhace = "examine_enhance_" + attributeName;
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		string durationStr = "examine_duration_" + attributeName;
	String durationStr = "examine_duration_" + attributeName;
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		msg.insertAttribute(enhace, Math.getPrecision(effectiveness, 0));
	msg->insertAttribute(enhace, Math::getPrecision(effectiveness, 0));
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		msg.insertAttribute(durationStr, Math.getPrecision(duration, 0));
	msg->insertAttribute(durationStr, Math::getPrecision(duration, 0));
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		msg.insertAttribute("healing_ability", super.medicineUseRequired);
	msg->insertAttribute("healing_ability", PharmaceuticalObjectImplementation::medicineUseRequired);
}

void EnhancePackImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		super.loadTemplateData(templateData);
	PharmaceuticalObjectImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		EnhancePackTemplate 
	if (!templateData->isEnhancePackTemplate())	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  			return;
	return;
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		EnhancePackTemplate stimPackTemplate = (EnhancePackTemplate) templateData;
	EnhancePackTemplate* stimPackTemplate = (EnhancePackTemplate*) templateData;
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		effectiveness = stimPackTemplate.getEffectiveness();
	effectiveness = stimPackTemplate->getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		super.medicineUseRequired = stimPackTemplate.getMedicineUse();
	PharmaceuticalObjectImplementation::medicineUseRequired = stimPackTemplate->getMedicineUse();
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		duration = stimPackTemplate.getDuration();
	duration = stimPackTemplate->getDuration();
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		attribute = stimPackTemplate.getAttribute();
	attribute = stimPackTemplate->getAttribute();
}

int EnhancePackImplementation::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		if 
	if (selectedID != 20)	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  			return 1;
	return 1;
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		}
	if (player->getSkillMod("healing_ability") < PharmaceuticalObjectImplementation::medicineUseRequired){
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  			player.sendSystemMessage("@error_message:insufficient_skill");
	player->sendSystemMessage("@error_message:insufficient_skill");
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  			return 0;
	return 0;
}

	else {
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  			string command = "/healenhance ";
	String command = "/healenhance ";
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  			command = command + BuffAttribute.getName(attribute);
	command = command + BuffAttribute::getName(attribute);
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  			command = command + "|";
	command = command + "|";
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  			command = command + String.valueOf(super.getObjectID());
	command = command + String::valueOf(PharmaceuticalObjectImplementation::getObjectID());
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  			player.sendExecuteConsoleCommand(command);
	player->sendExecuteConsoleCommand(command);
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  			return 0;
	return 0;
}
}

unsigned int EnhancePackImplementation::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		float power = getEffectiveness();
	float power = getEffectiveness();
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		ZoneServer 
	if (applyBattleFatigue)	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  			power = power - (power * patient.calculateBFRatio());
	power = power - (power * patient->calculateBFRatio());
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		ZoneServer zoneServer = super.getZoneServer();
	ManagedReference<ZoneServer* > zoneServer = PharmaceuticalObjectImplementation::getZoneServer();
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		PlayerManager playerManager = zoneServer.getPlayerManager();
	ManagedReference<PlayerManager* > playerManager = zoneServer->getPlayerManager();
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		float modEnvironment = (healer.getSkillMod("private_medical_rating") / 100);
	float modEnvironment = (healer->getSkillMod("private_medical_rating") / 100);
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		float modSkill = (float) healer.getSkillMod("healing_wound_treatment");
	float modSkill = (float) healer->getSkillMod("healing_wound_treatment");
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		return power * modEnvironment * ((100 + modSkill) / 100);
	return power * modEnvironment * ((100 + modSkill) / 100);
}

float EnhancePackImplementation::getEffectiveness() {
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		return effectiveness;
	return effectiveness;
}

byte EnhancePackImplementation::getAttribute() {
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		return attribute;
	return attribute;
}

float EnhancePackImplementation::getDuration() {
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		return duration;
	return duration;
}

bool EnhancePackImplementation::isEnhancePack() {
	// server/zone/objects/tangible/pharmaceutical/EnhancePack.idl():  		return true;
	return true;
}

/*
 *	EnhancePackAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


EnhancePackAdapter::EnhancePackAdapter(EnhancePack* obj) : PharmaceuticalObjectAdapter(obj) {
}

void EnhancePackAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		}
		break;
	case RPC_CALCULATEPOWER__CREATUREOBJECT_CREATUREOBJECT_BOOL_:
		{
			resp->insertInt(calculatePower(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getBooleanParameter()));
		}
		break;
	case RPC_GETEFFECTIVENESS__:
		{
			resp->insertFloat(getEffectiveness());
		}
		break;
	case RPC_GETATTRIBUTE__:
		{
			resp->insertByte(getAttribute());
		}
		break;
	case RPC_GETDURATION__:
		{
			resp->insertFloat(getDuration());
		}
		break;
	case RPC_ISENHANCEPACK__:
		{
			resp->insertBoolean(isEnhancePack());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

int EnhancePackAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<EnhancePack*>(stub))->handleObjectMenuSelect(player, selectedID);
}

unsigned int EnhancePackAdapter::calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue) {
	return (static_cast<EnhancePack*>(stub))->calculatePower(healer, patient, applyBattleFatigue);
}

float EnhancePackAdapter::getEffectiveness() {
	return (static_cast<EnhancePack*>(stub))->getEffectiveness();
}

byte EnhancePackAdapter::getAttribute() {
	return (static_cast<EnhancePack*>(stub))->getAttribute();
}

float EnhancePackAdapter::getDuration() {
	return (static_cast<EnhancePack*>(stub))->getDuration();
}

bool EnhancePackAdapter::isEnhancePack() {
	return (static_cast<EnhancePack*>(stub))->isEnhancePack();
}

/*
 *	EnhancePackHelper
 */

EnhancePackHelper* EnhancePackHelper::staticInitializer = EnhancePackHelper::instance();

EnhancePackHelper::EnhancePackHelper() {
	className = "EnhancePack";

	Core::getObjectBroker()->registerClass(className, this);
}

void EnhancePackHelper::finalizeHelper() {
	EnhancePackHelper::finalize();
}

DistributedObject* EnhancePackHelper::instantiateObject() {
	return new EnhancePack(DummyConstructorParameter::instance());
}

DistributedObjectServant* EnhancePackHelper::instantiateServant() {
	return new EnhancePackImplementation();
}

DistributedObjectAdapter* EnhancePackHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new EnhancePackAdapter(static_cast<EnhancePack*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

