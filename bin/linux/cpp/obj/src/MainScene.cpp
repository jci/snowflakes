#include <hxcpp.h>

#ifndef INCLUDED_MainScene
#include <MainScene.h>
#endif
#ifndef INCLUDED_Snowflake
#include <Snowflake.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void MainScene_obj::__construct()
{
HX_STACK_FRAME("MainScene","new",0x8bdcb8a5,"MainScene.new","MainScene.hx",5,0xb84de26b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//MainScene_obj::~MainScene_obj() { }

Dynamic MainScene_obj::__CreateEmpty() { return  new MainScene_obj; }
hx::ObjectPtr< MainScene_obj > MainScene_obj::__new()
{  hx::ObjectPtr< MainScene_obj > result = new MainScene_obj();
	result->__construct();
	return result;}

Dynamic MainScene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainScene_obj > result = new MainScene_obj();
	result->__construct();
	return result;}

Void MainScene_obj::begin( ){
{
		HX_STACK_FRAME("MainScene","begin",0xde1d2dae,"MainScene.begin","MainScene.hx",11,0xb84de26b)
		HX_STACK_THIS(this)
	}
return null();
}


Void MainScene_obj::update( ){
{
		HX_STACK_FRAME("MainScene","update",0x679956e4,"MainScene.update","MainScene.hx",16,0xb84de26b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		hx::SubEq(this->spawnTimer,::com::haxepunk::HXP_obj::elapsed);
		HX_STACK_LINE(18)
		if (((this->spawnTimer < (int)0))){
			HX_STACK_LINE(20)
			this->spawn();
		}
		HX_STACK_LINE(23)
		this->super::update();
	}
return null();
}


Void MainScene_obj::spawn( ){
{
		HX_STACK_FRAME("MainScene","spawn",0xaf2de1c0,"MainScene.spawn","MainScene.hx",28,0xb84de26b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		Float _x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(30)
		Float _y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(32)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		Float _g1 = (_g * ::com::haxepunk::HXP_obj::width);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(32)
		_x = _g1;
		HX_STACK_LINE(33)
		_y = ((int)0 - (Float(::com::haxepunk::HXP_obj::halfHeight) / Float((int)3)));
		HX_STACK_LINE(35)
		::Snowflake _g2 = ::Snowflake_obj::__new(_x,_y);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(35)
		this->add(_g2);
		HX_STACK_LINE(36)
		this->spawnTimer = 0.1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainScene_obj,spawn,(void))


MainScene_obj::MainScene_obj()
{
}

Dynamic MainScene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"spawn") ) { return spawn_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"spawnTimer") ) { return spawnTimer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MainScene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"spawnTimer") ) { spawnTimer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainScene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("spawnTimer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(MainScene_obj,spawnTimer),HX_CSTRING("spawnTimer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("spawnTimer"),
	HX_CSTRING("begin"),
	HX_CSTRING("update"),
	HX_CSTRING("spawn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainScene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainScene_obj::__mClass,"__mClass");
};

#endif

Class MainScene_obj::__mClass;

void MainScene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MainScene"), hx::TCanCast< MainScene_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void MainScene_obj::__boot()
{
}

