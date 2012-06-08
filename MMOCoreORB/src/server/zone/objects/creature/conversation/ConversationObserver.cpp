/*
 *	server/zone/objects/creature/conversation/ConversationObserver.cpp generated by engine3 IDL compiler 0.60
 */

#include "ConversationObserver.h"

/*
 *	ConversationObserverStub
 */

enum {RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_ = 6,};

ConversationObserver::ConversationObserver(ConversationTemplate* conversationTemplate) : Observer(DummyConstructorParameter::instance()) {
	ConversationObserverImplementation* _implementation = new ConversationObserverImplementation(conversationTemplate);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ConversationObserver");
}

ConversationObserver::ConversationObserver(DummyConstructorParameter* param) : Observer(param) {
	_setClassName("ConversationObserver");
}

ConversationObserver::~ConversationObserver() {
}



int ConversationObserver::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	ConversationObserverImplementation* _implementation = static_cast<ConversationObserverImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(eventType, observable, arg1, arg2);
}

ConversationScreen* ConversationObserver::getNextConversationScreen(CreatureObject* conversingPlayer, int selectedOption, CreatureObject* conversingNPC) {
	ConversationObserverImplementation* _implementation = static_cast<ConversationObserverImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getNextConversationScreen(conversingPlayer, selectedOption, conversingNPC);
}

ConversationScreen* ConversationObserver::runScreenHandlers(CreatureObject* conversingPlayer, CreatureObject* conversingNPC, int selectedOption, ConversationScreen* conversationScreen) {
	ConversationObserverImplementation* _implementation = static_cast<ConversationObserverImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->runScreenHandlers(conversingPlayer, conversingNPC, selectedOption, conversationScreen);
}

DistributedObjectServant* ConversationObserver::_getImplementation() {

	_updated = true;
	return _impl;
}

void ConversationObserver::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ConversationObserverImplementation
 */

ConversationObserverImplementation::ConversationObserverImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}


ConversationObserverImplementation::~ConversationObserverImplementation() {
}


void ConversationObserverImplementation::finalize() {
}

void ConversationObserverImplementation::_initializeImplementation() {
	_setClassHelper(ConversationObserverHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ConversationObserverImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ConversationObserver*>(stub);
	ObserverImplementation::_setStub(stub);
}

DistributedObjectStub* ConversationObserverImplementation::_getStub() {
	return _this.get();
}

ConversationObserverImplementation::operator const ConversationObserver*() {
	return _this.get();
}

void ConversationObserverImplementation::lock(bool doLock) {
	_this.get()->lock(doLock);
}

void ConversationObserverImplementation::lock(ManagedObject* obj) {
	_this.get()->lock(obj);
}

void ConversationObserverImplementation::rlock(bool doLock) {
	_this.get()->rlock(doLock);
}

void ConversationObserverImplementation::wlock(bool doLock) {
	_this.get()->wlock(doLock);
}

void ConversationObserverImplementation::wlock(ManagedObject* obj) {
	_this.get()->wlock(obj);
}

void ConversationObserverImplementation::unlock(bool doLock) {
	_this.get()->unlock(doLock);
}

void ConversationObserverImplementation::runlock(bool doLock) {
	_this.get()->runlock(doLock);
}

void ConversationObserverImplementation::_serializationHelperMethod() {
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("ConversationObserver");

}

void ConversationObserverImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ConversationObserverImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ConversationObserverImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ObserverImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "ConversationObserver.conversationTemplate") {
		TypeInfo<Reference<ConversationTemplate* > >::parseFromBinaryStream(&conversationTemplate, stream);
		return true;
	}

	if (_name == "ConversationObserver.screenHandlers") {
		TypeInfo<VectorMap<String, ScreenHandler*> >::parseFromBinaryStream(&screenHandlers, stream);
		return true;
	}


	return false;
}

void ConversationObserverImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ConversationObserverImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ConversationObserverImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ObserverImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "ConversationObserver.conversationTemplate";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Reference<ConversationTemplate* > >::toBinaryStream(&conversationTemplate, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_name = "ConversationObserver.screenHandlers";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<VectorMap<String, ScreenHandler*> >::toBinaryStream(&screenHandlers, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 2;
}

ConversationScreen* ConversationObserverImplementation::getInitialScreen() {
	// server/zone/objects/creature/conversation/ConversationObserver.idl():  		return conversationTemplate.getInitialScreen();
	return conversationTemplate->getInitialScreen();
}

ConversationScreen* ConversationObserverImplementation::getConversationScreen(const String& screenName) {
	// server/zone/objects/creature/conversation/ConversationObserver.idl():  		return conversationTemplate.getScreen(screenName);
	return conversationTemplate->getScreen(screenName);
}

void ConversationObserverImplementation::registerScreenHandler(const String& screenId, ScreenHandler* screenHandler) {
	// server/zone/objects/creature/conversation/ConversationObserver.idl():  	}
	if (!(&screenHandlers)->contains(screenId)){
	// server/zone/objects/creature/conversation/ConversationObserver.idl():  			screenHandlers.put(screenId, screenHandler);
	(&screenHandlers)->put(screenId, screenHandler);
}
}

void ConversationObserverImplementation::removeScreenHandler(const String& screenId) {
	// server/zone/objects/creature/conversation/ConversationObserver.idl():  	}
	if ((&screenHandlers)->contains(screenId)){
	// server/zone/objects/creature/conversation/ConversationObserver.idl():  			screenHandlers.drop(screenId);
	(&screenHandlers)->drop(screenId);
}
}

/*
 *	ConversationObserverAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ConversationObserverAdapter::ConversationObserverAdapter(ConversationObserver* obj) : ObserverAdapter(obj) {
}

void ConversationObserverAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		{
			resp->insertSignedInt(notifyObserverEvent(inv->getUnsignedIntParameter(), static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()), inv->getSignedLongParameter()));
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

int ConversationObserverAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<ConversationObserver*>(stub))->notifyObserverEvent(eventType, observable, arg1, arg2);
}

/*
 *	ConversationObserverHelper
 */

ConversationObserverHelper* ConversationObserverHelper::staticInitializer = ConversationObserverHelper::instance();

ConversationObserverHelper::ConversationObserverHelper() {
	className = "ConversationObserver";

	Core::getObjectBroker()->registerClass(className, this);
}

void ConversationObserverHelper::finalizeHelper() {
	ConversationObserverHelper::finalize();
}

DistributedObject* ConversationObserverHelper::instantiateObject() {
	return new ConversationObserver(DummyConstructorParameter::instance());
}

DistributedObjectServant* ConversationObserverHelper::instantiateServant() {
	return new ConversationObserverImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ConversationObserverHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ConversationObserverAdapter(static_cast<ConversationObserver*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

