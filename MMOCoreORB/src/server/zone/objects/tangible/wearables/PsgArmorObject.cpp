/*
 *	server/zone/objects/tangible/wearables/PsgArmorObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "PsgArmorObject.h"

#include "server/zone/Zone.h"

/*
 *	PsgArmorObjectStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_ISPSGARMOROBJECT__,};

PsgArmorObject::PsgArmorObject() : ArmorObject(DummyConstructorParameter::instance()) {
	PsgArmorObjectImplementation* _implementation = new PsgArmorObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("PsgArmorObject");
}

PsgArmorObject::PsgArmorObject(DummyConstructorParameter* param) : ArmorObject(param) {
	_setClassName("PsgArmorObject");
}

PsgArmorObject::~PsgArmorObject() {
}



void PsgArmorObject::initializeTransientMembers() {
	PsgArmorObjectImplementation* _implementation = static_cast<PsgArmorObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

bool PsgArmorObject::isPsgArmorObject() {
	PsgArmorObjectImplementation* _implementation = static_cast<PsgArmorObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISPSGARMOROBJECT__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isPsgArmorObject();
}

void PsgArmorObject::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	PsgArmorObjectImplementation* _implementation = static_cast<PsgArmorObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void PsgArmorObject::updateCraftingValues(CraftingValues* schematic, bool firstUpdate) {
	PsgArmorObjectImplementation* _implementation = static_cast<PsgArmorObjectImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(schematic, firstUpdate);
}

DistributedObjectServant* PsgArmorObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void PsgArmorObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PsgArmorObjectImplementation
 */

PsgArmorObjectImplementation::PsgArmorObjectImplementation(DummyConstructorParameter* param) : ArmorObjectImplementation(param) {
	_initializeImplementation();
}


PsgArmorObjectImplementation::~PsgArmorObjectImplementation() {
}


void PsgArmorObjectImplementation::finalize() {
}

void PsgArmorObjectImplementation::_initializeImplementation() {
	_setClassHelper(PsgArmorObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PsgArmorObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PsgArmorObject*>(stub);
	ArmorObjectImplementation::_setStub(stub);
}

DistributedObjectStub* PsgArmorObjectImplementation::_getStub() {
	return _this.get();
}

PsgArmorObjectImplementation::operator const PsgArmorObject*() {
	return _this.get();
}

void PsgArmorObjectImplementation::lock(bool doLock) {
	_this.get()->lock(doLock);
}

void PsgArmorObjectImplementation::lock(ManagedObject* obj) {
	_this.get()->lock(obj);
}

void PsgArmorObjectImplementation::rlock(bool doLock) {
	_this.get()->rlock(doLock);
}

void PsgArmorObjectImplementation::wlock(bool doLock) {
	_this.get()->wlock(doLock);
}

void PsgArmorObjectImplementation::wlock(ManagedObject* obj) {
	_this.get()->wlock(obj);
}

void PsgArmorObjectImplementation::unlock(bool doLock) {
	_this.get()->unlock(doLock);
}

void PsgArmorObjectImplementation::runlock(bool doLock) {
	_this.get()->runlock(doLock);
}

void PsgArmorObjectImplementation::_serializationHelperMethod() {
	ArmorObjectImplementation::_serializationHelperMethod();

	_setClassName("PsgArmorObject");

}

void PsgArmorObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(PsgArmorObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PsgArmorObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ArmorObjectImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void PsgArmorObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PsgArmorObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PsgArmorObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ArmorObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

PsgArmorObjectImplementation::PsgArmorObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/wearables/PsgArmorObject.idl():  		Logger.setLoggingName("PsgArmorObject");
	Logger::setLoggingName("PsgArmorObject");
}

bool PsgArmorObjectImplementation::isPsgArmorObject() {
	// server/zone/objects/tangible/wearables/PsgArmorObject.idl():  		return true;
	return true;
}

/*
 *	PsgArmorObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


PsgArmorObjectAdapter::PsgArmorObjectAdapter(PsgArmorObject* obj) : ArmorObjectAdapter(obj) {
}

void PsgArmorObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			initializeTransientMembers();
		}
		break;
	case RPC_ISPSGARMOROBJECT__:
		{
			resp->insertBoolean(isPsgArmorObject());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void PsgArmorObjectAdapter::initializeTransientMembers() {
	(static_cast<PsgArmorObject*>(stub))->initializeTransientMembers();
}

bool PsgArmorObjectAdapter::isPsgArmorObject() {
	return (static_cast<PsgArmorObject*>(stub))->isPsgArmorObject();
}

/*
 *	PsgArmorObjectHelper
 */

PsgArmorObjectHelper* PsgArmorObjectHelper::staticInitializer = PsgArmorObjectHelper::instance();

PsgArmorObjectHelper::PsgArmorObjectHelper() {
	className = "PsgArmorObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void PsgArmorObjectHelper::finalizeHelper() {
	PsgArmorObjectHelper::finalize();
}

DistributedObject* PsgArmorObjectHelper::instantiateObject() {
	return new PsgArmorObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* PsgArmorObjectHelper::instantiateServant() {
	return new PsgArmorObjectImplementation();
}

DistributedObjectAdapter* PsgArmorObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PsgArmorObjectAdapter(static_cast<PsgArmorObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

