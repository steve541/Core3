/*
 *	server/zone/objects/scene/SceneObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef SCENEOBJECT_H_
#define SCENEOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class ContainerObject;

class ZoneProcessServerImplementation;

#include "engine/core/ManagedObject.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedReference.h"

#include "engine/util/Coordinate.h"

#include "engine/util/QuadTreeEntry.h"

#include "system/io/Serializable.h"

#include "engine/lua/Lua.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject : public ManagedObject {
public:
	SceneObject(Lua* templateData, SceneObject* parent = NULL);

	unsigned long long getObjectID();

	void redeploy();

	void scheduleUndeploy();

	void undeploy();

	void removeUndeploymentEvent();

	bool isPlayer();

protected:
	SceneObject(DummyConstructorParameter* param);

	virtual ~SceneObject();

	unsigned long long _getObjectID();

	friend class SceneObjectHelper;
};

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

#include "engine/core/ManagedObjectImplementation.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObjectImplementation : public ManagedObjectImplementation, public QuadTreeEntry, public Serializable {
public:
	static bool registered;

	SceneObjectImplementation(Lua* templateData, SceneObject* parent = NULL);

	unsigned long long getObjectID();

	void redeploy();

	void scheduleUndeploy();

	void undeploy();

	void removeUndeploymentEvent();

	bool isPlayer();

	SceneObject* _this;

protected:
	virtual ~SceneObjectImplementation();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();
};

class SceneObjectAdapter : public ManagedObjectAdapter {
public:
	SceneObjectAdapter(SceneObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	unsigned long long getObjectID();

	void redeploy();

	void scheduleUndeploy();

	void undeploy();

	void removeUndeploymentEvent();

	bool isPlayer();

};

class SceneObjectHelper : public DistributedObjectClassHelper, public Singleton<SceneObjectHelper> {
	static SceneObjectHelper* staticInitializer;

public:
	SceneObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SceneObjectHelper>;
};

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

#endif /*SCENEOBJECT_H_*/
