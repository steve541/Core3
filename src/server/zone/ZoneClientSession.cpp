/*
 *	server/zone/ZoneClientSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "ZoneClientSession.h"

/*
 *	ZoneClientSessionStub
 */

ZoneClientSession::ZoneClientSession(DatagramServiceThread* serv, Socket* sock, SocketAddress* addr) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new ZoneClientSessionImplementation(serv, sock, addr);
	_impl->_setStub(this);
}

ZoneClientSession::ZoneClientSession(DummyConstructorParameter* param) : ManagedObject(param) {
}

ZoneClientSession::~ZoneClientSession() {
}

void ZoneClientSession::sendMessage(BaseMessage* msg) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(msg);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->sendMessage(msg);
}

void ZoneClientSession::sendMessage(StandaloneBaseMessage* msg) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(msg);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->sendMessage(msg);
}

void ZoneClientSession::disconnect() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->disconnect();
}

void ZoneClientSession::disconnect(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->disconnect(doLock);
}

void ZoneClientSession::closeConnection(bool lockPlayer, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addBooleanParameter(lockPlayer);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->closeConnection(lockPlayer, doLock);
}

void ZoneClientSession::acquire() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->acquire();
}

void ZoneClientSession::release() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->release();
}

String& ZoneClientSession::getAddress() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithAsciiReturn(_return_getAddress);
		return _return_getAddress;
	} else
		return ((ZoneClientSessionImplementation*) _impl)->getAddress();
}

void ZoneClientSession::_lock(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->lock(doLock);
}

void ZoneClientSession::_unlock(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->unlock(doLock);
}

void ZoneClientSession::setSessionKey(unsigned int key) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addUnsignedIntParameter(key);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->setSessionKey(key);
}

unsigned int ZoneClientSession::getSessionKey() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((ZoneClientSessionImplementation*) _impl)->getSessionKey();
}

/*
 *	ZoneClientSessionImplementation
 */

ZoneClientSessionImplementation::~ZoneClientSessionImplementation() {
}

void ZoneClientSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ZoneClientSession*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ZoneClientSessionImplementation::_getStub() {
	return _this;
}

void ZoneClientSessionImplementation::setSessionKey(unsigned int key) {
	// server/zone/ZoneClientSession.idl(88):  sessionKey = key;
	sessionKey = key;
}

unsigned int ZoneClientSessionImplementation::getSessionKey() {
	// server/zone/ZoneClientSession.idl(96):  return sessionKey;
	return sessionKey;
}

/*
 *	ZoneClientSessionAdapter
 */

ZoneClientSessionAdapter::ZoneClientSessionAdapter(ZoneClientSessionImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* ZoneClientSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendMessage((BaseMessage*) inv->getObjectParameter());
		break;
	case 7:
		sendMessage((StandaloneBaseMessage*) inv->getObjectParameter());
		break;
	case 8:
		disconnect();
		break;
	case 9:
		disconnect(inv->getBooleanParameter());
		break;
	case 10:
		closeConnection(inv->getBooleanParameter(), inv->getBooleanParameter());
		break;
	case 11:
		acquire();
		break;
	case 12:
		release();
		break;
	case 13:
		resp->insertAscii(getAddress());
		break;
	case 14:
		lock(inv->getBooleanParameter());
		break;
	case 15:
		unlock(inv->getBooleanParameter());
		break;
	case 16:
		setSessionKey(inv->getUnsignedIntParameter());
		break;
	case 17:
		resp->insertInt(getSessionKey());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneClientSessionAdapter::sendMessage(BaseMessage* msg) {
	return ((ZoneClientSessionImplementation*) impl)->sendMessage(msg);
}

void ZoneClientSessionAdapter::sendMessage(StandaloneBaseMessage* msg) {
	return ((ZoneClientSessionImplementation*) impl)->sendMessage(msg);
}

void ZoneClientSessionAdapter::disconnect() {
	return ((ZoneClientSessionImplementation*) impl)->disconnect();
}

void ZoneClientSessionAdapter::disconnect(bool doLock) {
	return ((ZoneClientSessionImplementation*) impl)->disconnect(doLock);
}

void ZoneClientSessionAdapter::closeConnection(bool lockPlayer, bool doLock) {
	return ((ZoneClientSessionImplementation*) impl)->closeConnection(lockPlayer, doLock);
}

void ZoneClientSessionAdapter::acquire() {
	return ((ZoneClientSessionImplementation*) impl)->acquire();
}

void ZoneClientSessionAdapter::release() {
	return ((ZoneClientSessionImplementation*) impl)->release();
}

String& ZoneClientSessionAdapter::getAddress() {
	return ((ZoneClientSessionImplementation*) impl)->getAddress();
}

void ZoneClientSessionAdapter::lock(bool doLock) {
	return ((ZoneClientSessionImplementation*) impl)->lock(doLock);
}

void ZoneClientSessionAdapter::unlock(bool doLock) {
	return ((ZoneClientSessionImplementation*) impl)->unlock(doLock);
}

void ZoneClientSessionAdapter::setSessionKey(unsigned int key) {
	return ((ZoneClientSessionImplementation*) impl)->setSessionKey(key);
}

unsigned int ZoneClientSessionAdapter::getSessionKey() {
	return ((ZoneClientSessionImplementation*) impl)->getSessionKey();
}

/*
 *	ZoneClientSessionHelper
 */

ZoneClientSessionHelper* ZoneClientSessionHelper::staticInitializer = ZoneClientSessionHelper::instance();

ZoneClientSessionHelper::ZoneClientSessionHelper() {
	className = "ZoneClientSession";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ZoneClientSessionHelper::finalizeHelper() {
	ZoneClientSessionHelper::finalize();
}

DistributedObject* ZoneClientSessionHelper::instantiateObject() {
	return new ZoneClientSession(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ZoneClientSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ZoneClientSessionAdapter((ZoneClientSessionImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

