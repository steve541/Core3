/*
 *	server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "CityTreasuryWithdrawalSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/region/CityRegion.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "server/zone/managers/structure/StructureManager.h"

/*
 *	CityTreasuryWithdrawalSessionStub
 */

enum {RPC_SETREASON__STRING_ = 6,RPC_INITIALIZESESSION__,RPC_SENDTRANSFERBOX__STRING_,RPC_WITHDRAWCREDITS__INT_,RPC_CANCELSESSION__,RPC_CLEARSESSION__};

CityTreasuryWithdrawalSession::CityTreasuryWithdrawalSession(CreatureObject* creature, CityRegion* city, SceneObject* terminal) : Facade(DummyConstructorParameter::instance()) {
	CityTreasuryWithdrawalSessionImplementation* _implementation = new CityTreasuryWithdrawalSessionImplementation(creature, city, terminal);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("CityTreasuryWithdrawalSession");
}

CityTreasuryWithdrawalSession::CityTreasuryWithdrawalSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("CityTreasuryWithdrawalSession");
}

CityTreasuryWithdrawalSession::~CityTreasuryWithdrawalSession() {
}



void CityTreasuryWithdrawalSession::setReason(const String& r) {
	CityTreasuryWithdrawalSessionImplementation* _implementation = static_cast<CityTreasuryWithdrawalSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETREASON__STRING_);
		method.addAsciiParameter(r);

		method.executeWithVoidReturn();
	} else
		_implementation->setReason(r);
}

int CityTreasuryWithdrawalSession::initializeSession() {
	CityTreasuryWithdrawalSessionImplementation* _implementation = static_cast<CityTreasuryWithdrawalSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->initializeSession();
}

int CityTreasuryWithdrawalSession::sendTransferBox(const String& reason) {
	CityTreasuryWithdrawalSessionImplementation* _implementation = static_cast<CityTreasuryWithdrawalSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDTRANSFERBOX__STRING_);
		method.addAsciiParameter(reason);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->sendTransferBox(reason);
}

int CityTreasuryWithdrawalSession::withdrawCredits(int value) {
	CityTreasuryWithdrawalSessionImplementation* _implementation = static_cast<CityTreasuryWithdrawalSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_WITHDRAWCREDITS__INT_);
		method.addSignedIntParameter(value);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->withdrawCredits(value);
}

int CityTreasuryWithdrawalSession::cancelSession() {
	CityTreasuryWithdrawalSessionImplementation* _implementation = static_cast<CityTreasuryWithdrawalSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->cancelSession();
}

int CityTreasuryWithdrawalSession::clearSession() {
	CityTreasuryWithdrawalSessionImplementation* _implementation = static_cast<CityTreasuryWithdrawalSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->clearSession();
}

DistributedObjectServant* CityTreasuryWithdrawalSession::_getImplementation() {

	_updated = true;
	return _impl;
}

void CityTreasuryWithdrawalSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CityTreasuryWithdrawalSessionImplementation
 */

CityTreasuryWithdrawalSessionImplementation::CityTreasuryWithdrawalSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


CityTreasuryWithdrawalSessionImplementation::~CityTreasuryWithdrawalSessionImplementation() {
}


void CityTreasuryWithdrawalSessionImplementation::finalize() {
}

void CityTreasuryWithdrawalSessionImplementation::_initializeImplementation() {
	_setClassHelper(CityTreasuryWithdrawalSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CityTreasuryWithdrawalSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CityTreasuryWithdrawalSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* CityTreasuryWithdrawalSessionImplementation::_getStub() {
	return _this.get();
}

CityTreasuryWithdrawalSessionImplementation::operator const CityTreasuryWithdrawalSession*() {
	return _this.get();
}

void CityTreasuryWithdrawalSessionImplementation::lock(bool doLock) {
	_this.get()->lock(doLock);
}

void CityTreasuryWithdrawalSessionImplementation::lock(ManagedObject* obj) {
	_this.get()->lock(obj);
}

void CityTreasuryWithdrawalSessionImplementation::rlock(bool doLock) {
	_this.get()->rlock(doLock);
}

void CityTreasuryWithdrawalSessionImplementation::wlock(bool doLock) {
	_this.get()->wlock(doLock);
}

void CityTreasuryWithdrawalSessionImplementation::wlock(ManagedObject* obj) {
	_this.get()->wlock(obj);
}

void CityTreasuryWithdrawalSessionImplementation::unlock(bool doLock) {
	_this.get()->unlock(doLock);
}

void CityTreasuryWithdrawalSessionImplementation::runlock(bool doLock) {
	_this.get()->runlock(doLock);
}

void CityTreasuryWithdrawalSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("CityTreasuryWithdrawalSession");

}

void CityTreasuryWithdrawalSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CityTreasuryWithdrawalSessionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CityTreasuryWithdrawalSessionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (FacadeImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "CityTreasuryWithdrawalSession.creatureObject") {
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&creatureObject, stream);
		return true;
	}

	if (_name == "CityTreasuryWithdrawalSession.cityRegion") {
		TypeInfo<ManagedWeakReference<CityRegion* > >::parseFromBinaryStream(&cityRegion, stream);
		return true;
	}

	if (_name == "CityTreasuryWithdrawalSession.terminalObject") {
		TypeInfo<ManagedWeakReference<SceneObject* > >::parseFromBinaryStream(&terminalObject, stream);
		return true;
	}

	if (_name == "CityTreasuryWithdrawalSession.reason") {
		TypeInfo<String >::parseFromBinaryStream(&reason, stream);
		return true;
	}


	return false;
}

void CityTreasuryWithdrawalSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CityTreasuryWithdrawalSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CityTreasuryWithdrawalSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "CityTreasuryWithdrawalSession.creatureObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&creatureObject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "CityTreasuryWithdrawalSession.cityRegion";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CityRegion* > >::toBinaryStream(&cityRegion, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "CityTreasuryWithdrawalSession.terminalObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<SceneObject* > >::toBinaryStream(&terminalObject, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "CityTreasuryWithdrawalSession.reason";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&reason, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 4;
}

CityTreasuryWithdrawalSessionImplementation::CityTreasuryWithdrawalSessionImplementation(CreatureObject* creature, CityRegion* city, SceneObject* terminal) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		Logger.setLoggingName("CityTreasuryWithdrawalSession");
	Logger::setLoggingName("CityTreasuryWithdrawalSession");
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		creatureObject = creature;
	creatureObject = creature;
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		cityRegion = city;
	cityRegion = city;
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		terminalObject = terminal;
	terminalObject = terminal;
}

void CityTreasuryWithdrawalSessionImplementation::setReason(const String& r) {
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		reason = r;
	reason = r;
}

int CityTreasuryWithdrawalSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		creatureObject.dropActiveSession(SessionFacadeType.CITYWITHDRAW);
	creatureObject.get()->dropActiveSession(SessionFacadeType::CITYWITHDRAW);
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		return 0;
	return 0;
}

int CityTreasuryWithdrawalSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/CityTreasuryWithdrawalSession.idl():  		return 0;
	return 0;
}

/*
 *	CityTreasuryWithdrawalSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


CityTreasuryWithdrawalSessionAdapter::CityTreasuryWithdrawalSessionAdapter(CityTreasuryWithdrawalSession* obj) : FacadeAdapter(obj) {
}

void CityTreasuryWithdrawalSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_SETREASON__STRING_:
		{
			String r; 
			setReason(inv->getAsciiParameter(r));
		}
		break;
	case RPC_INITIALIZESESSION__:
		{
			resp->insertSignedInt(initializeSession());
		}
		break;
	case RPC_SENDTRANSFERBOX__STRING_:
		{
			String reason; 
			resp->insertSignedInt(sendTransferBox(inv->getAsciiParameter(reason)));
		}
		break;
	case RPC_WITHDRAWCREDITS__INT_:
		{
			resp->insertSignedInt(withdrawCredits(inv->getSignedIntParameter()));
		}
		break;
	case RPC_CANCELSESSION__:
		{
			resp->insertSignedInt(cancelSession());
		}
		break;
	case RPC_CLEARSESSION__:
		{
			resp->insertSignedInt(clearSession());
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void CityTreasuryWithdrawalSessionAdapter::setReason(const String& r) {
	(static_cast<CityTreasuryWithdrawalSession*>(stub))->setReason(r);
}

int CityTreasuryWithdrawalSessionAdapter::initializeSession() {
	return (static_cast<CityTreasuryWithdrawalSession*>(stub))->initializeSession();
}

int CityTreasuryWithdrawalSessionAdapter::sendTransferBox(const String& reason) {
	return (static_cast<CityTreasuryWithdrawalSession*>(stub))->sendTransferBox(reason);
}

int CityTreasuryWithdrawalSessionAdapter::withdrawCredits(int value) {
	return (static_cast<CityTreasuryWithdrawalSession*>(stub))->withdrawCredits(value);
}

int CityTreasuryWithdrawalSessionAdapter::cancelSession() {
	return (static_cast<CityTreasuryWithdrawalSession*>(stub))->cancelSession();
}

int CityTreasuryWithdrawalSessionAdapter::clearSession() {
	return (static_cast<CityTreasuryWithdrawalSession*>(stub))->clearSession();
}

/*
 *	CityTreasuryWithdrawalSessionHelper
 */

CityTreasuryWithdrawalSessionHelper* CityTreasuryWithdrawalSessionHelper::staticInitializer = CityTreasuryWithdrawalSessionHelper::instance();

CityTreasuryWithdrawalSessionHelper::CityTreasuryWithdrawalSessionHelper() {
	className = "CityTreasuryWithdrawalSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void CityTreasuryWithdrawalSessionHelper::finalizeHelper() {
	CityTreasuryWithdrawalSessionHelper::finalize();
}

DistributedObject* CityTreasuryWithdrawalSessionHelper::instantiateObject() {
	return new CityTreasuryWithdrawalSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* CityTreasuryWithdrawalSessionHelper::instantiateServant() {
	return new CityTreasuryWithdrawalSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CityTreasuryWithdrawalSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CityTreasuryWithdrawalSessionAdapter(static_cast<CityTreasuryWithdrawalSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

