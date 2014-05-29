#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Circle
#include <com/haxepunk/masks/Circle.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Polygon
#include <com/haxepunk/masks/Polygon.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
#ifndef INCLUDED_com_haxepunk_math__Vector_Vector_Impl_
#include <com/haxepunk/math/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Polygon_obj::__construct(Array< ::Dynamic > points,::flash::geom::Point origin)
{
HX_STACK_FRAME("com.haxepunk.masks.Polygon","new",0x4d8c772c,"com.haxepunk.masks.Polygon.new","com/haxepunk/masks/Polygon.hx",17,0xc83634e5)
HX_STACK_THIS(this)
HX_STACK_ARG(points,"points")
HX_STACK_ARG(origin,"origin")
{
	HX_STACK_LINE(29)
	this->maxY = (int)0;
	HX_STACK_LINE(28)
	this->maxX = (int)0;
	HX_STACK_LINE(27)
	this->minY = (int)0;
	HX_STACK_LINE(26)
	this->minX = (int)0;
	HX_STACK_LINE(38)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(39)
	if (((points->length < (int)3))){
		HX_STACK_LINE(39)
		HX_STACK_DO_THROW(HX_CSTRING("The polygon needs at least 3 sides."));
	}
	HX_STACK_LINE(40)
	this->_points = points;
	HX_STACK_LINE(42)
	::com::haxepunk::Entity _g = ::com::haxepunk::Entity_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	this->_fakeEntity = _g;
	HX_STACK_LINE(43)
	::com::haxepunk::masks::Hitbox _g1 = ::com::haxepunk::masks::Hitbox_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(43)
	this->_fakeTileHitbox = _g1;
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(45)
		this->_check->set(key,this->collideMask_dyn());
	}
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(46)
		this->_check->set(key,this->collideHitbox_dyn());
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(47)
		this->_check->set(key,this->collideGrid_dyn());
	}
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Circle >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(48)
		this->_check->set(key,this->collideCircle_dyn());
	}
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::String key = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Polygon >());		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(49)
		this->_check->set(key,this->collidePolygon_dyn());
	}
	HX_STACK_LINE(51)
	::flash::geom::Point _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(51)
	if (((origin != null()))){
		HX_STACK_LINE(51)
		_g2 = origin;
	}
	else{
		HX_STACK_LINE(51)
		_g2 = ::flash::geom::Point_obj::__new(null(),null());
	}
	HX_STACK_LINE(51)
	this->origin = _g2;
	HX_STACK_LINE(52)
	this->_angle = (int)0;
	HX_STACK_LINE(54)
	this->updateAxes();
}
;
	return null();
}

//Polygon_obj::~Polygon_obj() { }

Dynamic Polygon_obj::__CreateEmpty() { return  new Polygon_obj; }
hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Array< ::Dynamic > points,::flash::geom::Point origin)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(points,origin);
	return result;}

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool Polygon_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideMask",0xa1c20656,"com.haxepunk.masks.Polygon.collideMask","com/haxepunk/masks/Polygon.hx",61,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(62)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(63)
	Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",63,0xc83634e5)
			{
				HX_STACK_LINE(63)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(63)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",63,0xc83634e5)
			{
				HX_STACK_LINE(63)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(63)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(63)
	offsetX = ((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(other));
	HX_STACK_LINE(64)
	Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
	struct _Function_1_3{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",64,0xc83634e5)
			{
				HX_STACK_LINE(64)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(64)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::Mask &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",64,0xc83634e5)
			{
				HX_STACK_LINE(64)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(64)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(64)
	offsetY = ((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(other));
	HX_STACK_LINE(67)
	this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(68)
	other->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(70)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetY);
	HX_STACK_LINE(71)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetY);
	struct _Function_1_5{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",74,0xc83634e5)
			{
				HX_STACK_LINE(74)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(74)
				::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(74)
				return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(74)
	if ((!(_Function_1_5::Block()))){
		HX_STACK_LINE(76)
		return false;
	}
	HX_STACK_LINE(80)
	this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(81)
	other->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(83)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(84)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetX);
	struct _Function_1_6{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",87,0xc83634e5)
			{
				HX_STACK_LINE(87)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(87)
				::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(87)
				return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(87)
	if ((!(_Function_1_6::Block()))){
		HX_STACK_LINE(89)
		return false;
	}
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(94)
		while((true)){
			HX_STACK_LINE(94)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(94)
				break;
			}
			HX_STACK_LINE(94)
			::flash::geom::Point a = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(94)
			++(_g);
			HX_STACK_LINE(96)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(97)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(99)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(100)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(101)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",104,0xc83634e5)
					{
						HX_STACK_LINE(104)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(104)
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(104)
						return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(104)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(106)
				return false;
			}
		}
	}
	HX_STACK_LINE(109)
	return true;
}


bool Polygon_obj::collideHitbox( ::com::haxepunk::masks::Hitbox hitbox){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideHitbox",0xb71f6182,"com.haxepunk.masks.Polygon.collideHitbox","com/haxepunk/masks/Polygon.hx",116,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hitbox,"hitbox")
	HX_STACK_LINE(117)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(118)
	Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",118,0xc83634e5)
			{
				HX_STACK_LINE(118)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(118)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &hitbox){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",118,0xc83634e5)
			{
				HX_STACK_LINE(118)
				::com::haxepunk::Entity _this = hitbox->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(118)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(118)
	offsetX = ((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(hitbox));
	HX_STACK_LINE(119)
	Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
	struct _Function_1_3{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",119,0xc83634e5)
			{
				HX_STACK_LINE(119)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(119)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Hitbox &hitbox){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",119,0xc83634e5)
			{
				HX_STACK_LINE(119)
				::com::haxepunk::Entity _this = hitbox->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(119)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(119)
	offsetY = ((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(hitbox));
	HX_STACK_LINE(122)
	this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(123)
	hitbox->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(125)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetY);
	HX_STACK_LINE(126)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetY);
	struct _Function_1_5{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",129,0xc83634e5)
			{
				HX_STACK_LINE(129)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(129)
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(129)
				return !(((bool((_this->min > other->max)) || bool((_this->max < other->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(129)
	if ((!(_Function_1_5::Block()))){
		HX_STACK_LINE(131)
		return false;
	}
	HX_STACK_LINE(135)
	this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(136)
	hitbox->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(138)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(139)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetX);
	struct _Function_1_6{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",142,0xc83634e5)
			{
				HX_STACK_LINE(142)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(142)
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(142)
				return !(((bool((_this->min > other->max)) || bool((_this->max < other->min)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(142)
	if ((!(_Function_1_6::Block()))){
		HX_STACK_LINE(144)
		return false;
	}
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(149)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(149)
		while((true)){
			HX_STACK_LINE(149)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(149)
				break;
			}
			HX_STACK_LINE(149)
			::flash::geom::Point a = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(149)
			++(_g);
			HX_STACK_LINE(151)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(152)
			hitbox->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(154)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(155)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(156)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",159,0xc83634e5)
					{
						HX_STACK_LINE(159)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(159)
						::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(159)
						return !(((bool((_this->min > other->max)) || bool((_this->max < other->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(159)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(161)
				return false;
			}
		}
	}
	HX_STACK_LINE(164)
	return true;
}


bool Polygon_obj::collideGrid( ::com::haxepunk::masks::Grid grid){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideGrid",0x9dd79c30,"com.haxepunk.masks.Polygon.collideGrid","com/haxepunk/masks/Polygon.hx",174,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(grid,"grid")
	HX_STACK_LINE(175)
	int tileW = ::Std_obj::_int(grid->_tile->width);		HX_STACK_VAR(tileW,"tileW");
	HX_STACK_LINE(176)
	int tileH = ::Std_obj::_int(grid->_tile->height);		HX_STACK_VAR(tileH,"tileH");
	HX_STACK_LINE(177)
	bool solidTile;		HX_STACK_VAR(solidTile,"solidTile");
	HX_STACK_LINE(179)
	this->_fakeEntity->width = tileW;
	HX_STACK_LINE(180)
	this->_fakeEntity->height = tileH;
	HX_STACK_LINE(181)
	{
		HX_STACK_LINE(181)
		::com::haxepunk::Entity _this = this->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(181)
		if ((_this->followCamera)){
			HX_STACK_LINE(181)
			this->_fakeEntity->x = (_this->x + ::com::haxepunk::HXP_obj::camera->x);
		}
		else{
			HX_STACK_LINE(181)
			this->_fakeEntity->x = _this->x;
		}
	}
	HX_STACK_LINE(182)
	{
		HX_STACK_LINE(182)
		::com::haxepunk::Entity _this = this->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(182)
		if ((_this->followCamera)){
			HX_STACK_LINE(182)
			this->_fakeEntity->y = (_this->y + ::com::haxepunk::HXP_obj::camera->y);
		}
		else{
			HX_STACK_LINE(182)
			this->_fakeEntity->y = _this->y;
		}
	}
	HX_STACK_LINE(183)
	this->_fakeEntity->originX = (grid->_parent->originX + grid->_x);
	HX_STACK_LINE(184)
	this->_fakeEntity->originY = (grid->_parent->originY + grid->_y);
	HX_STACK_LINE(186)
	this->_fakeTileHitbox->_width = tileW;
	HX_STACK_LINE(187)
	this->_fakeTileHitbox->_height = tileH;
	HX_STACK_LINE(188)
	this->_fakeTileHitbox->set_parent(this->_fakeEntity);
	HX_STACK_LINE(190)
	{
		HX_STACK_LINE(190)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(190)
		int _g = grid->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(190)
		while((true)){
			HX_STACK_LINE(190)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(190)
				break;
			}
			HX_STACK_LINE(190)
			int r = (_g1)++;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(192)
			{
				HX_STACK_LINE(192)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(192)
				int _g2 = grid->columns;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(192)
				while((true)){
					HX_STACK_LINE(192)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(192)
						break;
					}
					HX_STACK_LINE(192)
					int c = (_g3)++;		HX_STACK_VAR(c,"c");
					struct _Function_5_1{
						inline static Float Block( ::com::haxepunk::masks::Grid &grid){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",194,0xc83634e5)
							{
								HX_STACK_LINE(194)
								::com::haxepunk::Entity _this = grid->_parent;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(194)
								return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
							}
							return null();
						}
					};
					HX_STACK_LINE(194)
					this->_fakeEntity->x = ((_Function_5_1::Block(grid) + grid->_x) + (c * tileW));
					struct _Function_5_2{
						inline static Float Block( ::com::haxepunk::masks::Grid &grid){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",195,0xc83634e5)
							{
								HX_STACK_LINE(195)
								::com::haxepunk::Entity _this = grid->_parent;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(195)
								return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(195)
					this->_fakeEntity->y = ((_Function_5_2::Block(grid) + grid->_y) + (r * tileH));
					HX_STACK_LINE(196)
					bool _g4 = grid->getTile(c,r);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(196)
					solidTile = _g4;
					HX_STACK_LINE(198)
					if (((  ((solidTile)) ? bool(this->collideHitbox(this->_fakeTileHitbox)) : bool(false) ))){
						HX_STACK_LINE(198)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(201)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideGrid,return )

bool Polygon_obj::collideCircle( ::com::haxepunk::masks::Circle circle){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideCircle",0xb604e5fa,"com.haxepunk.masks.Polygon.collideCircle","com/haxepunk/masks/Polygon.hx",208,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(circle,"circle")
	HX_STACK_LINE(209)
	int edgesCrossed = (int)0;		HX_STACK_VAR(edgesCrossed,"edgesCrossed");
	HX_STACK_LINE(210)
	::flash::geom::Point p1;		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(210)
	::flash::geom::Point p2;		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(211)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(211)
	int j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(212)
	int nPoints = this->_points->length;		HX_STACK_VAR(nPoints,"nPoints");
	HX_STACK_LINE(213)
	Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",213,0xc83634e5)
			{
				HX_STACK_LINE(213)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(213)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(213)
	offsetX = (_Function_1_1::Block(this) + this->_x);
	HX_STACK_LINE(214)
	Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
	struct _Function_1_2{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",214,0xc83634e5)
			{
				HX_STACK_LINE(214)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(214)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(214)
	offsetY = (_Function_1_2::Block(this) + this->_y);
	HX_STACK_LINE(218)
	i = (int)0;
	HX_STACK_LINE(219)
	j = (nPoints - (int)1);
	HX_STACK_LINE(220)
	while((true)){
		HX_STACK_LINE(220)
		if ((!(((i < nPoints))))){
			HX_STACK_LINE(220)
			break;
		}
		HX_STACK_LINE(222)
		p1 = this->_points->__get(i).StaticCast< ::flash::geom::Point >();
		HX_STACK_LINE(223)
		p2 = this->_points->__get(j).StaticCast< ::flash::geom::Point >();
		HX_STACK_LINE(225)
		Float distFromCenter;		HX_STACK_VAR(distFromCenter,"distFromCenter");
		struct _Function_2_1{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",225,0xc83634e5)
				{
					HX_STACK_LINE(225)
					::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(225)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(225)
		distFromCenter = (((Float((((p2->x - p1->x)) * ((((circle->_y + _Function_2_1::Block(circle)) - p1->y) - offsetY)))) / Float(((p2->y - p1->y)))) + p1->x) + offsetX);
		struct _Function_2_2{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",227,0xc83634e5)
				{
					HX_STACK_LINE(227)
					::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(227)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",227,0xc83634e5)
				{
					HX_STACK_LINE(227)
					::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(227)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		struct _Function_2_4{
			inline static Float Block( ::com::haxepunk::masks::Circle &circle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",228,0xc83634e5)
				{
					HX_STACK_LINE(228)
					::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(228)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(227)
		if (((bool((((p1->y + offsetY) > (circle->_y + _Function_2_2::Block(circle))) != ((p2->y + offsetY) > (circle->_y + _Function_2_3::Block(circle))))) && bool(((circle->_x + _Function_2_4::Block(circle)) < distFromCenter))))){
			HX_STACK_LINE(230)
			(edgesCrossed)++;
		}
		HX_STACK_LINE(232)
		j = i;
		HX_STACK_LINE(233)
		(i)++;
	}
	HX_STACK_LINE(236)
	if (((((int(edgesCrossed) & int((int)1))) > (int)0))){
		HX_STACK_LINE(236)
		return true;
	}
	HX_STACK_LINE(239)
	Float radiusSqr = (circle->_radius * circle->_radius);		HX_STACK_VAR(radiusSqr,"radiusSqr");
	HX_STACK_LINE(240)
	Float cx;		HX_STACK_VAR(cx,"cx");
	struct _Function_1_3{
		inline static Float Block( ::com::haxepunk::masks::Circle &circle){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",240,0xc83634e5)
			{
				HX_STACK_LINE(240)
				::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(240)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(240)
	cx = (circle->_x + _Function_1_3::Block(circle));
	HX_STACK_LINE(241)
	Float cy;		HX_STACK_VAR(cy,"cy");
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Circle &circle){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",241,0xc83634e5)
			{
				HX_STACK_LINE(241)
				::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(241)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(241)
	cy = (circle->_y + _Function_1_4::Block(circle));
	HX_STACK_LINE(242)
	Float minDistanceSqr = (int)0;		HX_STACK_VAR(minDistanceSqr,"minDistanceSqr");
	HX_STACK_LINE(243)
	Float closestX;		HX_STACK_VAR(closestX,"closestX");
	HX_STACK_LINE(244)
	Float closestY;		HX_STACK_VAR(closestY,"closestY");
	HX_STACK_LINE(246)
	i = (int)0;
	HX_STACK_LINE(247)
	j = (nPoints - (int)1);
	HX_STACK_LINE(248)
	while((true)){
		HX_STACK_LINE(248)
		if ((!(((i < nPoints))))){
			HX_STACK_LINE(248)
			break;
		}
		HX_STACK_LINE(250)
		p1 = this->_points->__get(i).StaticCast< ::flash::geom::Point >();
		HX_STACK_LINE(251)
		p2 = this->_points->__get(j).StaticCast< ::flash::geom::Point >();
		HX_STACK_LINE(253)
		Float segmentLenSqr = ((((p1->x - p2->x)) * ((p1->x - p2->x))) + (((p1->y - p2->y)) * ((p1->y - p2->y))));		HX_STACK_VAR(segmentLenSqr,"segmentLenSqr");
		HX_STACK_LINE(256)
		Float t = (Float(((((((cx - p1->x) - offsetX)) * ((p2->x - p1->x))) + ((((cy - p1->y) - offsetY)) * ((p2->y - p1->y)))))) / Float(segmentLenSqr));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(258)
		if (((t < (int)0))){
			HX_STACK_LINE(260)
			closestX = p1->x;
			HX_STACK_LINE(261)
			closestY = p1->y;
		}
		else{
			HX_STACK_LINE(263)
			if (((t > (int)1))){
				HX_STACK_LINE(265)
				closestX = p2->x;
				HX_STACK_LINE(266)
				closestY = p2->y;
			}
			else{
				HX_STACK_LINE(270)
				closestX = (p1->x + (t * ((p2->x - p1->x))));
				HX_STACK_LINE(271)
				closestY = (p1->y + (t * ((p2->y - p1->y))));
			}
		}
		HX_STACK_LINE(273)
		hx::AddEq(closestX,offsetX);
		HX_STACK_LINE(274)
		hx::AddEq(closestY,offsetY);
		HX_STACK_LINE(276)
		minDistanceSqr = ((((cx - closestX)) * ((cx - closestX))) + (((cy - closestY)) * ((cy - closestY))));
		HX_STACK_LINE(278)
		if (((minDistanceSqr <= radiusSqr))){
			HX_STACK_LINE(278)
			return true;
		}
		HX_STACK_LINE(280)
		j = i;
		HX_STACK_LINE(281)
		(i)++;
	}
	HX_STACK_LINE(284)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideCircle,return )

bool Polygon_obj::collidePolygon( ::com::haxepunk::masks::Polygon other){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collidePolygon",0xab1efb50,"com.haxepunk.masks.Polygon.collidePolygon","com/haxepunk/masks/Polygon.hx",291,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(292)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(293)
	Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",293,0xc83634e5)
			{
				HX_STACK_LINE(293)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(293)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( ::com::haxepunk::masks::Polygon &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",293,0xc83634e5)
			{
				HX_STACK_LINE(293)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(293)
				return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
			}
			return null();
		}
	};
	HX_STACK_LINE(293)
	offsetX = (((_Function_1_1::Block(this) + this->_x) - _Function_1_2::Block(other)) - other->_x);
	HX_STACK_LINE(294)
	Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
	struct _Function_1_3{
		inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",294,0xc83634e5)
			{
				HX_STACK_LINE(294)
				::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(294)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Float Block( ::com::haxepunk::masks::Polygon &other){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",294,0xc83634e5)
			{
				HX_STACK_LINE(294)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(294)
				return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
			}
			return null();
		}
	};
	HX_STACK_LINE(294)
	offsetY = (((_Function_1_3::Block(this) + this->_y) - _Function_1_4::Block(other)) - other->_y);
	HX_STACK_LINE(298)
	{
		HX_STACK_LINE(298)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(298)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(298)
		while((true)){
			HX_STACK_LINE(298)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(298)
				break;
			}
			HX_STACK_LINE(298)
			::flash::geom::Point a = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(298)
			++(_g);
			HX_STACK_LINE(300)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(301)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(304)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(305)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(306)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",309,0xc83634e5)
					{
						HX_STACK_LINE(309)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(309)
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(309)
						return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(309)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(311)
				return false;
			}
		}
	}
	HX_STACK_LINE(317)
	{
		HX_STACK_LINE(317)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(317)
		Array< ::Dynamic > _g1 = other->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(317)
		while((true)){
			HX_STACK_LINE(317)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(317)
				break;
			}
			HX_STACK_LINE(317)
			::flash::geom::Point a = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(317)
			++(_g);
			HX_STACK_LINE(319)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(320)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(323)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(324)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(325)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",328,0xc83634e5)
					{
						HX_STACK_LINE(328)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(328)
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(328)
						return !(((bool((_this->min > other1->max)) || bool((_this->max < other1->min)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(328)
			if ((!(_Function_3_1::Block()))){
				HX_STACK_LINE(330)
				return false;
			}
		}
	}
	HX_STACK_LINE(333)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collidePolygon,return )

Void Polygon_obj::project( ::flash::geom::Point axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","project",0x392d0fa5,"com.haxepunk.masks.Polygon.project","com/haxepunk/masks/Polygon.hx",338,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_LINE(339)
		::flash::geom::Point p = this->_points->__get((int)0).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(341)
		Float min = ((axis->x * p->x) + (axis->y * p->y));		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(342)
		Float max = min;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(344)
			int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(344)
			while((true)){
				HX_STACK_LINE(344)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(344)
					break;
				}
				HX_STACK_LINE(344)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(346)
				p = this->_points->__get(i).StaticCast< ::flash::geom::Point >();
				HX_STACK_LINE(347)
				Float cur = ((axis->x * p->x) + (axis->y * p->y));		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(349)
				if (((cur < min))){
					HX_STACK_LINE(351)
					min = cur;
				}
				else{
					HX_STACK_LINE(353)
					if (((cur > max))){
						HX_STACK_LINE(355)
						max = cur;
					}
				}
			}
		}
		HX_STACK_LINE(358)
		projection->min = min;
		HX_STACK_LINE(359)
		projection->max = max;
	}
return null();
}


Void Polygon_obj::debugDraw( ::flash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","debugDraw",0x3b0f97c3,"com.haxepunk.masks.Polygon.debugDraw","com/haxepunk/masks/Polygon.hx",363,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(364)
		Float offsetX;		HX_STACK_VAR(offsetX,"offsetX");
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",364,0xc83634e5)
				{
					HX_STACK_LINE(364)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(364)
					return (  ((_this->followCamera)) ? Float((_this->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_this->x) );
				}
				return null();
			}
		};
		HX_STACK_LINE(364)
		offsetX = ((_Function_1_1::Block(this) + this->_x) - ::com::haxepunk::HXP_obj::camera->x);
		HX_STACK_LINE(365)
		Float offsetY;		HX_STACK_VAR(offsetY,"offsetY");
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::com::haxepunk::masks::Polygon_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",365,0xc83634e5)
				{
					HX_STACK_LINE(365)
					::com::haxepunk::Entity _this = __this->_parent;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(365)
					return (  ((_this->followCamera)) ? Float((_this->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_this->y) );
				}
				return null();
			}
		};
		HX_STACK_LINE(365)
		offsetY = ((_Function_1_2::Block(this) + this->_y) - ::com::haxepunk::HXP_obj::camera->y);
		HX_STACK_LINE(367)
		graphics->beginFill((int)255,.3);
		HX_STACK_LINE(369)
		graphics->moveTo((((this->_points->__get((this->_points->length - (int)1)).StaticCast< ::flash::geom::Point >()->x + offsetX)) * scaleX),(((this->_points->__get((this->_points->length - (int)1)).StaticCast< ::flash::geom::Point >()->y + offsetY)) * scaleY));
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(370)
			int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(370)
			while((true)){
				HX_STACK_LINE(370)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(370)
					break;
				}
				HX_STACK_LINE(370)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(372)
				graphics->lineTo((((this->_points->__get(i).StaticCast< ::flash::geom::Point >()->x + offsetX)) * scaleX),(((this->_points->__get(i).StaticCast< ::flash::geom::Point >()->y + offsetY)) * scaleY));
			}
		}
		HX_STACK_LINE(375)
		graphics->endFill();
		HX_STACK_LINE(378)
		graphics->drawCircle((((offsetX + this->origin->x)) * scaleX),(((offsetY + this->origin->y)) * scaleY),(int)2);
	}
return null();
}


Float Polygon_obj::get_angle( ){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","get_angle",0x7bdf67f6,"com.haxepunk.masks.Polygon.get_angle","com/haxepunk/masks/Polygon.hx",385,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(385)
	return this->_angle;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_angle,return )

Float Polygon_obj::set_angle( Float value){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","set_angle",0x5f305402,"com.haxepunk.masks.Polygon.set_angle","com/haxepunk/masks/Polygon.hx",387,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(388)
	if (((value != this->_angle))){
		HX_STACK_LINE(390)
		this->rotate((value - this->_angle));
		HX_STACK_LINE(391)
		if (((bool((this->list != null())) || bool((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))))){
			HX_STACK_LINE(391)
			this->update();
		}
	}
	HX_STACK_LINE(393)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,set_angle,return )

Array< ::Dynamic > Polygon_obj::get_points( ){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","get_points",0x7bb08ca0,"com.haxepunk.masks.Polygon.get_points","com/haxepunk/masks/Polygon.hx",403,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(403)
	return this->_points;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_points,return )

Array< ::Dynamic > Polygon_obj::set_points( Array< ::Dynamic > value){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","set_points",0x7f2e2b14,"com.haxepunk.masks.Polygon.set_points","com/haxepunk/masks/Polygon.hx",405,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(406)
	if (((this->_points != value))){
		HX_STACK_LINE(408)
		this->_points = value;
		HX_STACK_LINE(409)
		if (((bool((this->list != null())) || bool((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))))){
			HX_STACK_LINE(409)
			this->updateAxes();
		}
	}
	HX_STACK_LINE(411)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,set_points,return )

Void Polygon_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","update",0x8d1026bd,"com.haxepunk.masks.Polygon.update","com/haxepunk/masks/Polygon.hx",416,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(417)
		this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
		HX_STACK_LINE(418)
		int projX = ::Math_obj::round(::com::haxepunk::masks::Polygon_obj::firstProj->min);		HX_STACK_VAR(projX,"projX");
		HX_STACK_LINE(419)
		int _g = ::Math_obj::round((::com::haxepunk::masks::Polygon_obj::firstProj->max - ::com::haxepunk::masks::Polygon_obj::firstProj->min));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(419)
		this->_width = _g;
		HX_STACK_LINE(420)
		this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
		HX_STACK_LINE(421)
		int projY = ::Math_obj::round(::com::haxepunk::masks::Polygon_obj::secondProj->min);		HX_STACK_VAR(projY,"projY");
		HX_STACK_LINE(422)
		int _g1 = ::Math_obj::round((::com::haxepunk::masks::Polygon_obj::secondProj->max - ::com::haxepunk::masks::Polygon_obj::secondProj->min));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(422)
		this->_height = _g1;
		HX_STACK_LINE(424)
		this->minX = (this->_x + projX);
		HX_STACK_LINE(425)
		this->minY = (this->_y + projY);
		HX_STACK_LINE(426)
		int _g2 = ::Math_obj::round((this->minX + this->_width));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(426)
		this->maxX = _g2;
		HX_STACK_LINE(427)
		int _g3 = ::Math_obj::round((this->minY + this->_height));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(427)
		this->maxY = _g3;
		HX_STACK_LINE(429)
		if (((this->list != null()))){
			HX_STACK_LINE(432)
			this->list->update();
		}
		else{
			HX_STACK_LINE(434)
			if (((((  (((this->_parent != ::com::haxepunk::Entity_obj::_EMPTY))) ? ::com::haxepunk::Entity(this->_parent) : ::com::haxepunk::Entity(null()) )) != null()))){
				HX_STACK_LINE(436)
				this->_parent->originX = (-(this->_x) - projX);
				HX_STACK_LINE(437)
				this->_parent->originY = (-(this->_y) - projY);
				HX_STACK_LINE(438)
				this->_parent->width = this->_width;
				HX_STACK_LINE(439)
				this->_parent->height = this->_height;
			}
		}
	}
return null();
}


Void Polygon_obj::rotate( Float angleDelta){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","rotate",0xd12ae70f,"com.haxepunk.masks.Polygon.rotate","com/haxepunk/masks/Polygon.hx",496,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angleDelta,"angleDelta")
		HX_STACK_LINE(497)
		hx::AddEq(this->_angle,angleDelta);
		HX_STACK_LINE(499)
		hx::MultEq(angleDelta,(Float(::Math_obj::PI) / Float((int)-180)));
		HX_STACK_LINE(501)
		::flash::geom::Point p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(503)
			int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(503)
			while((true)){
				HX_STACK_LINE(503)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(503)
					break;
				}
				HX_STACK_LINE(503)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(505)
				p = this->_points->__get(i).StaticCast< ::flash::geom::Point >();
				HX_STACK_LINE(506)
				Float dx = (p->x - this->origin->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(507)
				Float dy = (p->y - this->origin->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(509)
				Float pointAngle = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(pointAngle,"pointAngle");
				HX_STACK_LINE(510)
				Float length = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(512)
				{
					HX_STACK_LINE(512)
					Float _g2 = ::Math_obj::cos((pointAngle + angleDelta));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(512)
					Float _g11 = (_g2 * length);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(512)
					Float value = (_g11 + this->origin->x);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(512)
					p->x = value;
				}
				HX_STACK_LINE(513)
				{
					HX_STACK_LINE(513)
					Float _g2 = ::Math_obj::sin((pointAngle + angleDelta));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(513)
					Float _g3 = (_g2 * length);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(513)
					Float value = (_g3 + this->origin->y);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(513)
					p->y = value;
				}
			}
		}
		HX_STACK_LINE(516)
		{
			HX_STACK_LINE(516)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(516)
			Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(516)
			while((true)){
				HX_STACK_LINE(516)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(516)
					break;
				}
				HX_STACK_LINE(516)
				::flash::geom::Point a = _g1->__get(_g).StaticCast< ::flash::geom::Point >();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(516)
				++(_g);
				HX_STACK_LINE(518)
				Float axisAngle = ::Math_obj::atan2(a->y,a->x);		HX_STACK_VAR(axisAngle,"axisAngle");
				HX_STACK_LINE(520)
				{
					HX_STACK_LINE(520)
					Float value = ::Math_obj::cos((axisAngle + angleDelta));		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(520)
					a->x = value;
				}
				HX_STACK_LINE(521)
				{
					HX_STACK_LINE(521)
					Float value = ::Math_obj::sin((axisAngle + angleDelta));		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(521)
					a->y = value;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,rotate,(void))

Void Polygon_obj::generateAxes( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","generateAxes",0xe42702ae,"com.haxepunk.masks.Polygon.generateAxes","com/haxepunk/masks/Polygon.hx",526,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(527)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(527)
		this->_axes = _g;
		HX_STACK_LINE(528)
		Array< int > _g1 = Array_obj< int >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(528)
		this->_indicesToRemove = _g1;
		HX_STACK_LINE(530)
		Float temp;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(531)
		int nPoints = this->_points->length;		HX_STACK_VAR(nPoints,"nPoints");
		HX_STACK_LINE(532)
		::flash::geom::Point edge;		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(533)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(533)
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(535)
		i = (int)0;
		HX_STACK_LINE(536)
		j = (nPoints - (int)1);
		HX_STACK_LINE(537)
		while((true)){
			HX_STACK_LINE(537)
			if ((!(((i < nPoints))))){
				HX_STACK_LINE(537)
				break;
			}
			HX_STACK_LINE(539)
			::flash::geom::Point _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(539)
			{
				HX_STACK_LINE(539)
				Float x = (int)0;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(539)
				Float y = (int)0;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(539)
				_g2 = ::flash::geom::Point_obj::__new(x,y);
			}
			HX_STACK_LINE(539)
			edge = _g2;
			HX_STACK_LINE(540)
			edge->x = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->x - this->_points->__get(j).StaticCast< ::flash::geom::Point >()->x);
			HX_STACK_LINE(541)
			edge->y = (this->_points->__get(i).StaticCast< ::flash::geom::Point >()->y - this->_points->__get(j).StaticCast< ::flash::geom::Point >()->y);
			HX_STACK_LINE(544)
			temp = edge->y;
			HX_STACK_LINE(545)
			edge->y = -(edge->x);
			HX_STACK_LINE(546)
			edge->x = temp;
			HX_STACK_LINE(547)
			::com::haxepunk::math::_Vector::Vector_Impl__obj::normalize(edge,(int)1);
			HX_STACK_LINE(549)
			this->_axes->push(edge);
			HX_STACK_LINE(551)
			j = i;
			HX_STACK_LINE(552)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,generateAxes,(void))

Void Polygon_obj::removeDuplicateAxes( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","removeDuplicateAxes",0xfab0e038,"com.haxepunk.masks.Polygon.removeDuplicateAxes","com/haxepunk/masks/Polygon.hx",557,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(558)
		int nAxes = this->_axes->length;		HX_STACK_VAR(nAxes,"nAxes");
		HX_STACK_LINE(559)
		{
			HX_STACK_LINE(559)
			Dynamic array = this->_indicesToRemove;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(559)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(561)
		{
			HX_STACK_LINE(561)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(561)
			while((true)){
				HX_STACK_LINE(561)
				if ((!(((_g < nAxes))))){
					HX_STACK_LINE(561)
					break;
				}
				HX_STACK_LINE(561)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(563)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(563)
					while((true)){
						HX_STACK_LINE(563)
						if ((!(((_g1 < nAxes))))){
							HX_STACK_LINE(563)
							break;
						}
						HX_STACK_LINE(563)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						struct _Function_5_1{
							inline static bool Block( int &i,int &j,int &nAxes){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",565,0xc83634e5)
								{
									HX_STACK_LINE(565)
									Float _g2 = ::Math_obj::max(i,j);		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(565)
									return (_g2 >= nAxes);
								}
								return null();
							}
						};
						HX_STACK_LINE(565)
						if (((  ((!(((i == j))))) ? bool(_Function_5_1::Block(i,j,nAxes)) : bool(true) ))){
							HX_STACK_LINE(565)
							continue;
						}
						HX_STACK_LINE(570)
						if (((bool((bool((this->_axes->__get(i).StaticCast< ::flash::geom::Point >()->x == this->_axes->__get(j).StaticCast< ::flash::geom::Point >()->x)) && bool((this->_axes->__get(i).StaticCast< ::flash::geom::Point >()->y == this->_axes->__get(j).StaticCast< ::flash::geom::Point >()->y)))) || bool((bool((-(this->_axes->__get(i).StaticCast< ::flash::geom::Point >()->x) == this->_axes->__get(j).StaticCast< ::flash::geom::Point >()->x)) && bool((-(this->_axes->__get(i).StaticCast< ::flash::geom::Point >()->y) == this->_axes->__get(j).StaticCast< ::flash::geom::Point >()->y))))))){
							HX_STACK_LINE(573)
							this->_indicesToRemove->push(j);
						}
					}
				}
			}
		}
		HX_STACK_LINE(579)
		Dynamic indexToRemove;		HX_STACK_VAR(indexToRemove,"indexToRemove");
		HX_STACK_LINE(580)
		while((true)){
			HX_STACK_LINE(580)
			Dynamic _g1 = this->_indicesToRemove->pop();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(580)
			Dynamic _g2 = indexToRemove = _g1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(580)
			if ((!(((_g2 != null()))))){
				HX_STACK_LINE(580)
				break;
			}
			HX_STACK_LINE(580)
			this->_axes->splice(indexToRemove,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,removeDuplicateAxes,(void))

Void Polygon_obj::updateAxes( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","updateAxes",0x8d290e82,"com.haxepunk.masks.Polygon.updateAxes","com/haxepunk/masks/Polygon.hx",584,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(585)
		this->generateAxes();
		HX_STACK_LINE(586)
		this->removeDuplicateAxes();
		HX_STACK_LINE(587)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,updateAxes,(void))

::com::haxepunk::masks::Polygon Polygon_obj::createPolygon( hx::Null< int >  __o_sides,hx::Null< Float >  __o_radius,hx::Null< Float >  __o_angle){
int sides = __o_sides.Default(3);
Float radius = __o_radius.Default(100);
Float angle = __o_angle.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","createPolygon",0xe8d578aa,"com.haxepunk.masks.Polygon.createPolygon","com/haxepunk/masks/Polygon.hx",451,0xc83634e5)
	HX_STACK_ARG(sides,"sides")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(angle,"angle")
{
		HX_STACK_LINE(452)
		if (((sides < (int)3))){
			HX_STACK_LINE(452)
			HX_STACK_DO_THROW(HX_CSTRING("The polygon needs at least 3 sides."));
		}
		HX_STACK_LINE(455)
		Float rotationAngle = (Float((::Math_obj::PI * (int)2)) / Float(sides));		HX_STACK_VAR(rotationAngle,"rotationAngle");
		HX_STACK_LINE(458)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(460)
		{
			HX_STACK_LINE(460)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(460)
			while((true)){
				HX_STACK_LINE(460)
				if ((!(((_g < sides))))){
					HX_STACK_LINE(460)
					break;
				}
				HX_STACK_LINE(460)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(462)
				Float tempAngle = (::Math_obj::PI + (i * rotationAngle));		HX_STACK_VAR(tempAngle,"tempAngle");
				HX_STACK_LINE(463)
				::flash::geom::Point p;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(463)
				{
					HX_STACK_LINE(463)
					Float x = (int)0;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(463)
					Float y = (int)0;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(463)
					p = ::flash::geom::Point_obj::__new(x,y);
				}
				HX_STACK_LINE(464)
				{
					HX_STACK_LINE(464)
					Float _g1 = ::Math_obj::cos(tempAngle);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(464)
					Float _g11 = (_g1 * radius);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(464)
					Float value = (_g11 + radius);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(464)
					p->x = value;
				}
				HX_STACK_LINE(465)
				{
					HX_STACK_LINE(465)
					Float _g2 = ::Math_obj::sin(tempAngle);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(465)
					Float _g3 = (_g2 * radius);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(465)
					Float value = (_g3 + radius);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(465)
					p->y = value;
				}
				HX_STACK_LINE(466)
				points->push(p);
			}
		}
		HX_STACK_LINE(470)
		::com::haxepunk::masks::Polygon poly = ::com::haxepunk::masks::Polygon_obj::__new(points,null());		HX_STACK_VAR(poly,"poly");
		HX_STACK_LINE(471)
		poly->origin->x = radius;
		HX_STACK_LINE(472)
		poly->origin->y = radius;
		HX_STACK_LINE(473)
		poly->set_angle(angle);
		HX_STACK_LINE(474)
		return poly;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,createPolygon,return )

::com::haxepunk::masks::Polygon Polygon_obj::createFromArray( Array< Float > points){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","createFromArray",0x230ab9ff,"com.haxepunk.masks.Polygon.createFromArray","com/haxepunk/masks/Polygon.hx",484,0xc83634e5)
	HX_STACK_ARG(points,"points")
	HX_STACK_LINE(485)
	Array< ::Dynamic > p = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(487)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(488)
	while((true)){
		HX_STACK_LINE(488)
		if ((!(((i < points->length))))){
			HX_STACK_LINE(488)
			break;
		}
		HX_STACK_LINE(490)
		::flash::geom::Point _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(490)
		{
			HX_STACK_LINE(490)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(490)
			Float x = points->__get(_g);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(490)
			int _g1 = (i)++;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(490)
			Float y = points->__get(_g1);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(490)
			_g2 = ::flash::geom::Point_obj::__new(x,y);
		}
		HX_STACK_LINE(490)
		p->push(_g2);
	}
	HX_STACK_LINE(492)
	return ::com::haxepunk::masks::Polygon_obj::__new(p,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,createFromArray,return )

::com::haxepunk::math::Projection Polygon_obj::firstProj;

::com::haxepunk::math::Projection Polygon_obj::secondProj;

::flash::geom::Point Polygon_obj::vertical;

::flash::geom::Point Polygon_obj::horizontal;


Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(minX,"minX");
	HX_MARK_MEMBER_NAME(minY,"minY");
	HX_MARK_MEMBER_NAME(maxX,"maxX");
	HX_MARK_MEMBER_NAME(maxY,"maxY");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(_points,"_points");
	HX_MARK_MEMBER_NAME(_axes,"_axes");
	HX_MARK_MEMBER_NAME(_fakeEntity,"_fakeEntity");
	HX_MARK_MEMBER_NAME(_fakeTileHitbox,"_fakeTileHitbox");
	HX_MARK_MEMBER_NAME(_indicesToRemove,"_indicesToRemove");
	::com::haxepunk::Mask_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(minX,"minX");
	HX_VISIT_MEMBER_NAME(minY,"minY");
	HX_VISIT_MEMBER_NAME(maxX,"maxX");
	HX_VISIT_MEMBER_NAME(maxY,"maxY");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(_points,"_points");
	HX_VISIT_MEMBER_NAME(_axes,"_axes");
	HX_VISIT_MEMBER_NAME(_fakeEntity,"_fakeEntity");
	HX_VISIT_MEMBER_NAME(_fakeTileHitbox,"_fakeTileHitbox");
	HX_VISIT_MEMBER_NAME(_indicesToRemove,"_indicesToRemove");
	::com::haxepunk::Mask_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Polygon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"minX") ) { return minX; }
		if (HX_FIELD_EQ(inName,"minY") ) { return minY; }
		if (HX_FIELD_EQ(inName,"maxX") ) { return maxX; }
		if (HX_FIELD_EQ(inName,"maxY") ) { return maxY; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return get_angle(); }
		if (HX_FIELD_EQ(inName,"_axes") ) { return _axes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"points") ) { return get_points(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"_angle") ) { return _angle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"_points") ) { return _points; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { return vertical; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { return firstProj; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { return secondProj; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { return horizontal; }
		if (HX_FIELD_EQ(inName,"get_points") ) { return get_points_dyn(); }
		if (HX_FIELD_EQ(inName,"set_points") ) { return set_points_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAxes") ) { return updateAxes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"_fakeEntity") ) { return _fakeEntity; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"generateAxes") ) { return generateAxes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createPolygon") ) { return createPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"collideCircle") ) { return collideCircle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collidePolygon") ) { return collidePolygon_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createFromArray") ) { return createFromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"_fakeTileHitbox") ) { return _fakeTileHitbox; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_indicesToRemove") ) { return _indicesToRemove; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeDuplicateAxes") ) { return removeDuplicateAxes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"minX") ) { minX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minY") ) { minY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxX") ) { maxX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxY") ) { maxY=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return set_angle(inValue); }
		if (HX_FIELD_EQ(inName,"_axes") ) { _axes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { return set_points(inValue); }
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { _points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { vertical=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { firstProj=inValue.Cast< ::com::haxepunk::math::Projection >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { secondProj=inValue.Cast< ::com::haxepunk::math::Projection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { horizontal=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_fakeEntity") ) { _fakeEntity=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fakeTileHitbox") ) { _fakeTileHitbox=inValue.Cast< ::com::haxepunk::masks::Hitbox >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_indicesToRemove") ) { _indicesToRemove=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("minX"));
	outFields->push(HX_CSTRING("minY"));
	outFields->push(HX_CSTRING("maxX"));
	outFields->push(HX_CSTRING("maxY"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("_angle"));
	outFields->push(HX_CSTRING("_points"));
	outFields->push(HX_CSTRING("_axes"));
	outFields->push(HX_CSTRING("_fakeEntity"));
	outFields->push(HX_CSTRING("_fakeTileHitbox"));
	outFields->push(HX_CSTRING("_indicesToRemove"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createPolygon"),
	HX_CSTRING("createFromArray"),
	HX_CSTRING("firstProj"),
	HX_CSTRING("secondProj"),
	HX_CSTRING("vertical"),
	HX_CSTRING("horizontal"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(Polygon_obj,origin),HX_CSTRING("origin")},
	{hx::fsInt,(int)offsetof(Polygon_obj,minX),HX_CSTRING("minX")},
	{hx::fsInt,(int)offsetof(Polygon_obj,minY),HX_CSTRING("minY")},
	{hx::fsInt,(int)offsetof(Polygon_obj,maxX),HX_CSTRING("maxX")},
	{hx::fsInt,(int)offsetof(Polygon_obj,maxY),HX_CSTRING("maxY")},
	{hx::fsFloat,(int)offsetof(Polygon_obj,_angle),HX_CSTRING("_angle")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Polygon_obj,_points),HX_CSTRING("_points")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Polygon_obj,_axes),HX_CSTRING("_axes")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Polygon_obj,_fakeEntity),HX_CSTRING("_fakeEntity")},
	{hx::fsObject /*::com::haxepunk::masks::Hitbox*/ ,(int)offsetof(Polygon_obj,_fakeTileHitbox),HX_CSTRING("_fakeTileHitbox")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Polygon_obj,_indicesToRemove),HX_CSTRING("_indicesToRemove")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("origin"),
	HX_CSTRING("minX"),
	HX_CSTRING("minY"),
	HX_CSTRING("maxX"),
	HX_CSTRING("maxY"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideGrid"),
	HX_CSTRING("collideCircle"),
	HX_CSTRING("collidePolygon"),
	HX_CSTRING("project"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("get_points"),
	HX_CSTRING("set_points"),
	HX_CSTRING("update"),
	HX_CSTRING("rotate"),
	HX_CSTRING("generateAxes"),
	HX_CSTRING("removeDuplicateAxes"),
	HX_CSTRING("updateAxes"),
	HX_CSTRING("_angle"),
	HX_CSTRING("_points"),
	HX_CSTRING("_axes"),
	HX_CSTRING("_fakeEntity"),
	HX_CSTRING("_fakeTileHitbox"),
	HX_CSTRING("_indicesToRemove"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_MARK_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_VISIT_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

#endif

Class Polygon_obj::__mClass;

void Polygon_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Polygon"), hx::TCanCast< Polygon_obj> ,sStaticFields,sMemberFields,
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

void Polygon_obj::__boot()
{
	firstProj= ::com::haxepunk::math::Projection_obj::__new();
	secondProj= ::com::haxepunk::math::Projection_obj::__new();
	vertical= ::flash::geom::Point_obj::__new((int)0,(int)1);
	horizontal= ::flash::geom::Point_obj::__new((int)1,(int)0);
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
