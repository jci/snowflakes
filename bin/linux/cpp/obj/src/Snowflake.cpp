#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Snowflake
#include <Snowflake.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

Void Snowflake_obj::__construct(Float _x,Float _y)
{
HX_STACK_FRAME("Snowflake","new",0x1e35d324,"Snowflake.new","Snowflake.hx",16,0x1bafdccc)
HX_STACK_THIS(this)
HX_STACK_ARG(_x,"_x")
HX_STACK_ARG(_y,"_y")
{
	HX_STACK_LINE(17)
	super::__construct((  ((this->followCamera)) ? Float((this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(this->x) ),(  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) ),null(),null());
	HX_STACK_LINE(19)
	::com::haxepunk::ds::Either _g5;		HX_STACK_VAR(_g5,"_g5");
	struct _Function_1_1{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Snowflake.hx",19,0x1bafdccc)
			{
				HX_STACK_LINE(19)
				::com::haxepunk::graphics::atlas::AtlasData _g2;		HX_STACK_VAR(_g2,"_g2");
				struct _Function_2_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Snowflake.hx",19,0x1bafdccc)
						{
							HX_STACK_LINE(19)
							::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(19)
							{
								HX_STACK_LINE(19)
								::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
								HX_STACK_LINE(19)
								if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(HX_CSTRING("graphics/snowflake.png")))){
									HX_STACK_LINE(19)
									::com::haxepunk::graphics::atlas::AtlasData _g = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(HX_CSTRING("graphics/snowflake.png"));		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(19)
									data1 = _g;
								}
								else{
									HX_STACK_LINE(19)
									::flash::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/snowflake.png"));		HX_STACK_VAR(bitmap,"bitmap");
									HX_STACK_LINE(19)
									if (((bitmap != null()))){
										HX_STACK_LINE(19)
										::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_CSTRING("graphics/snowflake.png"),null());		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(19)
										data1 = _g1;
									}
								}
								HX_STACK_LINE(19)
								data = data1;
							}
							HX_STACK_LINE(19)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				_g2 = _Function_2_1::Block();
				HX_STACK_LINE(19)
				::com::haxepunk::graphics::atlas::AtlasRegion _g3 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(19)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g3);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(19)
				return e;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::com::haxepunk::ds::Either Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Snowflake.hx",19,0x1bafdccc)
			{
				HX_STACK_LINE(19)
				::flash::display::BitmapData _g4 = ::com::haxepunk::HXP_obj::getBitmap(HX_CSTRING("graphics/snowflake.png"));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(19)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g4);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(19)
				return e;
			}
			return null();
		}
	};
	HX_STACK_LINE(19)
	_g5 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_1_1::Block()) : ::com::haxepunk::ds::Either(_Function_1_2::Block()) );
	HX_STACK_LINE(19)
	::com::haxepunk::graphics::Image _g6 = ::com::haxepunk::graphics::Image_obj::__new(_g5,null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(19)
	this->_image = _g6;
	HX_STACK_LINE(22)
	int _g7 = this->_image->get_width();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(22)
	Float _g8 = (Float(_g7) / Float((int)2));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(22)
	this->_image->originX = _g8;
	HX_STACK_LINE(23)
	int _g9 = this->_image->get_height();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(23)
	Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(23)
	this->_image->originY = _g10;
	HX_STACK_LINE(26)
	this->set_graphic(this->_image);
	HX_STACK_LINE(28)
	this->x = _x;
	HX_STACK_LINE(29)
	this->y = _y;
	HX_STACK_LINE(31)
	Float _g12;		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		int _g11 = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483647));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(31)
		::com::haxepunk::HXP_obj::_seed = _g11;
		HX_STACK_LINE(31)
		_g12 = (Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483647));
	}
	HX_STACK_LINE(31)
	Float _g13 = (_g12 * (int)4);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(31)
	int _g14 = ::Std_obj::_int(_g13);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(31)
	this->_myLayer = _g14;
	HX_STACK_LINE(34)
	Float _g16;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		int _g15 = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483647));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(34)
		::com::haxepunk::HXP_obj::_seed = _g15;
		HX_STACK_LINE(34)
		_g16 = (Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483647));
	}
	HX_STACK_LINE(34)
	Float _g17 = (_g16 * (int)2);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(34)
	Float _g18 = (_g17 + 0.3);		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(34)
	this->_rotationSpeed = _g18;
	HX_STACK_LINE(35)
	Float _g20;		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		int _g19 = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483647));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(35)
		::com::haxepunk::HXP_obj::_seed = _g19;
		HX_STACK_LINE(35)
		_g20 = (Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483647));
	}
	HX_STACK_LINE(35)
	Float _g21 = (_g20 * (int)2);		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(35)
	Float _g22 = (_g21 + 0.2);		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(35)
	this->_fallSpeed = _g22;
	HX_STACK_LINE(40)
	this->_size = (Float(((this->_myLayer + (int)1))) / Float((int)4));
	HX_STACK_LINE(41)
	this->_image->_scale = this->_size;
	HX_STACK_LINE(43)
	Float _g24;		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		int _g23 = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),(int)2147483647));		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(43)
		::com::haxepunk::HXP_obj::_seed = _g23;
		HX_STACK_LINE(43)
		_g24 = (Float(::com::haxepunk::HXP_obj::_seed) / Float((int)2147483647));
	}
	HX_STACK_LINE(43)
	if (((_g24 > 0.5))){
		HX_STACK_LINE(45)
		this->_rotationDirection = true;
	}
	else{
		HX_STACK_LINE(49)
		this->_rotationDirection = false;
	}
	HX_STACK_LINE(52)
	this->set_layer(((int)4 - this->_myLayer));
	HX_STACK_LINE(53)
	this->set_type(HX_CSTRING("snowflake"));
}
;
	return null();
}

//Snowflake_obj::~Snowflake_obj() { }

Dynamic Snowflake_obj::__CreateEmpty() { return  new Snowflake_obj; }
hx::ObjectPtr< Snowflake_obj > Snowflake_obj::__new(Float _x,Float _y)
{  hx::ObjectPtr< Snowflake_obj > result = new Snowflake_obj();
	result->__construct(_x,_y);
	return result;}

Dynamic Snowflake_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Snowflake_obj > result = new Snowflake_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Snowflake_obj::update( ){
{
		HX_STACK_FRAME("Snowflake","update",0x965e95c5,"Snowflake.update","Snowflake.hx",59,0x1bafdccc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		::com::haxepunk::graphics::Image _image;		HX_STACK_VAR(_image,"_image");
		HX_STACK_LINE(63)
		this->super::update();
		HX_STACK_LINE(64)
		this->y = (((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) + this->_fallSpeed);
		HX_STACK_LINE(66)
		if (((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) > (::com::haxepunk::HXP_obj::height + (Float(::com::haxepunk::HXP_obj::halfHeight) / Float((int)2)))))){
			struct _Function_2_1{
				inline static ::com::haxepunk::debug::Console Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Snowflake.hx",68,0x1bafdccc)
					{
						HX_STACK_LINE(68)
						if (((::com::haxepunk::HXP_obj::_console == null()))){
							HX_STACK_LINE(68)
							::com::haxepunk::debug::Console _g = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(68)
							::com::haxepunk::HXP_obj::_console = _g;
						}
						HX_STACK_LINE(68)
						return ::com::haxepunk::HXP_obj::_console;
					}
					return null();
				}
			};
			HX_STACK_LINE(68)
			(_Function_2_1::Block())->log(Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("fallen"))));
		}
		HX_STACK_LINE(71)
		::com::haxepunk::graphics::Image _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		_g1 = hx::TCast< com::haxepunk::graphics::Image >::cast(this->_graphic);
		HX_STACK_LINE(71)
		_image = _g1;
		HX_STACK_LINE(73)
		if ((this->_rotationDirection)){
			HX_STACK_LINE(75)
			hx::AddEq(_image->angle,this->_rotationSpeed);
		}
		else{
			HX_STACK_LINE(79)
			hx::SubEq(_image->angle,this->_rotationSpeed);
		}
		HX_STACK_LINE(83)
		if (((((  ((this->followCamera)) ? Float((this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(this->y) )) > (::com::haxepunk::HXP_obj::height + (int)10)))){
			HX_STACK_LINE(85)
			::com::haxepunk::HXP_obj::engine->_scene->recycle(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}



Snowflake_obj::Snowflake_obj()
{
}

void Snowflake_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Snowflake);
	HX_MARK_MEMBER_NAME(_image,"_image");
	HX_MARK_MEMBER_NAME(_myLayer,"_myLayer");
	HX_MARK_MEMBER_NAME(_rotationSpeed,"_rotationSpeed");
	HX_MARK_MEMBER_NAME(_rotationDirection,"_rotationDirection");
	HX_MARK_MEMBER_NAME(_fallSpeed,"_fallSpeed");
	HX_MARK_MEMBER_NAME(_size,"_size");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Snowflake_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_image,"_image");
	HX_VISIT_MEMBER_NAME(_myLayer,"_myLayer");
	HX_VISIT_MEMBER_NAME(_rotationSpeed,"_rotationSpeed");
	HX_VISIT_MEMBER_NAME(_rotationDirection,"_rotationDirection");
	HX_VISIT_MEMBER_NAME(_fallSpeed,"_fallSpeed");
	HX_VISIT_MEMBER_NAME(_size,"_size");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Snowflake_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { return _size; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_image") ) { return _image; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_myLayer") ) { return _myLayer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fallSpeed") ) { return _fallSpeed; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rotationSpeed") ) { return _rotationSpeed; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_rotationDirection") ) { return _rotationDirection; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Snowflake_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { _size=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_image") ) { _image=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_myLayer") ) { _myLayer=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fallSpeed") ) { _fallSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_rotationSpeed") ) { _rotationSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_rotationDirection") ) { _rotationDirection=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Snowflake_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_image"));
	outFields->push(HX_CSTRING("_myLayer"));
	outFields->push(HX_CSTRING("_rotationSpeed"));
	outFields->push(HX_CSTRING("_rotationDirection"));
	outFields->push(HX_CSTRING("_fallSpeed"));
	outFields->push(HX_CSTRING("_size"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Snowflake_obj,_image),HX_CSTRING("_image")},
	{hx::fsInt,(int)offsetof(Snowflake_obj,_myLayer),HX_CSTRING("_myLayer")},
	{hx::fsFloat,(int)offsetof(Snowflake_obj,_rotationSpeed),HX_CSTRING("_rotationSpeed")},
	{hx::fsBool,(int)offsetof(Snowflake_obj,_rotationDirection),HX_CSTRING("_rotationDirection")},
	{hx::fsFloat,(int)offsetof(Snowflake_obj,_fallSpeed),HX_CSTRING("_fallSpeed")},
	{hx::fsFloat,(int)offsetof(Snowflake_obj,_size),HX_CSTRING("_size")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_image"),
	HX_CSTRING("_myLayer"),
	HX_CSTRING("_rotationSpeed"),
	HX_CSTRING("_rotationDirection"),
	HX_CSTRING("_fallSpeed"),
	HX_CSTRING("_size"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Snowflake_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Snowflake_obj::__mClass,"__mClass");
};

#endif

Class Snowflake_obj::__mClass;

void Snowflake_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Snowflake"), hx::TCanCast< Snowflake_obj> ,sStaticFields,sMemberFields,
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

void Snowflake_obj::__boot()
{
}

