#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_LayerList
#include <com/haxepunk/debug/LayerList.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_TraceCapture
#include <com/haxepunk/debug/TraceCapture.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils__Input_InputType_Impl_
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_system_System
#include <flash/system/System.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

Void Console_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.debug.Console","new",0xef2b98d5,"com.haxepunk.debug.Console.new","com/haxepunk/debug/Console.hx",31,0xfa4cbb5c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(407)
	this->debugDraw = true;
	HX_STACK_LINE(40)
	this->init();
	HX_STACK_LINE(42)
	::com::haxepunk::utils::Input_obj::define(HX_CSTRING("_ARROWS"),Array_obj< int >::__new().Add((int)39).Add((int)37).Add((int)40).Add((int)38));
}
;
	return null();
}

//Console_obj::~Console_obj() { }

Dynamic Console_obj::__CreateEmpty() { return  new Console_obj; }
hx::ObjectPtr< Console_obj > Console_obj::__new()
{  hx::ObjectPtr< Console_obj > result = new Console_obj();
	result->__construct();
	return result;}

Dynamic Console_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Console_obj > result = new Console_obj();
	result->__construct();
	return result;}

Void Console_obj::init( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","init",0x53b2d8fb,"com.haxepunk.debug.Console.init","com/haxepunk/debug/Console.hx",47,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		::flash::display::Sprite _g = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		this->_sprite = _g;
		HX_STACK_LINE(50)
		::flash::text::Font font = ::openfl::Assets_obj::getFont(HX_CSTRING("font/04B_03__.ttf"),null());		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(51)
		if (((font == null()))){
			HX_STACK_LINE(53)
			::flash::text::Font _g1 = ::openfl::Assets_obj::getFont(::com::haxepunk::HXP_obj::defaultFont,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(53)
			font = _g1;
		}
		HX_STACK_LINE(55)
		::flash::text::TextFormat _g2 = ::flash::text::TextFormat_obj::__new(font->fontName,(int)8,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(55)
		this->_format = _g2;
		HX_STACK_LINE(56)
		::flash::display::Bitmap _g3 = ::flash::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(56)
		this->_back = _g3;
		HX_STACK_LINE(59)
		::flash::display::Sprite _g4 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(59)
		this->_fpsRead = _g4;
		HX_STACK_LINE(60)
		::flash::text::TextField _g5 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(60)
		this->_fpsReadText = _g5;
		HX_STACK_LINE(61)
		::flash::display::Sprite _g6 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(61)
		this->_fpsInfo = _g6;
		HX_STACK_LINE(62)
		::flash::text::TextField _g7 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(62)
		this->_fpsInfoText0 = _g7;
		HX_STACK_LINE(63)
		::flash::text::TextField _g8 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(63)
		this->_fpsInfoText1 = _g8;
		HX_STACK_LINE(64)
		::flash::text::TextField _g9 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(64)
		this->_memReadText = _g9;
		HX_STACK_LINE(66)
		::com::haxepunk::debug::LayerList _g10 = ::com::haxepunk::debug::LayerList_obj::__new(null(),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(66)
		this->_layerList = _g10;
		HX_STACK_LINE(69)
		::flash::display::Sprite _g11 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(69)
		this->_logRead = _g11;
		HX_STACK_LINE(70)
		::flash::text::TextField _g12 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(70)
		this->_logReadText0 = _g12;
		HX_STACK_LINE(71)
		::flash::text::TextField _g13 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(71)
		this->_logReadText1 = _g13;
		HX_STACK_LINE(72)
		this->_logScroll = (int)0;
		HX_STACK_LINE(73)
		this->_logLines = (int)33;
		HX_STACK_LINE(76)
		::flash::display::Sprite _g14 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(76)
		this->_entRead = _g14;
		HX_STACK_LINE(77)
		::flash::text::TextField _g15 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(77)
		this->_entReadText = _g15;
		HX_STACK_LINE(80)
		::flash::display::Sprite _g16 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(80)
		this->_debRead = _g16;
		HX_STACK_LINE(81)
		::flash::text::TextField _g17 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(81)
		this->_debReadText0 = _g17;
		HX_STACK_LINE(82)
		::flash::text::TextField _g18 = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(82)
		this->_debReadText1 = _g18;
		HX_STACK_LINE(85)
		::flash::display::Sprite _g19 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(85)
		this->_butRead = _g19;
		HX_STACK_LINE(88)
		::flash::display::Sprite _g20 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(88)
		this->_entScreen = _g20;
		HX_STACK_LINE(89)
		::flash::display::Sprite _g21 = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(89)
		this->_entSelect = _g21;
		HX_STACK_LINE(90)
		::flash::geom::Rectangle _g22 = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(90)
		this->_entRect = _g22;
		HX_STACK_LINE(93)
		Array< ::String > _g23 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(93)
		this->LOG = _g23;
		HX_STACK_LINE(95)
		::haxe::ds::IntMap _g24 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(95)
		this->LAYER_LIST = _g24;
		HX_STACK_LINE(96)
		Array< ::Dynamic > _g25 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(96)
		this->ENTITY_LIST = _g25;
		HX_STACK_LINE(97)
		Array< ::Dynamic > _g26 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(97)
		this->SCREEN_LIST = _g26;
		HX_STACK_LINE(98)
		Array< ::Dynamic > _g27 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(98)
		this->SELECT_LIST = _g27;
		HX_STACK_LINE(101)
		this->WATCH_LIST = Array_obj< ::String >::__new().Add(HX_CSTRING("x")).Add(HX_CSTRING("y"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,init,(void))

Void Console_obj::traceLog( Dynamic v,Dynamic infos){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","traceLog",0x89650e6a,"com.haxepunk.debug.Console.traceLog","com/haxepunk/debug/Console.hx",105,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(infos,"infos")
		HX_STACK_LINE(106)
		::String _g = ::Std_obj::string(v);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		::String log = ((((infos->__Field(HX_CSTRING("className"),true) + HX_CSTRING("(")) + infos->__Field(HX_CSTRING("lineNumber"),true)) + HX_CSTRING("): ")) + _g);		HX_STACK_VAR(log,"log");
		HX_STACK_LINE(107)
		this->LOG->push(log);
		HX_STACK_LINE(109)
		::Sys_obj::println(log);
		HX_STACK_LINE(111)
		if (((  ((this->_enabled)) ? bool(this->_sprite->get_visible()) : bool(false) ))){
			HX_STACK_LINE(111)
			this->updateLog();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,traceLog,(void))

Void Console_obj::log( Dynamic data){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","log",0xef2a1cf9,"com.haxepunk.debug.Console.log","com/haxepunk/debug/Console.hx",119,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(120)
		::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(123)
			int _g = data->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(123)
			while((true)){
				HX_STACK_LINE(123)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(123)
					break;
				}
				HX_STACK_LINE(123)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(125)
				if (((i > (int)0))){
					HX_STACK_LINE(125)
					hx::AddEq(s,HX_CSTRING(" "));
				}
				HX_STACK_LINE(126)
				::String _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(126)
				if (((data->__GetItem(i) != null()))){
					HX_STACK_LINE(126)
					_g2 = ::Std_obj::string(data->__GetItem(i));
				}
				else{
					HX_STACK_LINE(126)
					_g2 = HX_CSTRING("null");
				}
				HX_STACK_LINE(126)
				hx::AddEq(s,_g2);
			}
		}
		HX_STACK_LINE(130)
		int _g1 = s.indexOf(HX_CSTRING("\n"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(130)
		if (((_g1 >= (int)0))){
			HX_STACK_LINE(132)
			Array< ::String > a = s.split(HX_CSTRING("\n"));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(133)
				while((true)){
					HX_STACK_LINE(133)
					if ((!(((_g < a->length))))){
						HX_STACK_LINE(133)
						break;
					}
					HX_STACK_LINE(133)
					::String s1 = a->__get(_g);		HX_STACK_VAR(s1,"s1");
					HX_STACK_LINE(133)
					++(_g);
					HX_STACK_LINE(133)
					this->LOG->push(s1);
				}
			}
		}
		else{
			HX_STACK_LINE(137)
			this->LOG->push(s);
		}
		HX_STACK_LINE(141)
		if (((  ((this->_enabled)) ? bool(this->_sprite->get_visible()) : bool(false) ))){
			HX_STACK_LINE(141)
			this->updateLog();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,log,(void))

Void Console_obj::watch( Dynamic properties){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","watch",0xefd7a604,"com.haxepunk.debug.Console.watch","com/haxepunk/debug/Console.hx",149,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(properties,"properties")
		HX_STACK_LINE(150)
		::String i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(151)
		if (((properties->__Field(HX_CSTRING("length"),true) > (int)1))){
			HX_STACK_LINE(153)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(153)
			while((true)){
				HX_STACK_LINE(153)
				if ((!(((_g < properties->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(153)
					break;
				}
				HX_STACK_LINE(153)
				Dynamic i1 = properties->__GetItem(_g);		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(153)
				++(_g);
				HX_STACK_LINE(153)
				this->WATCH_LIST->push(i1);
			}
		}
		else{
			HX_STACK_LINE(157)
			this->WATCH_LIST->push(properties->__GetItem((int)0));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,watch,(void))

Void Console_obj::show( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","show",0x5a4a72e8,"com.haxepunk.debug.Console.show","com/haxepunk/debug/Console.hx",166,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(166)
		if ((!(this->_visible))){
			HX_STACK_LINE(168)
			::com::haxepunk::HXP_obj::stage->addChild(this->_sprite);
			HX_STACK_LINE(169)
			this->_visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,show,(void))

Void Console_obj::hide( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","hide",0x5305d2ad,"com.haxepunk.debug.Console.hide","com/haxepunk/debug/Console.hx",178,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(178)
		if ((this->_visible)){
			HX_STACK_LINE(180)
			::com::haxepunk::HXP_obj::stage->removeChild(this->_sprite);
			HX_STACK_LINE(181)
			this->_visible = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,hide,(void))

Void Console_obj::enable( ::com::haxepunk::debug::TraceCapture trace_capture,hx::Null< int >  __o_toggleKey){
int toggleKey = __o_toggleKey.Default(192);
	HX_STACK_FRAME("com.haxepunk.debug.Console","enable",0x2a12dd2e,"com.haxepunk.debug.Console.enable","com/haxepunk/debug/Console.hx",192,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(trace_capture,"trace_capture")
	HX_STACK_ARG(toggleKey,"toggleKey")
{
		HX_STACK_LINE(193)
		this->toggleKey = toggleKey;
		HX_STACK_LINE(196)
		if ((this->_enabled)){
			HX_STACK_LINE(196)
			return null();
		}
		HX_STACK_LINE(199)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(201)
			::flash::display::BitmapData _g = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_logo.png"),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(201)
			::flash::display::Bitmap _g1 = ::flash::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(201)
			this->_bmpLogo = _g1;
			HX_STACK_LINE(202)
			::flash::display::BitmapData _g2 = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_debug.png"),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(202)
			::flash::display::Bitmap _g3 = ::flash::display::Bitmap_obj::__new(_g2,null(),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(202)
			this->_butDebug = _g3;
			HX_STACK_LINE(203)
			::flash::display::BitmapData _g4 = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_output.png"),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(203)
			::flash::display::Bitmap _g5 = ::flash::display::Bitmap_obj::__new(_g4,null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(203)
			this->_butOutput = _g5;
			HX_STACK_LINE(204)
			::flash::display::BitmapData _g6 = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_play.png"),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(204)
			::flash::display::Bitmap _g7 = ::flash::display::Bitmap_obj::__new(_g6,null(),null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(204)
			this->_butPlay = _g7;
			HX_STACK_LINE(205)
			::flash::display::BitmapData _g8 = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_pause.png"),null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(205)
			::flash::display::Bitmap _g9 = ::flash::display::Bitmap_obj::__new(_g8,null(),null());		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(205)
			this->_butPause = _g9;
			HX_STACK_LINE(206)
			::flash::display::BitmapData _g10 = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("gfx/debug/console_step.png"),null());		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(206)
			::flash::display::Bitmap _g11 = ::flash::display::Bitmap_obj::__new(_g10,null(),null());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(206)
			this->_butStep = _g11;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(208)
					return null();
				}
			}
		}
		HX_STACK_LINE(212)
		this->_enabled = true;
		HX_STACK_LINE(213)
		this->_visible = true;
		HX_STACK_LINE(214)
		::com::haxepunk::HXP_obj::stage->addChild(this->_sprite);
		HX_STACK_LINE(217)
		int _g12 = this->get_width();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(217)
		bool big = (_g12 >= (int)420);		HX_STACK_VAR(big,"big");
		HX_STACK_LINE(220)
		this->_sprite->addChild(this->_back);
		HX_STACK_LINE(223)
		this->_sprite->addChild(this->_entScreen);
		HX_STACK_LINE(224)
		this->_entScreen->addChild(this->_entSelect);
		HX_STACK_LINE(227)
		this->_sprite->addChild(this->_entRead);
		HX_STACK_LINE(228)
		this->_entRead->addChild(this->_entReadText);
		HX_STACK_LINE(229)
		::flash::text::TextFormat _g13 = this->format((int)16,(int)16777215,HX_CSTRING("right"));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(229)
		this->_entReadText->set_defaultTextFormat(_g13);
		HX_STACK_LINE(233)
		this->_entReadText->set_width((int)100);
		HX_STACK_LINE(234)
		this->_entReadText->set_height((int)20);
		HX_STACK_LINE(235)
		int _g14 = this->get_width();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(235)
		Float _g15 = this->_entReadText->get_width();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(235)
		Float _g16 = (_g14 - _g15);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(235)
		this->_entRead->set_x(_g16);
		HX_STACK_LINE(238)
		this->_entRead->get_graphics()->clear();
		HX_STACK_LINE(239)
		this->_entRead->get_graphics()->beginFill((int)0,.5);
		HX_STACK_LINE(243)
		Float _g17 = this->_entReadText->get_width();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(243)
		Float _g18 = (_g17 + (int)20);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(243)
		this->_entRead->get_graphics()->drawRoundRect((int)0,(int)-20,_g18,(int)40,(int)40,(int)40);
		HX_STACK_LINE(247)
		this->_sprite->addChild(this->_fpsRead);
		HX_STACK_LINE(248)
		this->_fpsRead->addChild(this->_fpsReadText);
		HX_STACK_LINE(249)
		::flash::text::TextFormat _g19 = this->format((int)16,null(),null());		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(249)
		this->_fpsReadText->set_defaultTextFormat(_g19);
		HX_STACK_LINE(253)
		this->_fpsReadText->set_width((int)70);
		HX_STACK_LINE(254)
		this->_fpsReadText->set_height((int)20);
		HX_STACK_LINE(255)
		this->_fpsReadText->set_x((int)2);
		HX_STACK_LINE(256)
		this->_fpsReadText->set_y((int)1);
		HX_STACK_LINE(259)
		this->_fpsRead->get_graphics()->clear();
		HX_STACK_LINE(260)
		this->_fpsRead->get_graphics()->beginFill((int)0,.75);
		HX_STACK_LINE(264)
		this->_fpsRead->get_graphics()->drawRoundRect((int)-20,(int)-20,(  ((big)) ? Float((int)340) : Float((int)180) ),(int)40,(int)40,(int)40);
		HX_STACK_LINE(267)
		this->_sprite->addChild(this->_layerList);
		HX_STACK_LINE(270)
		if ((big)){
			HX_STACK_LINE(270)
			this->_sprite->addChild(this->_fpsInfo);
		}
		HX_STACK_LINE(271)
		this->_fpsInfo->addChild(this->_fpsInfoText0);
		HX_STACK_LINE(272)
		this->_fpsInfo->addChild(this->_fpsInfoText1);
		HX_STACK_LINE(273)
		::flash::text::TextFormat _g20 = this->format((int)8,(int)11184810,null());		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(273)
		this->_fpsInfoText0->set_defaultTextFormat(_g20);
		HX_STACK_LINE(274)
		::flash::text::TextFormat _g21 = this->format((int)8,(int)11184810,null());		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(274)
		this->_fpsInfoText1->set_defaultTextFormat(_g21);
		HX_STACK_LINE(279)
		Float _g22 = this->_fpsInfoText1->set_width((int)60);		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(279)
		this->_fpsInfoText0->set_width(_g22);
		HX_STACK_LINE(280)
		Float _g23 = this->_fpsInfoText1->set_height((int)20);		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(280)
		this->_fpsInfoText0->set_height(_g23);
		HX_STACK_LINE(281)
		this->_fpsInfo->set_x((int)75);
		HX_STACK_LINE(282)
		this->_fpsInfoText1->set_x((int)60);
		HX_STACK_LINE(283)
		Float _g24 = this->_fpsInfoText0->get_width();		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(283)
		Float _g25 = this->_fpsInfoText1->get_width();		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(283)
		Float _g26 = (_g24 + _g25);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(283)
		this->_fpsInfo->set_width(_g26);
		HX_STACK_LINE(287)
		this->_fpsRead->addChild(this->_memReadText);
		HX_STACK_LINE(288)
		::flash::text::TextFormat _g27 = this->format((int)16,null(),null());		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(288)
		this->_memReadText->set_defaultTextFormat(_g27);
		HX_STACK_LINE(289)
		this->_memReadText->set_embedFonts(true);
		HX_STACK_LINE(290)
		this->_memReadText->set_width((int)110);
		HX_STACK_LINE(291)
		this->_memReadText->set_height((int)20);
		HX_STACK_LINE(292)
		Float _g34;		HX_STACK_VAR(_g34,"_g34");
		HX_STACK_LINE(292)
		if ((big)){
			HX_STACK_LINE(292)
			Float _g28 = this->_fpsInfo->get_x();		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(292)
			Float _g29 = this->_fpsInfoText0->get_width();		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(292)
			Float _g30 = (_g28 + _g29);		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(292)
			Float _g31 = this->_fpsInfoText1->get_width();		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(292)
			Float _g32 = (_g30 + _g31);		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(292)
			_g34 = (_g32 + (int)5);
		}
		else{
			HX_STACK_LINE(292)
			Float _g33 = this->_fpsInfo->get_x();		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(292)
			_g34 = (_g33 + (int)9);
		}
		HX_STACK_LINE(292)
		this->_memReadText->set_x(_g34);
		HX_STACK_LINE(293)
		this->_memReadText->set_y((int)1);
		HX_STACK_LINE(297)
		this->_sprite->addChild(this->_logRead);
		HX_STACK_LINE(298)
		this->_logRead->addChild(this->_logReadText0);
		HX_STACK_LINE(299)
		this->_logRead->addChild(this->_logReadText1);
		HX_STACK_LINE(300)
		::flash::text::TextFormat _g35 = this->format((int)16,(int)16777215,null());		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(300)
		this->_logReadText0->set_defaultTextFormat(_g35);
		HX_STACK_LINE(301)
		::flash::text::TextFormat _g36 = this->format((  ((big)) ? int((int)16) : int((int)8) ),(int)16777215,null());		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(301)
		this->_logReadText1->set_defaultTextFormat(_g36);
		HX_STACK_LINE(306)
		this->_logReadText0->set_selectable(false);
		HX_STACK_LINE(307)
		this->_logReadText0->set_width((int)80);
		HX_STACK_LINE(308)
		this->_logReadText0->set_height((int)20);
		HX_STACK_LINE(309)
		int _g37 = this->get_width();		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(309)
		this->_logReadText1->set_width(_g37);
		HX_STACK_LINE(310)
		this->_logReadText0->set_x((int)2);
		HX_STACK_LINE(311)
		this->_logReadText0->set_y((int)3);
		HX_STACK_LINE(312)
		this->_logReadText0->set_text(HX_CSTRING("OUTPUT:"));
		HX_STACK_LINE(313)
		int _g38 = this->get_height();		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(313)
		int _g39 = (_g38 - (int)60);		HX_STACK_VAR(_g39,"_g39");
		HX_STACK_LINE(313)
		this->_logHeight = _g39;
		HX_STACK_LINE(314)
		::flash::geom::Rectangle _g40 = ::flash::geom::Rectangle_obj::__new((int)8,(int)24,(int)16,(this->_logHeight - (int)8));		HX_STACK_VAR(_g40,"_g40");
		HX_STACK_LINE(314)
		this->_logBar = _g40;
		HX_STACK_LINE(315)
		::flash::geom::Rectangle _g41 = this->_logBar->clone();		HX_STACK_VAR(_g41,"_g41");
		HX_STACK_LINE(315)
		this->_logBarGlobal = _g41;
		HX_STACK_LINE(316)
		hx::AddEq(this->_logBarGlobal->y,(int)40);
		HX_STACK_LINE(317)
		if ((big)){
			HX_STACK_LINE(317)
			int _g42 = ::Std_obj::_int((Float(this->_logHeight) / Float(16.5)));		HX_STACK_VAR(_g42,"_g42");
			HX_STACK_LINE(317)
			this->_logLines = _g42;
		}
		else{
			HX_STACK_LINE(318)
			int _g43 = ::Std_obj::_int((Float(this->_logHeight) / Float(8.5)));		HX_STACK_VAR(_g43,"_g43");
			HX_STACK_LINE(318)
			this->_logLines = _g43;
		}
		HX_STACK_LINE(321)
		this->_sprite->addChild(this->_debRead);
		HX_STACK_LINE(322)
		this->_debRead->addChild(this->_debReadText0);
		HX_STACK_LINE(323)
		this->_debRead->addChild(this->_debReadText1);
		HX_STACK_LINE(324)
		::flash::text::TextFormat _g44 = this->format((int)16,(int)16777215,null());		HX_STACK_VAR(_g44,"_g44");
		HX_STACK_LINE(324)
		this->_debReadText0->set_defaultTextFormat(_g44);
		HX_STACK_LINE(325)
		::flash::text::TextFormat _g45 = this->format((int)8,(int)16777215,null());		HX_STACK_VAR(_g45,"_g45");
		HX_STACK_LINE(325)
		this->_debReadText1->set_defaultTextFormat(_g45);
		HX_STACK_LINE(330)
		this->_debReadText0->set_selectable(false);
		HX_STACK_LINE(331)
		this->_debReadText0->set_width((int)80);
		HX_STACK_LINE(332)
		this->_debReadText0->set_height((int)20);
		HX_STACK_LINE(333)
		this->_debReadText1->set_width((int)160);
		HX_STACK_LINE(334)
		int _g46 = this->get_height();		HX_STACK_VAR(_g46,"_g46");
		HX_STACK_LINE(334)
		Float _g47 = (Float(_g46) / Float((int)4));		HX_STACK_VAR(_g47,"_g47");
		HX_STACK_LINE(334)
		int _g48 = ::Std_obj::_int(_g47);		HX_STACK_VAR(_g48,"_g48");
		HX_STACK_LINE(334)
		this->_debReadText1->set_height(_g48);
		HX_STACK_LINE(335)
		this->_debReadText0->set_x((int)2);
		HX_STACK_LINE(336)
		this->_debReadText0->set_y((int)3);
		HX_STACK_LINE(337)
		this->_debReadText1->set_x((int)2);
		HX_STACK_LINE(338)
		this->_debReadText1->set_y((int)24);
		HX_STACK_LINE(339)
		this->_debReadText0->set_text(HX_CSTRING("DEBUG:"));
		HX_STACK_LINE(340)
		int _g49 = this->get_height();		HX_STACK_VAR(_g49,"_g49");
		HX_STACK_LINE(340)
		Float _g50 = this->_debReadText1->get_y();		HX_STACK_VAR(_g50,"_g50");
		HX_STACK_LINE(340)
		Float _g51 = this->_debReadText1->get_height();		HX_STACK_VAR(_g51,"_g51");
		HX_STACK_LINE(340)
		Float _g52 = (_g50 + _g51);		HX_STACK_VAR(_g52,"_g52");
		HX_STACK_LINE(340)
		Float _g53 = (_g49 - _g52);		HX_STACK_VAR(_g53,"_g53");
		HX_STACK_LINE(340)
		this->_debRead->set_y(_g53);
		HX_STACK_LINE(343)
		this->_sprite->addChild(this->_butRead);
		HX_STACK_LINE(344)
		this->_butRead->addChild(this->_butDebug);
		HX_STACK_LINE(345)
		this->_butRead->addChild(this->_butOutput);
		HX_STACK_LINE(346)
		this->_butRead->addChild(this->_butPlay)->set_x((int)20);
		HX_STACK_LINE(347)
		this->_butRead->addChild(this->_butPause)->set_x((int)20);
		HX_STACK_LINE(348)
		this->_butRead->addChild(this->_butStep)->set_x((int)40);
		HX_STACK_LINE(349)
		this->updateButtons();
		HX_STACK_LINE(352)
		this->_butRead->get_graphics()->clear();
		HX_STACK_LINE(353)
		this->_butRead->get_graphics()->beginFill((int)0,.75);
		HX_STACK_LINE(357)
		this->_butRead->get_graphics()->drawRoundRect((int)-20,(int)-20,(int)100,(int)40,(int)40,(int)40);
		HX_STACK_LINE(359)
		this->set_debug(true);
		HX_STACK_LINE(362)
		::com::haxepunk::HXP_obj::stage->addEventListener(::flash::events::Event_obj::RESIZE,this->onResize_dyn(),null(),null(),null());
		HX_STACK_LINE(363)
		this->onResize(null());
		HX_STACK_LINE(366)
		this->set_paused(false);
		HX_STACK_LINE(368)
		if (((trace_capture == ::com::haxepunk::debug::TraceCapture_obj::Yes))){
			HX_STACK_LINE(369)
			::haxe::Log_obj::trace = this->traceLog_dyn();
		}
		HX_STACK_LINE(371)
		this->LOG->push(HX_CSTRING("-- HaxePunk v2.6.0-dev --"));
		HX_STACK_LINE(372)
		if (((  ((this->_enabled)) ? bool(this->_sprite->get_visible()) : bool(false) ))){
			HX_STACK_LINE(372)
			this->updateLog();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,enable,(void))

Void Console_obj::onResize( ::flash::events::Event e){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","onResize",0xf5dcbfde,"com.haxepunk.debug.Console.onResize","com/haxepunk/debug/Console.hx",376,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(377)
		if (((this->_back->bitmapData != null()))){
			HX_STACK_LINE(379)
			this->_back->bitmapData->dispose();
		}
		HX_STACK_LINE(381)
		int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(381)
		int _g1 = this->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(381)
		::flash::display::BitmapData _g2 = ::com::haxepunk::HXP_obj::createBitmap(_g,_g1,true,(int)-1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(381)
		this->_back->set_bitmapData(_g2);
		HX_STACK_LINE(382)
		::com::haxepunk::HXP_obj::matrix->identity();
		HX_STACK_LINE(383)
		int _g3 = this->_back->bitmapData->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(383)
		Float _g4 = this->_bmpLogo->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(383)
		Float _g5 = (_g3 - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(383)
		Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(383)
		Float _g7 = ::Math_obj::max(_g6,(int)0);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(383)
		::com::haxepunk::HXP_obj::matrix->tx = _g7;
		HX_STACK_LINE(384)
		int _g8 = this->_back->bitmapData->get_height();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(384)
		Float _g9 = this->_bmpLogo->get_height();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(384)
		Float _g10 = (_g8 - _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(384)
		Float _g11 = (Float(_g10) / Float((int)2));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(384)
		Float _g12 = ::Math_obj::max(_g11,(int)0);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(384)
		::com::haxepunk::HXP_obj::matrix->ty = _g12;
		HX_STACK_LINE(385)
		int _g13 = this->get_width();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(385)
		int _g14 = this->_back->bitmapData->get_width();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(385)
		Float _g15 = (Float(_g13) / Float(_g14));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(385)
		Float _g16 = ::Math_obj::min(_g15,(int)1);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(385)
		int _g17 = this->get_height();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(385)
		int _g18 = this->_back->bitmapData->get_height();		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(385)
		Float _g19 = (Float(_g17) / Float(_g18));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(385)
		Float _g20 = ::Math_obj::min(_g19,(int)1);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(385)
		::com::haxepunk::HXP_obj::matrix->scale(_g16,_g20);
		HX_STACK_LINE(386)
		this->_back->bitmapData->draw(this->_bmpLogo,::com::haxepunk::HXP_obj::matrix,null(),::flash::display::BlendMode_obj::MULTIPLY,null(),null());
		HX_STACK_LINE(387)
		this->_back->bitmapData->draw(this->_back->bitmapData,null(),null(),::flash::display::BlendMode_obj::INVERT,null(),null());
		HX_STACK_LINE(388)
		::flash::geom::Rectangle _g21 = this->_back->bitmapData->get_rect();		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(388)
		::flash::geom::ColorTransform _g22 = ::flash::geom::ColorTransform_obj::__new((int)1,(int)1,(int)1,0.5,null(),null(),null(),null());		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(388)
		this->_back->bitmapData->colorTransform(_g21,_g22);
		HX_STACK_LINE(389)
		this->updateLog();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onResize,(void))

bool Console_obj::get_visible( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_visible",0x49539dfe,"com.haxepunk.debug.Console.get_visible","com/haxepunk/debug/Console.hx",396,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(396)
	return this->_sprite->get_visible();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_visible,return )

bool Console_obj::set_visible( bool value){
	HX_STACK_FRAME("com.haxepunk.debug.Console","set_visible",0x53c0a50a,"com.haxepunk.debug.Console.set_visible","com/haxepunk/debug/Console.hx",398,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(399)
	this->_sprite->set_visible(value);
	HX_STACK_LINE(400)
	if (((bool(this->_enabled) && bool(value)))){
		HX_STACK_LINE(400)
		this->updateLog();
	}
	HX_STACK_LINE(401)
	return this->_sprite->get_visible();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_visible,return )

bool Console_obj::set_debugDraw( bool value){
	HX_STACK_FRAME("com.haxepunk.debug.Console","set_debugDraw",0x572e528f,"com.haxepunk.debug.Console.set_debugDraw","com/haxepunk/debug/Console.hx",409,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(410)
	this->debugDraw = value;
	HX_STACK_LINE(411)
	this->updateEntityLists(false);
	HX_STACK_LINE(412)
	this->renderEntities();
	HX_STACK_LINE(413)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_debugDraw,return )

Void Console_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","update",0xb890b4b4,"com.haxepunk.debug.Console.update","com/haxepunk/debug/Console.hx",420,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(422)
		if (((bool(!(this->_enabled)) || bool(!(this->_visible))))){
			HX_STACK_LINE(423)
			return null();
		}
		HX_STACK_LINE(426)
		int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(426)
		Float _g1 = this->_entReadText->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(426)
		Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(426)
		this->_entRead->set_x(_g2);
		HX_STACK_LINE(427)
		int _g3 = this->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(427)
		Float _g4 = this->_layerList->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(427)
		Float _g5 = (_g3 - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(427)
		Float _g6 = (_g5 - (int)20);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(427)
		this->_layerList->set_x(_g6);
		HX_STACK_LINE(428)
		int _g7 = this->get_height();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(428)
		Float _g8 = this->_layerList->get_height();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(428)
		Float _g9 = (_g7 - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(428)
		Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(428)
		this->_layerList->set_y(_g10);
		HX_STACK_LINE(429)
		this->_layerList->set_visible((bool(::com::haxepunk::HXP_obj::engine->paused) && bool(this->_debug)));
		HX_STACK_LINE(432)
		if ((this->_butRead->get_visible())){
			HX_STACK_LINE(433)
			this->updateButtons();
		}
		HX_STACK_LINE(436)
		if ((this->_paused)){
			HX_STACK_LINE(440)
			if ((this->_debug)){
				HX_STACK_LINE(442)
				this->updateEntityLists((::com::haxepunk::HXP_obj::engine->_scene->_update->length != this->ENTITY_LIST->length));
				HX_STACK_LINE(445)
				if ((::com::haxepunk::HXP_obj::engine->paused)){
					HX_STACK_LINE(448)
					if ((::com::haxepunk::utils::Input_obj::mousePressed)){
						HX_STACK_LINE(451)
						int _g11 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(_g11,"_g11");
						struct _Function_5_1{
							inline static bool Block( hx::ObjectPtr< ::com::haxepunk::debug::Console_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/debug/Console.hx",451,0xfa4cbb5c)
								{
									HX_STACK_LINE(451)
									int _g12 = ::com::haxepunk::utils::Input_obj::get_mouseFlashX();		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(451)
									Float _g13 = __this->_debReadText1->get_width();		HX_STACK_VAR(_g13,"_g13");
									struct _Function_6_1{
										inline static bool Block( hx::ObjectPtr< ::com::haxepunk::debug::Console_obj > __this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/debug/Console.hx",451,0xfa4cbb5c)
											{
												HX_STACK_LINE(451)
												int _g14 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(_g14,"_g14");
												HX_STACK_LINE(451)
												Float _g15 = __this->_debRead->get_y();		HX_STACK_VAR(_g15,"_g15");
												HX_STACK_LINE(451)
												return (_g14 < _g15);
											}
											return null();
										}
									};
									HX_STACK_LINE(451)
									return (  ((!(((_g12 > _g13))))) ? bool(_Function_6_1::Block(__this)) : bool(true) );
								}
								return null();
							}
						};
						HX_STACK_LINE(451)
						if (((  (((_g11 > (int)20))) ? bool(_Function_5_1::Block(this)) : bool(false) ))){
							HX_STACK_LINE(453)
							::com::haxepunk::ds::Either _g16 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)16);		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(453)
							if ((::com::haxepunk::utils::Input_obj::check(_g16))){
								HX_STACK_LINE(455)
								if (((this->SELECT_LIST->length != (int)0))){
									HX_STACK_LINE(455)
									this->startDragging();
								}
								else{
									HX_STACK_LINE(456)
									this->startPanning();
								}
							}
							else{
								HX_STACK_LINE(458)
								this->startSelection();
							}
						}
					}
					else{
						HX_STACK_LINE(464)
						if ((this->_selecting)){
							HX_STACK_LINE(464)
							this->updateSelection();
						}
						HX_STACK_LINE(465)
						if ((this->_dragging)){
							HX_STACK_LINE(465)
							this->updateDragging();
						}
						HX_STACK_LINE(466)
						if ((this->_panning)){
							HX_STACK_LINE(466)
							this->updatePanning();
						}
					}
					HX_STACK_LINE(470)
					::com::haxepunk::ds::Either _g17 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)65);		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(470)
					if ((::com::haxepunk::utils::Input_obj::pressed(_g17))){
						HX_STACK_LINE(470)
						this->selectAll();
					}
					HX_STACK_LINE(473)
					::com::haxepunk::ds::Either _g18 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)16);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(473)
					if ((::com::haxepunk::utils::Input_obj::check(_g18))){
						HX_STACK_LINE(476)
						if (((this->SELECT_LIST->length != (int)0))){
							HX_STACK_LINE(479)
							::com::haxepunk::ds::Either _g19 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft(HX_CSTRING("_ARROWS"));		HX_STACK_VAR(_g19,"_g19");
							HX_STACK_LINE(479)
							if ((::com::haxepunk::utils::Input_obj::pressed(_g19))){
								HX_STACK_LINE(479)
								this->updateKeyMoving();
							}
						}
						else{
							HX_STACK_LINE(484)
							::com::haxepunk::ds::Either _g20 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft(HX_CSTRING("_ARROWS"));		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(484)
							if ((::com::haxepunk::utils::Input_obj::check(_g20))){
								HX_STACK_LINE(484)
								this->updateKeyPanning();
							}
						}
					}
				}
				else{
					HX_STACK_LINE(491)
					this->renderEntities();
					HX_STACK_LINE(492)
					this->updateFPSRead();
					HX_STACK_LINE(493)
					this->updateEntityCount();
				}
				HX_STACK_LINE(497)
				this->updateDebugRead();
			}
			else{
				HX_STACK_LINE(502)
				if ((this->_scrolling)){
					HX_STACK_LINE(502)
					this->updateScrolling();
				}
				else{
					HX_STACK_LINE(503)
					if ((::com::haxepunk::utils::Input_obj::mousePressed)){
						HX_STACK_LINE(503)
						this->startScrolling();
					}
				}
			}
		}
		else{
			HX_STACK_LINE(509)
			this->updateFPSRead();
			HX_STACK_LINE(510)
			this->updateEntityCount();
		}
		HX_STACK_LINE(514)
		::com::haxepunk::ds::Either _g21 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight(this->toggleKey);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(514)
		if ((::com::haxepunk::utils::Input_obj::pressed(_g21))){
			HX_STACK_LINE(514)
			this->set_paused(!(this->_paused));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,update,(void))

bool Console_obj::get_paused( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_paused",0x174b10a2,"com.haxepunk.debug.Console.get_paused","com/haxepunk/debug/Console.hx",521,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(521)
	return this->_paused;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_paused,return )

bool Console_obj::set_paused( bool value){
	HX_STACK_FRAME("com.haxepunk.debug.Console","set_paused",0x1ac8af16,"com.haxepunk.debug.Console.set_paused","com/haxepunk/debug/Console.hx",523,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(525)
	if ((!(this->_enabled))){
		HX_STACK_LINE(525)
		return false;
	}
	HX_STACK_LINE(528)
	this->_paused = value;
	HX_STACK_LINE(529)
	::com::haxepunk::HXP_obj::engine->paused = value;
	HX_STACK_LINE(532)
	this->_back->set_visible(value);
	HX_STACK_LINE(533)
	this->_entScreen->set_visible(value);
	HX_STACK_LINE(539)
	if ((value)){
		HX_STACK_LINE(542)
		if ((this->_debug)){
			HX_STACK_LINE(542)
			this->set_debug(true);
		}
		else{
			HX_STACK_LINE(543)
			this->updateLog();
		}
	}
	else{
		HX_STACK_LINE(548)
		this->_debRead->set_visible(false);
		HX_STACK_LINE(549)
		this->_logRead->set_visible(true);
		HX_STACK_LINE(550)
		this->updateLog();
		HX_STACK_LINE(551)
		{
			HX_STACK_LINE(551)
			Dynamic array = this->ENTITY_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(551)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(552)
		{
			HX_STACK_LINE(552)
			Dynamic array = this->SCREEN_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(552)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(553)
			Dynamic array = this->SELECT_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(553)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
	}
	HX_STACK_LINE(555)
	return this->_paused;
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_paused,return )

bool Console_obj::get_debug( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_debug",0x0af5bcdf,"com.haxepunk.debug.Console.get_debug","com/haxepunk/debug/Console.hx",562,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(562)
	return this->_debug;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_debug,return )

bool Console_obj::set_debug( bool value){
	HX_STACK_FRAME("com.haxepunk.debug.Console","set_debug",0xee46a8eb,"com.haxepunk.debug.Console.set_debug","com/haxepunk/debug/Console.hx",564,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(566)
	if ((!(this->_enabled))){
		HX_STACK_LINE(566)
		return false;
	}
	HX_STACK_LINE(569)
	this->_debug = value;
	HX_STACK_LINE(570)
	this->_debRead->set_visible(value);
	HX_STACK_LINE(571)
	this->_logRead->set_visible(!(value));
	HX_STACK_LINE(574)
	if ((value)){
		HX_STACK_LINE(574)
		this->updateEntityLists(null());
	}
	else{
		HX_STACK_LINE(575)
		this->updateLog();
	}
	HX_STACK_LINE(576)
	this->renderEntities();
	HX_STACK_LINE(577)
	return this->_debug;
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_debug,return )

Void Console_obj::stepFrame( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","stepFrame",0x671c1b76,"com.haxepunk.debug.Console.stepFrame","com/haxepunk/debug/Console.hx",582,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(583)
		::com::haxepunk::HXP_obj::engine->update();
		HX_STACK_LINE(584)
		::com::haxepunk::HXP_obj::engine->render();
		HX_STACK_LINE(585)
		this->updateEntityCount();
		HX_STACK_LINE(586)
		this->updateEntityLists(null());
		HX_STACK_LINE(587)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,stepFrame,(void))

Void Console_obj::startDragging( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","startDragging",0x67506c06,"com.haxepunk.debug.Console.startDragging","com/haxepunk/debug/Console.hx",592,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(593)
		this->_dragging = true;
		HX_STACK_LINE(594)
		int _g = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(594)
		this->_entRect->x = _g;
		HX_STACK_LINE(595)
		int _g1 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(595)
		this->_entRect->y = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startDragging,(void))

Void Console_obj::updateDragging( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateDragging",0xe96081a3,"com.haxepunk.debug.Console.updateDragging","com/haxepunk/debug/Console.hx",600,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(601)
		int _g = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(601)
		Float _g1 = (_g - this->_entRect->x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(601)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(601)
		int _g3 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(601)
		Float _g4 = (_g3 - this->_entRect->y);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(601)
		int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(601)
		this->moveSelected(_g2,_g5);
		HX_STACK_LINE(602)
		int _g6 = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(602)
		this->_entRect->x = _g6;
		HX_STACK_LINE(603)
		int _g7 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(603)
		this->_entRect->y = _g7;
		HX_STACK_LINE(604)
		if ((::com::haxepunk::utils::Input_obj::mouseReleased)){
			HX_STACK_LINE(604)
			this->_dragging = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateDragging,(void))

Void Console_obj::moveSelected( int xDelta,int yDelta){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","moveSelected",0x539ac377,"com.haxepunk.debug.Console.moveSelected","com/haxepunk/debug/Console.hx",609,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xDelta,"xDelta")
		HX_STACK_ARG(yDelta,"yDelta")
		HX_STACK_LINE(610)
		{
			HX_STACK_LINE(610)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(610)
			Array< ::Dynamic > _g1 = this->SELECT_LIST;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(610)
			while((true)){
				HX_STACK_LINE(610)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(610)
					break;
				}
				HX_STACK_LINE(610)
				::com::haxepunk::Entity e = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(610)
				++(_g);
				HX_STACK_LINE(612)
				{
					HX_STACK_LINE(612)
					::com::haxepunk::Entity _g2 = e;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(612)
					_g2->x = (((  ((_g2->followCamera)) ? Float((_g2->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(_g2->x) )) + xDelta);
				}
				HX_STACK_LINE(613)
				{
					HX_STACK_LINE(613)
					::com::haxepunk::Entity _g2 = e;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(613)
					_g2->y = (((  ((_g2->followCamera)) ? Float((_g2->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(_g2->y) )) + yDelta);
				}
			}
		}
		HX_STACK_LINE(615)
		::com::haxepunk::HXP_obj::engine->render();
		HX_STACK_LINE(616)
		this->renderEntities();
		HX_STACK_LINE(617)
		this->updateEntityLists(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,moveSelected,(void))

Void Console_obj::startPanning( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","startPanning",0x18bf2dba,"com.haxepunk.debug.Console.startPanning","com/haxepunk/debug/Console.hx",622,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(623)
		this->_panning = true;
		HX_STACK_LINE(624)
		int _g = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(624)
		this->_entRect->x = _g;
		HX_STACK_LINE(625)
		int _g1 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(625)
		this->_entRect->y = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startPanning,(void))

Void Console_obj::updatePanning( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updatePanning",0x8f927abd,"com.haxepunk.debug.Console.updatePanning","com/haxepunk/debug/Console.hx",630,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(631)
		if ((::com::haxepunk::utils::Input_obj::mouseReleased)){
			HX_STACK_LINE(631)
			this->_panning = false;
		}
		HX_STACK_LINE(632)
		int _g = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(632)
		Float _g1 = (this->_entRect->x - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(632)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(632)
		int _g3 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(632)
		Float _g4 = (this->_entRect->y - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(632)
		int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(632)
		this->panCamera(_g2,_g5);
		HX_STACK_LINE(633)
		int _g6 = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(633)
		this->_entRect->x = _g6;
		HX_STACK_LINE(634)
		int _g7 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(634)
		this->_entRect->y = _g7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updatePanning,(void))

Void Console_obj::panCamera( int xDelta,int yDelta){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","panCamera",0xb041fe17,"com.haxepunk.debug.Console.panCamera","com/haxepunk/debug/Console.hx",639,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xDelta,"xDelta")
		HX_STACK_ARG(yDelta,"yDelta")
		HX_STACK_LINE(640)
		hx::AddEq(::com::haxepunk::HXP_obj::camera->x,xDelta);
		HX_STACK_LINE(641)
		hx::AddEq(::com::haxepunk::HXP_obj::camera->y,yDelta);
		HX_STACK_LINE(642)
		::com::haxepunk::HXP_obj::engine->render();
		HX_STACK_LINE(643)
		this->updateEntityLists(true);
		HX_STACK_LINE(644)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,panCamera,(void))

Void Console_obj::setCamera( int x,int y){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","setCamera",0x0760ca1c,"com.haxepunk.debug.Console.setCamera","com/haxepunk/debug/Console.hx",649,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(650)
		::com::haxepunk::HXP_obj::camera->x = x;
		HX_STACK_LINE(651)
		::com::haxepunk::HXP_obj::camera->y = y;
		HX_STACK_LINE(652)
		::com::haxepunk::HXP_obj::engine->render();
		HX_STACK_LINE(653)
		this->updateEntityLists(true);
		HX_STACK_LINE(654)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,setCamera,(void))

Void Console_obj::startSelection( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","startSelection",0x2a001935,"com.haxepunk.debug.Console.startSelection","com/haxepunk/debug/Console.hx",659,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(660)
		this->_selecting = true;
		HX_STACK_LINE(661)
		int _g = ::com::haxepunk::utils::Input_obj::get_mouseFlashX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(661)
		this->_entRect->x = _g;
		HX_STACK_LINE(662)
		int _g1 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(662)
		this->_entRect->y = _g1;
		HX_STACK_LINE(663)
		this->_entRect->width = (int)0;
		HX_STACK_LINE(664)
		this->_entRect->height = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startSelection,(void))

Void Console_obj::updateSelection( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateSelection",0x7602ecf8,"com.haxepunk.debug.Console.updateSelection","com/haxepunk/debug/Console.hx",669,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(670)
		int _g = ::com::haxepunk::utils::Input_obj::get_mouseFlashX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(670)
		Float _g1 = (_g - this->_entRect->x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(670)
		this->_entRect->width = _g1;
		HX_STACK_LINE(671)
		int _g2 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(671)
		Float _g3 = (_g2 - this->_entRect->y);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(671)
		this->_entRect->height = _g3;
		HX_STACK_LINE(672)
		if ((::com::haxepunk::utils::Input_obj::mouseReleased)){
			HX_STACK_LINE(674)
			this->selectEntities(this->_entRect);
			HX_STACK_LINE(675)
			this->renderEntities();
			HX_STACK_LINE(676)
			this->_selecting = false;
			HX_STACK_LINE(677)
			this->_entSelect->get_graphics()->clear();
		}
		else{
			HX_STACK_LINE(681)
			this->_entSelect->get_graphics()->clear();
			HX_STACK_LINE(682)
			this->_entSelect->get_graphics()->lineStyle((int)1,(int)16777215,null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(683)
			this->_entSelect->get_graphics()->drawRect(this->_entRect->x,this->_entRect->y,this->_entRect->width,this->_entRect->height);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateSelection,(void))

Void Console_obj::selectEntities( ::flash::geom::Rectangle rect){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","selectEntities",0x68721b08,"com.haxepunk.debug.Console.selectEntities","com/haxepunk/debug/Console.hx",689,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(690)
		if (((rect->width < (int)0))){
			HX_STACK_LINE(690)
			Float _g = rect->width = -(rect->width);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(690)
			hx::SubEq(rect->x,_g);
		}
		else{
			HX_STACK_LINE(691)
			if (((rect->width == (int)0))){
				HX_STACK_LINE(691)
				rect->width = (int)1;
			}
		}
		HX_STACK_LINE(692)
		if (((rect->height < (int)0))){
			HX_STACK_LINE(692)
			Float _g1 = rect->height = -(rect->height);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(692)
			hx::SubEq(rect->y,_g1);
		}
		else{
			HX_STACK_LINE(693)
			if (((rect->height == (int)0))){
				HX_STACK_LINE(693)
				rect->height = (int)1;
			}
		}
		HX_STACK_LINE(695)
		Float _g2 = ::com::haxepunk::HXP_obj::rect->height = (int)6;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(695)
		::com::haxepunk::HXP_obj::rect->width = _g2;
		HX_STACK_LINE(696)
		Float sx = ::com::haxepunk::HXP_obj::screen->fullScaleX;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(697)
		Float sy = ::com::haxepunk::HXP_obj::screen->fullScaleY;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(696)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(700)
		::com::haxepunk::ds::Either _g3 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)17);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(700)
		if ((!(::com::haxepunk::utils::Input_obj::check(_g3)))){
			HX_STACK_LINE(703)
			Dynamic array = this->SELECT_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(703)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(706)
			Array< ::Dynamic > _g1 = this->SCREEN_LIST;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(706)
			while((true)){
				HX_STACK_LINE(706)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(706)
					break;
				}
				HX_STACK_LINE(706)
				::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(706)
				++(_g);
				HX_STACK_LINE(708)
				::com::haxepunk::HXP_obj::rect->x = ((((((  ((e1->followCamera)) ? Float((e1->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e1->x) )) - ::com::haxepunk::HXP_obj::camera->x)) * sx) - (int)3);
				HX_STACK_LINE(709)
				::com::haxepunk::HXP_obj::rect->y = ((((((  ((e1->followCamera)) ? Float((e1->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e1->y) )) - ::com::haxepunk::HXP_obj::camera->y)) * sy) - (int)3);
				HX_STACK_LINE(710)
				if ((rect->intersects(::com::haxepunk::HXP_obj::rect))){
					HX_STACK_LINE(712)
					int _g4 = this->SELECT_LIST->indexOf(e1,null());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(712)
					if (((_g4 < (int)0))){
						HX_STACK_LINE(714)
						this->SELECT_LIST->push(e1);
					}
					else{
						HX_STACK_LINE(718)
						this->SELECT_LIST->remove(e1);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,selectEntities,(void))

Void Console_obj::selectAll( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","selectAll",0x7e29a9ba,"com.haxepunk.debug.Console.selectAll","com/haxepunk/debug/Console.hx",726,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(728)
		int numSelected = this->SELECT_LIST->length;		HX_STACK_VAR(numSelected,"numSelected");
		HX_STACK_LINE(729)
		{
			HX_STACK_LINE(729)
			Dynamic array = this->SELECT_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(729)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(732)
		if (((numSelected != this->SCREEN_LIST->length))){
			HX_STACK_LINE(734)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(734)
			Array< ::Dynamic > _g1 = this->SCREEN_LIST;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(734)
			while((true)){
				HX_STACK_LINE(734)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(734)
					break;
				}
				HX_STACK_LINE(734)
				::com::haxepunk::Entity e = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(734)
				++(_g);
				HX_STACK_LINE(734)
				this->SELECT_LIST->push(e);
			}
		}
		HX_STACK_LINE(736)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,selectAll,(void))

Void Console_obj::startScrolling( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","startScrolling",0xd9ff1bde,"com.haxepunk.debug.Console.startScrolling","com/haxepunk/debug/Console.hx",742,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(742)
		if (((this->LOG->length > this->_logLines))){
			HX_STACK_LINE(742)
			int _g = ::com::haxepunk::utils::Input_obj::get_mouseFlashX();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(742)
			int _g1 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(742)
			bool _g2 = this->_logBarGlobal->contains(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(742)
			this->_scrolling = _g2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startScrolling,(void))

Void Console_obj::updateScrolling( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateScrolling",0x2601efa1,"com.haxepunk.debug.Console.updateScrolling","com/haxepunk/debug/Console.hx",747,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(748)
		this->_scrolling = ::com::haxepunk::utils::Input_obj::mouseDown;
		HX_STACK_LINE(749)
		int _g = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(749)
		Float _g1 = this->_logBarGlobal->get_bottom();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(749)
		Float _g2 = ::com::haxepunk::HXP_obj::scaleClamp(_g,this->_logBarGlobal->y,_g1,(int)0,(int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(749)
		this->_logScroll = _g2;
		HX_STACK_LINE(750)
		this->updateLog();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateScrolling,(void))

Void Console_obj::updateKeyMoving( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateKeyMoving",0x4c9f6639,"com.haxepunk.debug.Console.updateKeyMoving","com/haxepunk/debug/Console.hx",755,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(756)
		::com::haxepunk::ds::Either _g = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)39);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(756)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(756)
		if ((::com::haxepunk::utils::Input_obj::pressed(_g))){
			HX_STACK_LINE(756)
			_g1 = (int)1;
		}
		else{
			HX_STACK_LINE(756)
			_g1 = (int)0;
		}
		HX_STACK_LINE(756)
		::com::haxepunk::ds::Either _g2 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)37);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(756)
		int _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(756)
		if ((::com::haxepunk::utils::Input_obj::pressed(_g2))){
			HX_STACK_LINE(756)
			_g3 = (int)1;
		}
		else{
			HX_STACK_LINE(756)
			_g3 = (int)0;
		}
		HX_STACK_LINE(756)
		int _g4 = (_g1 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(756)
		::com::haxepunk::HXP_obj::point->x = _g4;
		HX_STACK_LINE(757)
		::com::haxepunk::ds::Either _g5 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)40);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(757)
		int _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(757)
		if ((::com::haxepunk::utils::Input_obj::pressed(_g5))){
			HX_STACK_LINE(757)
			_g6 = (int)1;
		}
		else{
			HX_STACK_LINE(757)
			_g6 = (int)0;
		}
		HX_STACK_LINE(757)
		::com::haxepunk::ds::Either _g7 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)38);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(757)
		int _g8;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(757)
		if ((::com::haxepunk::utils::Input_obj::pressed(_g7))){
			HX_STACK_LINE(757)
			_g8 = (int)1;
		}
		else{
			HX_STACK_LINE(757)
			_g8 = (int)0;
		}
		HX_STACK_LINE(757)
		int _g9 = (_g6 - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(757)
		::com::haxepunk::HXP_obj::point->y = _g9;
		HX_STACK_LINE(758)
		if (((bool((::com::haxepunk::HXP_obj::point->x != (int)0)) || bool((::com::haxepunk::HXP_obj::point->y != (int)0))))){
			HX_STACK_LINE(758)
			int _g10 = ::Std_obj::_int(::com::haxepunk::HXP_obj::point->x);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(758)
			int _g11 = ::Std_obj::_int(::com::haxepunk::HXP_obj::point->y);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(758)
			this->moveSelected(_g10,_g11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateKeyMoving,(void))

Void Console_obj::updateKeyPanning( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateKeyPanning",0x0ab10b06,"com.haxepunk.debug.Console.updateKeyPanning","com/haxepunk/debug/Console.hx",763,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(764)
		::com::haxepunk::ds::Either _g = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)39);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(764)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(764)
		if ((::com::haxepunk::utils::Input_obj::check(_g))){
			HX_STACK_LINE(764)
			_g1 = (int)1;
		}
		else{
			HX_STACK_LINE(764)
			_g1 = (int)0;
		}
		HX_STACK_LINE(764)
		::com::haxepunk::ds::Either _g2 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)37);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(764)
		int _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(764)
		if ((::com::haxepunk::utils::Input_obj::check(_g2))){
			HX_STACK_LINE(764)
			_g3 = (int)1;
		}
		else{
			HX_STACK_LINE(764)
			_g3 = (int)0;
		}
		HX_STACK_LINE(764)
		int _g4 = (_g1 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(764)
		::com::haxepunk::HXP_obj::point->x = _g4;
		HX_STACK_LINE(765)
		::com::haxepunk::ds::Either _g5 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)40);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(765)
		int _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(765)
		if ((::com::haxepunk::utils::Input_obj::check(_g5))){
			HX_STACK_LINE(765)
			_g6 = (int)1;
		}
		else{
			HX_STACK_LINE(765)
			_g6 = (int)0;
		}
		HX_STACK_LINE(765)
		::com::haxepunk::ds::Either _g7 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)38);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(765)
		int _g8;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(765)
		if ((::com::haxepunk::utils::Input_obj::check(_g7))){
			HX_STACK_LINE(765)
			_g8 = (int)1;
		}
		else{
			HX_STACK_LINE(765)
			_g8 = (int)0;
		}
		HX_STACK_LINE(765)
		int _g9 = (_g6 - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(765)
		::com::haxepunk::HXP_obj::point->y = _g9;
		HX_STACK_LINE(766)
		if (((bool((::com::haxepunk::HXP_obj::point->x != (int)0)) || bool((::com::haxepunk::HXP_obj::point->y != (int)0))))){
			HX_STACK_LINE(766)
			int _g10 = ::Std_obj::_int(::com::haxepunk::HXP_obj::point->x);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(766)
			int _g11 = ::Std_obj::_int(::com::haxepunk::HXP_obj::point->y);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(766)
			this->panCamera(_g10,_g11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateKeyPanning,(void))

Void Console_obj::updateEntityLists( hx::Null< bool >  __o_fetchList){
bool fetchList = __o_fetchList.Default(true);
	HX_STACK_FRAME("com.haxepunk.debug.Console","updateEntityLists",0x6d3f4bde,"com.haxepunk.debug.Console.updateEntityLists","com/haxepunk/debug/Console.hx",771,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fetchList,"fetchList")
{
		HX_STACK_LINE(773)
		if ((fetchList)){
			HX_STACK_LINE(775)
			{
				HX_STACK_LINE(775)
				Dynamic array = this->ENTITY_LIST;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(775)
				array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
			}
			HX_STACK_LINE(776)
			::com::haxepunk::HXP_obj::engine->_scene->getAll(this->ENTITY_LIST);
			HX_STACK_LINE(778)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->LAYER_LIST->keys());  __it->hasNext(); ){
				int key = __it->next();
				this->LAYER_LIST->set(key,(int)0);
			}
		}
		HX_STACK_LINE(785)
		{
			HX_STACK_LINE(785)
			Dynamic array = this->SCREEN_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(785)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(786)
		{
			HX_STACK_LINE(786)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(786)
			Array< ::Dynamic > _g1 = this->ENTITY_LIST;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(786)
			while((true)){
				HX_STACK_LINE(786)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(786)
					break;
				}
				HX_STACK_LINE(786)
				::com::haxepunk::Entity e = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(786)
				++(_g);
				HX_STACK_LINE(788)
				int layer = e->_layer;		HX_STACK_VAR(layer,"layer");
				struct _Function_3_1{
					inline static bool Block( int &layer){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/debug/Console.hx",789,0xfa4cbb5c)
						{
							HX_STACK_LINE(789)
							::com::haxepunk::Scene _this = ::com::haxepunk::HXP_obj::engine->_scene;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(789)
							return (  ((!((!(_this->_layerDisplay->exists(layer)))))) ? bool(_this->_layerDisplay->get(layer)) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(789)
				if (((  (((  (((e->_scene == null()))) ? bool(false) : bool(e->collideRect((  ((e->followCamera)) ? Float((e->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e->x) ),(  ((e->followCamera)) ? Float((e->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e->y) ),e->_scene->camera->x,e->_scene->camera->y,::com::haxepunk::HXP_obj::width,::com::haxepunk::HXP_obj::height)) ))) ? bool(_Function_3_1::Block(layer)) : bool(false) ))){
					HX_STACK_LINE(790)
					this->SCREEN_LIST->push(e);
				}
				HX_STACK_LINE(792)
				if ((fetchList)){
					HX_STACK_LINE(793)
					int _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(793)
					if ((this->LAYER_LIST->exists(layer))){
						HX_STACK_LINE(793)
						Dynamic _g2 = this->LAYER_LIST->get(layer);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(793)
						_g11 = (_g2 + (int)1);
					}
					else{
						HX_STACK_LINE(793)
						_g11 = (int)1;
					}
					HX_STACK_LINE(793)
					this->LAYER_LIST->set(layer,_g11);
				}
			}
		}
		HX_STACK_LINE(796)
		if ((fetchList)){
			HX_STACK_LINE(798)
			this->_layerList->set(this->LAYER_LIST);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,updateEntityLists,(void))

Void Console_obj::renderEntities( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","renderEntities",0x83175562,"com.haxepunk.debug.Console.renderEntities","com/haxepunk/debug/Console.hx",804,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(805)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(807)
		this->_entScreen->set_visible(this->_debug);
		HX_STACK_LINE(808)
		if ((this->_debug)){
			HX_STACK_LINE(810)
			::flash::display::Graphics g = this->_entScreen->get_graphics();		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(811)
			Float sx = ::com::haxepunk::HXP_obj::screen->fullScaleX;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(812)
			Float sy = ::com::haxepunk::HXP_obj::screen->fullScaleY;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(813)
			int colorHitbox = (int)16777215;		HX_STACK_VAR(colorHitbox,"colorHitbox");
			HX_STACK_LINE(814)
			int colorPosition = (int)16777215;		HX_STACK_VAR(colorPosition,"colorPosition");
			HX_STACK_LINE(815)
			g->clear();
			HX_STACK_LINE(816)
			{
				HX_STACK_LINE(816)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(816)
				Array< ::Dynamic > _g1 = this->SCREEN_LIST;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(816)
				while((true)){
					HX_STACK_LINE(816)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(816)
						break;
					}
					HX_STACK_LINE(816)
					::com::haxepunk::Entity e1 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(816)
					++(_g);
					HX_STACK_LINE(818)
					Float graphicScrollX;		HX_STACK_VAR(graphicScrollX,"graphicScrollX");
					HX_STACK_LINE(818)
					if (((e1->_graphic != null()))){
						HX_STACK_LINE(818)
						graphicScrollX = e1->_graphic->scrollX;
					}
					else{
						HX_STACK_LINE(818)
						graphicScrollX = (int)1;
					}
					HX_STACK_LINE(819)
					Float graphicScrollY;		HX_STACK_VAR(graphicScrollY,"graphicScrollY");
					HX_STACK_LINE(819)
					if (((e1->_graphic != null()))){
						HX_STACK_LINE(819)
						graphicScrollY = e1->_graphic->scrollY;
					}
					else{
						HX_STACK_LINE(819)
						graphicScrollY = (int)1;
					}
					HX_STACK_LINE(822)
					int _g2 = this->SELECT_LIST->indexOf(e1,null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(822)
					if (((_g2 < (int)0))){
						HX_STACK_LINE(824)
						colorHitbox = (int)16711680;
						HX_STACK_LINE(825)
						colorPosition = (int)65280;
					}
					else{
						HX_STACK_LINE(829)
						colorHitbox = (int)16777215;
						HX_STACK_LINE(830)
						colorPosition = (int)16777215;
					}
					HX_STACK_LINE(834)
					if (((bool((e1->width != (int)0)) && bool((e1->height != (int)0))))){
						HX_STACK_LINE(836)
						g->lineStyle((int)1,colorHitbox,null(),null(),null(),null(),null(),null());
						HX_STACK_LINE(837)
						g->drawRect(((((((  ((e1->followCamera)) ? Float((e1->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e1->x) )) - e1->originX) - (::com::haxepunk::HXP_obj::camera->x * graphicScrollX))) * sx),((((((  ((e1->followCamera)) ? Float((e1->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e1->y) )) - e1->originY) - (::com::haxepunk::HXP_obj::camera->y * graphicScrollY))) * sy),(e1->width * sx),(e1->height * sy));
						HX_STACK_LINE(839)
						if (((bool(this->debugDraw) && bool((e1->_mask != null()))))){
							HX_STACK_LINE(841)
							g->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
							HX_STACK_LINE(842)
							e1->_mask->debugDraw(g,sx,sy);
						}
					}
					HX_STACK_LINE(845)
					g->lineStyle((int)1,colorPosition,null(),null(),null(),null(),null(),null());
					HX_STACK_LINE(846)
					g->drawCircle((((((  ((e1->followCamera)) ? Float((e1->x + ::com::haxepunk::HXP_obj::camera->x)) : Float(e1->x) )) - (::com::haxepunk::HXP_obj::camera->x * graphicScrollX))) * sx),(((((  ((e1->followCamera)) ? Float((e1->y + ::com::haxepunk::HXP_obj::camera->y)) : Float(e1->y) )) - (::com::haxepunk::HXP_obj::camera->y * graphicScrollY))) * sy),(int)3);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,renderEntities,(void))

Void Console_obj::updateLog( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateLog",0x730c4030,"com.haxepunk.debug.Console.updateLog","com/haxepunk/debug/Console.hx",853,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(854)
		int _g = this->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(854)
		int _g1 = (_g - (int)60);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(854)
		this->_logHeight = _g1;
		HX_STACK_LINE(855)
		this->_logBar->height = (this->_logHeight - (int)8);
		HX_STACK_LINE(858)
		if ((this->_paused)){
			HX_STACK_LINE(861)
			this->_logRead->set_y((int)40);
			HX_STACK_LINE(862)
			this->_logRead->get_graphics()->clear();
			HX_STACK_LINE(863)
			this->_logRead->get_graphics()->beginFill((int)0,.75);
			HX_STACK_LINE(867)
			Float _g2 = this->_logReadText0->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(867)
			Float _g3 = (_g2 - (int)20);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(867)
			this->_logRead->get_graphics()->drawRect((int)0,(int)0,_g3,(int)20);
			HX_STACK_LINE(868)
			Float _g4 = this->_logReadText0->get_width();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(868)
			this->_logRead->get_graphics()->moveTo(_g4,(int)20);
			HX_STACK_LINE(869)
			Float _g5 = this->_logReadText0->get_width();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(869)
			Float _g6 = (_g5 - (int)20);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(869)
			this->_logRead->get_graphics()->lineTo(_g6,(int)20);
			HX_STACK_LINE(870)
			Float _g7 = this->_logReadText0->get_width();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(870)
			Float _g8 = (_g7 - (int)20);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(870)
			this->_logRead->get_graphics()->lineTo(_g8,(int)0);
			HX_STACK_LINE(871)
			Float _g9 = this->_logReadText0->get_width();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(871)
			Float _g10 = this->_logReadText0->get_width();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(871)
			this->_logRead->get_graphics()->curveTo(_g9,(int)0,_g10,(int)20);
			HX_STACK_LINE(873)
			int _g11 = this->get_width();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(873)
			this->_logRead->get_graphics()->drawRect((int)0,(int)20,_g11,this->_logHeight);
			HX_STACK_LINE(876)
			this->_logRead->get_graphics()->beginFill((int)2105376,(int)1);
			HX_STACK_LINE(880)
			this->_logRead->get_graphics()->drawRoundRect(this->_logBar->x,this->_logBar->y,this->_logBar->width,this->_logBar->height,(int)16,(int)16);
			HX_STACK_LINE(884)
			if (((this->LOG->length > this->_logLines))){
				HX_STACK_LINE(887)
				this->_logRead->get_graphics()->beginFill((int)16777215,(int)1);
				HX_STACK_LINE(888)
				int y = ::Std_obj::_int(((this->_logBar->y + (int)2) + (((this->_logBar->height - (int)16)) * this->_logScroll)));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(892)
				this->_logRead->get_graphics()->drawRoundRect((this->_logBar->x + (int)2),y,(int)12,(int)12,(int)12,(int)12);
			}
			HX_STACK_LINE(897)
			if (((this->LOG->length != (int)0))){
				HX_STACK_LINE(899)
				int i;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(899)
				if (((this->LOG->length > this->_logLines))){
					HX_STACK_LINE(899)
					int _g12 = ::Math_obj::round((((this->LOG->length - this->_logLines)) * this->_logScroll));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(899)
					i = ::Std_obj::_int(_g12);
				}
				else{
					HX_STACK_LINE(899)
					i = (int)0;
				}
				HX_STACK_LINE(900)
				Float _g13 = ::Math_obj::min(this->_logLines,this->LOG->length);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(900)
				Float _g14 = (i + _g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(900)
				int n = ::Std_obj::_int(_g14);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(901)
				::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(902)
				while((true)){
					HX_STACK_LINE(902)
					if ((!(((i < n))))){
						HX_STACK_LINE(902)
						break;
					}
					HX_STACK_LINE(902)
					int _g15 = (i)++;		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(902)
					::String _g16 = this->LOG->__get(_g15);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(902)
					::String _g17 = (_g16 + HX_CSTRING("\n"));		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(902)
					hx::AddEq(s,_g17);
				}
				HX_STACK_LINE(903)
				this->_logReadText1->set_text(s);
			}
			else{
				HX_STACK_LINE(905)
				this->_logReadText1->set_text(HX_CSTRING(""));
			}
			HX_STACK_LINE(908)
			this->_logReadText1->set_height(this->_logHeight);
			HX_STACK_LINE(909)
			this->_logReadText1->set_x((int)32);
			HX_STACK_LINE(910)
			this->_logReadText1->set_y((int)24);
			HX_STACK_LINE(913)
			this->_fpsReadText->set_selectable(true);
			HX_STACK_LINE(914)
			this->_fpsInfoText0->set_selectable(true);
			HX_STACK_LINE(915)
			this->_fpsInfoText1->set_selectable(true);
			HX_STACK_LINE(916)
			this->_memReadText->set_selectable(true);
			HX_STACK_LINE(917)
			this->_entReadText->set_selectable(true);
			HX_STACK_LINE(918)
			this->_debReadText1->set_selectable(true);
		}
		else{
			HX_STACK_LINE(923)
			int _g18 = this->get_height();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(923)
			int _g19 = (_g18 - (int)40);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(923)
			this->_logRead->set_y(_g19);
			HX_STACK_LINE(924)
			this->_logReadText1->set_height((int)20);
			HX_STACK_LINE(925)
			this->_logRead->get_graphics()->clear();
			HX_STACK_LINE(926)
			this->_logRead->get_graphics()->beginFill((int)0,.75);
			HX_STACK_LINE(930)
			Float _g20 = this->_logReadText0->get_width();		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(930)
			Float _g21 = (_g20 - (int)20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(930)
			this->_logRead->get_graphics()->drawRect((int)0,(int)0,_g21,(int)20);
			HX_STACK_LINE(931)
			Float _g22 = this->_logReadText0->get_width();		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(931)
			this->_logRead->get_graphics()->moveTo(_g22,(int)20);
			HX_STACK_LINE(932)
			Float _g23 = this->_logReadText0->get_width();		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(932)
			Float _g24 = (_g23 - (int)20);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(932)
			this->_logRead->get_graphics()->lineTo(_g24,(int)20);
			HX_STACK_LINE(933)
			Float _g25 = this->_logReadText0->get_width();		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(933)
			Float _g26 = (_g25 - (int)20);		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(933)
			this->_logRead->get_graphics()->lineTo(_g26,(int)0);
			HX_STACK_LINE(934)
			Float _g27 = this->_logReadText0->get_width();		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(934)
			Float _g28 = this->_logReadText0->get_width();		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(934)
			this->_logRead->get_graphics()->curveTo(_g27,(int)0,_g28,(int)20);
			HX_STACK_LINE(936)
			int _g29 = this->get_width();		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(936)
			this->_logRead->get_graphics()->drawRect((int)0,(int)20,_g29,(int)20);
			HX_STACK_LINE(939)
			this->_logReadText1->set_text((  (((this->LOG->length != (int)0))) ? ::String(this->LOG->__get((this->LOG->length - (int)1))) : ::String(HX_CSTRING("")) ));
			HX_STACK_LINE(940)
			this->_logReadText1->set_x((int)2);
			HX_STACK_LINE(941)
			this->_logReadText1->set_y((int)21);
			HX_STACK_LINE(944)
			this->_logReadText1->set_selectable(false);
			HX_STACK_LINE(945)
			this->_fpsReadText->set_selectable(false);
			HX_STACK_LINE(946)
			this->_fpsInfoText0->set_selectable(false);
			HX_STACK_LINE(947)
			this->_fpsInfoText1->set_selectable(false);
			HX_STACK_LINE(948)
			this->_memReadText->set_selectable(false);
			HX_STACK_LINE(949)
			this->_entReadText->set_selectable(false);
			HX_STACK_LINE(950)
			this->_debReadText0->set_selectable(false);
			HX_STACK_LINE(951)
			this->_debReadText1->set_selectable(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateLog,(void))

Void Console_obj::updateFPSRead( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateFPSRead",0x8553fd8b,"com.haxepunk.debug.Console.updateFPSRead","com/haxepunk/debug/Console.hx",957,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(958)
		int _g = ::Std_obj::_int(::com::haxepunk::HXP_obj::frameRate);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(958)
		::String _g1 = (HX_CSTRING("FPS: ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(958)
		this->_fpsReadText->set_text(_g1);
		HX_STACK_LINE(960)
		::String _g2 = ::Std_obj::string(::com::haxepunk::HXP_obj::_updateTime);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(960)
		::String _g3 = (HX_CSTRING("Update: ") + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(960)
		::String _g4 = (_g3 + HX_CSTRING("ms\n"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(960)
		::String _g5 = (_g4 + HX_CSTRING("Render: "));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(961)
		::String _g6 = ::Std_obj::string(::com::haxepunk::HXP_obj::_renderTime);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(960)
		::String _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(960)
		::String _g8 = (_g7 + HX_CSTRING("ms"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(959)
		this->_fpsInfoText0->set_text(_g8);
		HX_STACK_LINE(963)
		::String _g9 = ::Std_obj::string(::com::haxepunk::HXP_obj::_systemTime);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(963)
		::String _g10 = (HX_CSTRING("System: ") + _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(963)
		::String _g11 = (_g10 + HX_CSTRING("ms\n"));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(963)
		::String _g12 = (_g11 + HX_CSTRING("Game: "));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(964)
		::String _g13 = ::Std_obj::string(::com::haxepunk::HXP_obj::_gameTime);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(963)
		::String _g14 = (_g12 + _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(963)
		::String _g15 = (_g14 + HX_CSTRING("ms"));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(962)
		this->_fpsInfoText1->set_text(_g15);
		HX_STACK_LINE(967)
		int _g16 = this->get_width();		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(967)
		::String _g17;		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(967)
		if (((_g16 >= (int)420))){
			HX_STACK_LINE(967)
			_g17 = HX_CSTRING("Mem: ");
		}
		else{
			HX_STACK_LINE(967)
			_g17 = HX_CSTRING("");
		}
		HX_STACK_LINE(967)
		Float _g21;		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(967)
		{
			HX_STACK_LINE(967)
			int _g18 = ::flash::system::System_obj::get_totalMemory();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(967)
			Float _g19 = (Float(_g18) / Float((int)1024));		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(967)
			Float num = (Float(_g19) / Float((int)1024));		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(967)
			Float exp = ::Math_obj::pow((int)10,(int)2);		HX_STACK_VAR(exp,"exp");
			HX_STACK_LINE(967)
			int _g20 = ::Math_obj::round((num * exp));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(967)
			_g21 = (Float(_g20) / Float(exp));
		}
		HX_STACK_LINE(967)
		::String _g22 = (_g17 + _g21);		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(967)
		::String _g23 = (_g22 + HX_CSTRING("MB"));		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(966)
		this->_memReadText->set_text(_g23);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateFPSRead,(void))

Void Console_obj::updateDebugRead( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateDebugRead",0x16dae3f5,"com.haxepunk.debug.Console.updateDebugRead","com/haxepunk/debug/Console.hx",973,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(974)
		::String str;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(976)
		int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(976)
		bool big = (_g >= (int)420);		HX_STACK_VAR(big,"big");
		HX_STACK_LINE(980)
		int _g1 = ::com::haxepunk::HXP_obj::screen->get_mouseX();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(980)
		Float _g2 = (_g1 + ::com::haxepunk::HXP_obj::engine->_scene->camera->x);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(980)
		int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(980)
		::String _g4 = ::Std_obj::string(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(980)
		::String _g5 = (HX_CSTRING("Mouse: ") + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(980)
		::String _g6 = (_g5 + HX_CSTRING(", "));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(980)
		int _g7 = ::com::haxepunk::HXP_obj::screen->get_mouseY();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(980)
		Float _g8 = (_g7 + ::com::haxepunk::HXP_obj::engine->_scene->camera->y);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(980)
		int _g9 = ::Std_obj::_int(_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(980)
		::String _g10 = ::Std_obj::string(_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(980)
		::String _g11 = (_g6 + _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(980)
		::String _g12 = (_g11 + HX_CSTRING("\nCamera: "));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(981)
		::String _g13 = ::Std_obj::string(::com::haxepunk::HXP_obj::camera->x);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(980)
		::String _g14 = (_g12 + _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(980)
		::String _g15 = (_g14 + HX_CSTRING(", "));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(981)
		::String _g16 = ::Std_obj::string(::com::haxepunk::HXP_obj::camera->y);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(980)
		::String s = (_g15 + _g16);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(982)
		if (((this->SELECT_LIST->length != (int)0))){
			HX_STACK_LINE(984)
			if (((this->SELECT_LIST->length > (int)1))){
				HX_STACK_LINE(986)
				::String _g17 = ::Std_obj::string(this->SELECT_LIST->length);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(986)
				::String _g18 = (HX_CSTRING("\n\nSelected: ") + _g17);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(986)
				hx::AddEq(s,_g18);
			}
			else{
				HX_STACK_LINE(990)
				::com::haxepunk::Entity e = this->SELECT_LIST->__get((int)0).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(991)
				::Class _g19 = ::Type_obj::getClass(e);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(991)
				::String _g20 = ::Type_obj::getClassName(_g19);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(991)
				::String _g21 = (HX_CSTRING("\n\n- ") + _g20);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(991)
				::String _g22 = (_g21 + HX_CSTRING(" -\n"));		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(991)
				hx::AddEq(s,_g22);
				HX_STACK_LINE(992)
				{
					HX_STACK_LINE(992)
					int _g17 = (int)0;		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(992)
					Array< ::String > _g18 = this->WATCH_LIST;		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(992)
					while((true)){
						HX_STACK_LINE(992)
						if ((!(((_g17 < _g18->length))))){
							HX_STACK_LINE(992)
							break;
						}
						HX_STACK_LINE(992)
						::String str1 = _g18->__get(_g17);		HX_STACK_VAR(str1,"str1");
						HX_STACK_LINE(992)
						++(_g17);
						HX_STACK_LINE(997)
						Dynamic field = ::Reflect_obj::field(e,str1);		HX_STACK_VAR(field,"field");
						HX_STACK_LINE(999)
						if (((field != null()))){
							HX_STACK_LINE(1001)
							::String _g23 = ::Std_obj::string(field);		HX_STACK_VAR(_g23,"_g23");
							HX_STACK_LINE(1001)
							::String _g24 = (((HX_CSTRING("\n") + str1) + HX_CSTRING(": ")) + _g23);		HX_STACK_VAR(_g24,"_g24");
							HX_STACK_LINE(1001)
							hx::AddEq(s,_g24);
						}
					}
				}
			}
		}
		HX_STACK_LINE(1008)
		this->_debReadText1->set_text(s);
		HX_STACK_LINE(1009)
		::flash::text::TextFormat _g25 = this->format((  ((big)) ? int((int)16) : int((int)8) ),null(),null());		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(1009)
		this->_debReadText1->setTextFormat(_g25,null(),null());
		HX_STACK_LINE(1010)
		Float _g26 = this->_debReadText1->get_textWidth();		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(1010)
		Float _g27 = (_g26 + (int)4);		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(1010)
		Float _g28 = this->_debReadText0->get_width();		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(1010)
		Float _g29 = ::Math_obj::max(_g27,_g28);		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(1010)
		this->_debReadText1->set_width(_g29);
		HX_STACK_LINE(1011)
		Float _g30 = this->_debReadText1->get_y();		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(1011)
		Float _g31 = this->_debReadText1->get_textHeight();		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(1011)
		Float _g32 = (_g30 + _g31);		HX_STACK_VAR(_g32,"_g32");
		HX_STACK_LINE(1011)
		Float _g33 = (_g32 + (int)4);		HX_STACK_VAR(_g33,"_g33");
		HX_STACK_LINE(1011)
		this->_debReadText1->set_height(_g33);
		HX_STACK_LINE(1014)
		int _g34 = this->get_height();		HX_STACK_VAR(_g34,"_g34");
		HX_STACK_LINE(1014)
		Float _g35 = this->_debReadText1->get_height();		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(1014)
		Float _g36 = (_g34 - _g35);		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(1014)
		int _g37 = ::Std_obj::_int(_g36);		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(1014)
		this->_debRead->set_y(_g37);
		HX_STACK_LINE(1015)
		this->_debRead->get_graphics()->clear();
		HX_STACK_LINE(1016)
		this->_debRead->get_graphics()->beginFill((int)0,.75);
		HX_STACK_LINE(1021)
		Float _g38 = this->_debReadText0->get_width();		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(1021)
		Float _g39 = (_g38 - (int)20);		HX_STACK_VAR(_g39,"_g39");
		HX_STACK_LINE(1021)
		this->_debRead->get_graphics()->drawRect((int)0,(int)0,_g39,(int)20);
		HX_STACK_LINE(1022)
		Float _g40 = this->_debReadText0->get_width();		HX_STACK_VAR(_g40,"_g40");
		HX_STACK_LINE(1022)
		this->_debRead->get_graphics()->moveTo(_g40,(int)20);
		HX_STACK_LINE(1023)
		Float _g41 = this->_debReadText0->get_width();		HX_STACK_VAR(_g41,"_g41");
		HX_STACK_LINE(1023)
		Float _g42 = (_g41 - (int)20);		HX_STACK_VAR(_g42,"_g42");
		HX_STACK_LINE(1023)
		this->_debRead->get_graphics()->lineTo(_g42,(int)20);
		HX_STACK_LINE(1024)
		Float _g43 = this->_debReadText0->get_width();		HX_STACK_VAR(_g43,"_g43");
		HX_STACK_LINE(1024)
		Float _g44 = (_g43 - (int)20);		HX_STACK_VAR(_g44,"_g44");
		HX_STACK_LINE(1024)
		this->_debRead->get_graphics()->lineTo(_g44,(int)0);
		HX_STACK_LINE(1025)
		Float _g45 = this->_debReadText0->get_width();		HX_STACK_VAR(_g45,"_g45");
		HX_STACK_LINE(1025)
		Float _g46 = this->_debReadText0->get_width();		HX_STACK_VAR(_g46,"_g46");
		HX_STACK_LINE(1025)
		this->_debRead->get_graphics()->curveTo(_g45,(int)0,_g46,(int)20);
		HX_STACK_LINE(1026)
		Float _g47 = this->_debReadText1->get_width();		HX_STACK_VAR(_g47,"_g47");
		HX_STACK_LINE(1026)
		Float _g48 = (_g47 + (int)40);		HX_STACK_VAR(_g48,"_g48");
		HX_STACK_LINE(1026)
		int _g49 = this->get_height();		HX_STACK_VAR(_g49,"_g49");
		HX_STACK_LINE(1026)
		Float _g50 = this->_debRead->get_y();		HX_STACK_VAR(_g50,"_g50");
		HX_STACK_LINE(1026)
		Float _g51 = (_g49 - _g50);		HX_STACK_VAR(_g51,"_g51");
		HX_STACK_LINE(1026)
		this->_debRead->get_graphics()->drawRoundRect((int)-20,(int)20,_g48,_g51,(int)40,(int)40);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateDebugRead,(void))

Void Console_obj::updateEntityCount( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateEntityCount",0x429cda58,"com.haxepunk.debug.Console.updateEntityCount","com/haxepunk/debug/Console.hx",1032,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1033)
		::String _g = ::Std_obj::string(::com::haxepunk::HXP_obj::engine->_scene->_update->length);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1033)
		::String _g1 = (_g + HX_CSTRING(" Entities"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1033)
		this->_entReadText->set_text(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateEntityCount,(void))

Void Console_obj::updateButtons( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateButtons",0xc0ec83ed,"com.haxepunk.debug.Console.updateButtons","com/haxepunk/debug/Console.hx",1038,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1040)
		int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1040)
		Float _g16;		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(1040)
		if (((_g >= (int)420))){
			HX_STACK_LINE(1040)
			Float _g1 = this->_fpsInfo->get_x();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1040)
			Float _g2 = this->_fpsInfoText0->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1040)
			Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1040)
			Float _g4 = this->_fpsInfoText1->get_width();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1040)
			Float _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1040)
			Float _g6 = this->_entRead->get_x();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1040)
			Float _g7 = this->_fpsInfo->get_x();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(1040)
			Float _g8 = this->_fpsInfoText0->get_width();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(1040)
			Float _g9 = (_g7 + _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(1040)
			Float _g10 = this->_fpsInfoText1->get_width();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(1040)
			Float _g11 = (_g9 + _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1040)
			Float _g12 = (_g6 - _g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(1040)
			Float _g13 = (Float(_g12) / Float((int)2));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(1040)
			int _g14 = ::Std_obj::_int(_g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(1040)
			Float _g15 = (_g5 + _g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(1040)
			_g16 = (_g15 - (int)30);
		}
		else{
			HX_STACK_LINE(1040)
			_g16 = (int)180;
		}
		HX_STACK_LINE(1040)
		this->_butRead->set_x(_g16);
		HX_STACK_LINE(1041)
		this->_butDebug->set_visible((bool(this->_paused) && bool(!(this->_debug))));
		HX_STACK_LINE(1042)
		this->_butOutput->set_visible((bool(this->_paused) && bool(this->_debug)));
		HX_STACK_LINE(1043)
		this->_butPlay->set_visible(::com::haxepunk::HXP_obj::engine->paused);
		HX_STACK_LINE(1044)
		this->_butPause->set_visible(!(::com::haxepunk::HXP_obj::engine->paused));
		HX_STACK_LINE(1045)
		this->_butStep->set_visible(this->_paused);
		HX_STACK_LINE(1048)
		Float _g17 = this->_butDebug->get_mouseX();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(1048)
		Float _g18 = this->_butDebug->get_mouseY();		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(1048)
		if ((this->_butDebug->bitmapData->get_rect()->contains(_g17,_g18))){
			HX_STACK_LINE(1050)
			Float _g19 = this->_butOutput->set_alpha((int)1);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(1050)
			this->_butDebug->set_alpha(_g19);
			HX_STACK_LINE(1051)
			if ((::com::haxepunk::utils::Input_obj::mousePressed)){
				HX_STACK_LINE(1051)
				this->set_debug(!(this->_debug));
			}
		}
		else{
			HX_STACK_LINE(1053)
			Float _g20 = this->_butOutput->set_alpha(0.5);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(1053)
			this->_butDebug->set_alpha(_g20);
		}
		HX_STACK_LINE(1056)
		Float _g21 = this->_butPlay->get_mouseX();		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(1056)
		Float _g22 = this->_butPlay->get_mouseY();		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(1056)
		if ((this->_butPlay->bitmapData->get_rect()->contains(_g21,_g22))){
			HX_STACK_LINE(1058)
			Float _g23 = this->_butPause->set_alpha((int)1);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(1058)
			this->_butPlay->set_alpha(_g23);
			HX_STACK_LINE(1059)
			if ((::com::haxepunk::utils::Input_obj::mousePressed)){
				HX_STACK_LINE(1061)
				::com::haxepunk::HXP_obj::engine->paused = !(::com::haxepunk::HXP_obj::engine->paused);
				HX_STACK_LINE(1062)
				this->renderEntities();
			}
		}
		else{
			HX_STACK_LINE(1065)
			Float _g24 = this->_butPause->set_alpha(0.5);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(1065)
			this->_butPlay->set_alpha(_g24);
		}
		HX_STACK_LINE(1068)
		Float _g25 = this->_butStep->get_mouseX();		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(1068)
		Float _g26 = this->_butStep->get_mouseY();		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(1068)
		if ((this->_butStep->bitmapData->get_rect()->contains(_g25,_g26))){
			HX_STACK_LINE(1070)
			this->_butStep->set_alpha((int)1);
			HX_STACK_LINE(1071)
			if ((::com::haxepunk::utils::Input_obj::mousePressed)){
				HX_STACK_LINE(1071)
				this->stepFrame();
			}
		}
		else{
			HX_STACK_LINE(1073)
			this->_butStep->set_alpha(.5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateButtons,(void))

::flash::text::TextFormat Console_obj::format( hx::Null< int >  __o_size,hx::Null< int >  __o_color,::String __o_align){
int size = __o_size.Default(16);
int color = __o_color.Default(16777215);
::String align = __o_align.Default(HX_CSTRING("left"));
	HX_STACK_FRAME("com.haxepunk.debug.Console","format",0x2f19bde2,"com.haxepunk.debug.Console.format","com/haxepunk/debug/Console.hx",1078,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(align,"align")
{
		HX_STACK_LINE(1079)
		this->_format->size = size;
		HX_STACK_LINE(1080)
		this->_format->color = color;
		HX_STACK_LINE(1081)
		::String _switch_1 = (align);
		if (  ( _switch_1==HX_CSTRING("left"))){
			HX_STACK_LINE(1084)
			this->_format->align = ::flash::text::TextFormatAlign_obj::LEFT;
		}
		else if (  ( _switch_1==HX_CSTRING("right"))){
			HX_STACK_LINE(1086)
			this->_format->align = ::flash::text::TextFormatAlign_obj::RIGHT;
		}
		else if (  ( _switch_1==HX_CSTRING("center"))){
			HX_STACK_LINE(1088)
			this->_format->align = ::flash::text::TextFormatAlign_obj::CENTER;
		}
		else if (  ( _switch_1==HX_CSTRING("justify"))){
			HX_STACK_LINE(1090)
			this->_format->align = ::flash::text::TextFormatAlign_obj::JUSTIFY;
		}
		HX_STACK_LINE(1092)
		return this->_format;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Console_obj,format,return )

int Console_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_width",0xfe392092,"com.haxepunk.debug.Console.get_width","com/haxepunk/debug/Console.hx",1099,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1099)
	return ::com::haxepunk::HXP_obj::windowWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_width,return )

int Console_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_height",0x2a12d7db,"com.haxepunk.debug.Console.get_height","com/haxepunk/debug/Console.hx",1102,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1102)
	return ::com::haxepunk::HXP_obj::windowHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_height,return )

int Console_obj::BIG_WIDTH_THRESHOLD;


Console_obj::Console_obj()
{
}

void Console_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Console);
	HX_MARK_MEMBER_NAME(toggleKey,"toggleKey");
	HX_MARK_MEMBER_NAME(debugDraw,"debugDraw");
	HX_MARK_MEMBER_NAME(_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(_visible,"_visible");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	HX_MARK_MEMBER_NAME(_debug,"_debug");
	HX_MARK_MEMBER_NAME(_scrolling,"_scrolling");
	HX_MARK_MEMBER_NAME(_selecting,"_selecting");
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(_panning,"_panning");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_back,"_back");
	HX_MARK_MEMBER_NAME(_fpsRead,"_fpsRead");
	HX_MARK_MEMBER_NAME(_fpsReadText,"_fpsReadText");
	HX_MARK_MEMBER_NAME(_fpsInfo,"_fpsInfo");
	HX_MARK_MEMBER_NAME(_fpsInfoText0,"_fpsInfoText0");
	HX_MARK_MEMBER_NAME(_fpsInfoText1,"_fpsInfoText1");
	HX_MARK_MEMBER_NAME(_memReadText,"_memReadText");
	HX_MARK_MEMBER_NAME(_layerList,"_layerList");
	HX_MARK_MEMBER_NAME(_logRead,"_logRead");
	HX_MARK_MEMBER_NAME(_logReadText0,"_logReadText0");
	HX_MARK_MEMBER_NAME(_logReadText1,"_logReadText1");
	HX_MARK_MEMBER_NAME(_logHeight,"_logHeight");
	HX_MARK_MEMBER_NAME(_logBar,"_logBar");
	HX_MARK_MEMBER_NAME(_logBarGlobal,"_logBarGlobal");
	HX_MARK_MEMBER_NAME(_logScroll,"_logScroll");
	HX_MARK_MEMBER_NAME(_entRead,"_entRead");
	HX_MARK_MEMBER_NAME(_entReadText,"_entReadText");
	HX_MARK_MEMBER_NAME(_debRead,"_debRead");
	HX_MARK_MEMBER_NAME(_debReadText0,"_debReadText0");
	HX_MARK_MEMBER_NAME(_debReadText1,"_debReadText1");
	HX_MARK_MEMBER_NAME(_butRead,"_butRead");
	HX_MARK_MEMBER_NAME(_butDebug,"_butDebug");
	HX_MARK_MEMBER_NAME(_butOutput,"_butOutput");
	HX_MARK_MEMBER_NAME(_butPlay,"_butPlay");
	HX_MARK_MEMBER_NAME(_butPause,"_butPause");
	HX_MARK_MEMBER_NAME(_butStep,"_butStep");
	HX_MARK_MEMBER_NAME(_bmpLogo,"_bmpLogo");
	HX_MARK_MEMBER_NAME(_entScreen,"_entScreen");
	HX_MARK_MEMBER_NAME(_entSelect,"_entSelect");
	HX_MARK_MEMBER_NAME(_entRect,"_entRect");
	HX_MARK_MEMBER_NAME(_logLines,"_logLines");
	HX_MARK_MEMBER_NAME(LOG,"LOG");
	HX_MARK_MEMBER_NAME(LAYER_LIST,"LAYER_LIST");
	HX_MARK_MEMBER_NAME(ENTITY_LIST,"ENTITY_LIST");
	HX_MARK_MEMBER_NAME(SCREEN_LIST,"SCREEN_LIST");
	HX_MARK_MEMBER_NAME(SELECT_LIST,"SELECT_LIST");
	HX_MARK_MEMBER_NAME(WATCH_LIST,"WATCH_LIST");
	HX_MARK_END_CLASS();
}

void Console_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(toggleKey,"toggleKey");
	HX_VISIT_MEMBER_NAME(debugDraw,"debugDraw");
	HX_VISIT_MEMBER_NAME(_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(_visible,"_visible");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	HX_VISIT_MEMBER_NAME(_debug,"_debug");
	HX_VISIT_MEMBER_NAME(_scrolling,"_scrolling");
	HX_VISIT_MEMBER_NAME(_selecting,"_selecting");
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(_panning,"_panning");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_back,"_back");
	HX_VISIT_MEMBER_NAME(_fpsRead,"_fpsRead");
	HX_VISIT_MEMBER_NAME(_fpsReadText,"_fpsReadText");
	HX_VISIT_MEMBER_NAME(_fpsInfo,"_fpsInfo");
	HX_VISIT_MEMBER_NAME(_fpsInfoText0,"_fpsInfoText0");
	HX_VISIT_MEMBER_NAME(_fpsInfoText1,"_fpsInfoText1");
	HX_VISIT_MEMBER_NAME(_memReadText,"_memReadText");
	HX_VISIT_MEMBER_NAME(_layerList,"_layerList");
	HX_VISIT_MEMBER_NAME(_logRead,"_logRead");
	HX_VISIT_MEMBER_NAME(_logReadText0,"_logReadText0");
	HX_VISIT_MEMBER_NAME(_logReadText1,"_logReadText1");
	HX_VISIT_MEMBER_NAME(_logHeight,"_logHeight");
	HX_VISIT_MEMBER_NAME(_logBar,"_logBar");
	HX_VISIT_MEMBER_NAME(_logBarGlobal,"_logBarGlobal");
	HX_VISIT_MEMBER_NAME(_logScroll,"_logScroll");
	HX_VISIT_MEMBER_NAME(_entRead,"_entRead");
	HX_VISIT_MEMBER_NAME(_entReadText,"_entReadText");
	HX_VISIT_MEMBER_NAME(_debRead,"_debRead");
	HX_VISIT_MEMBER_NAME(_debReadText0,"_debReadText0");
	HX_VISIT_MEMBER_NAME(_debReadText1,"_debReadText1");
	HX_VISIT_MEMBER_NAME(_butRead,"_butRead");
	HX_VISIT_MEMBER_NAME(_butDebug,"_butDebug");
	HX_VISIT_MEMBER_NAME(_butOutput,"_butOutput");
	HX_VISIT_MEMBER_NAME(_butPlay,"_butPlay");
	HX_VISIT_MEMBER_NAME(_butPause,"_butPause");
	HX_VISIT_MEMBER_NAME(_butStep,"_butStep");
	HX_VISIT_MEMBER_NAME(_bmpLogo,"_bmpLogo");
	HX_VISIT_MEMBER_NAME(_entScreen,"_entScreen");
	HX_VISIT_MEMBER_NAME(_entSelect,"_entSelect");
	HX_VISIT_MEMBER_NAME(_entRect,"_entRect");
	HX_VISIT_MEMBER_NAME(_logLines,"_logLines");
	HX_VISIT_MEMBER_NAME(LOG,"LOG");
	HX_VISIT_MEMBER_NAME(LAYER_LIST,"LAYER_LIST");
	HX_VISIT_MEMBER_NAME(ENTITY_LIST,"ENTITY_LIST");
	HX_VISIT_MEMBER_NAME(SCREEN_LIST,"SCREEN_LIST");
	HX_VISIT_MEMBER_NAME(SELECT_LIST,"SELECT_LIST");
	HX_VISIT_MEMBER_NAME(WATCH_LIST,"WATCH_LIST");
}

Dynamic Console_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log_dyn(); }
		if (HX_FIELD_EQ(inName,"LOG") ) { return LOG; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"watch") ) { return watch_dyn(); }
		if (HX_FIELD_EQ(inName,"debug") ) { return get_debug(); }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"_back") ) { return _back; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"paused") ) { return get_paused(); }
		if (HX_FIELD_EQ(inName,"format") ) { return format_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		if (HX_FIELD_EQ(inName,"_debug") ) { return _debug; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return get_visible(); }
		if (HX_FIELD_EQ(inName,"_paused") ) { return _paused; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		if (HX_FIELD_EQ(inName,"_logBar") ) { return _logBar; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"traceLog") ) { return traceLog_dyn(); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"_enabled") ) { return _enabled; }
		if (HX_FIELD_EQ(inName,"_visible") ) { return _visible; }
		if (HX_FIELD_EQ(inName,"_panning") ) { return _panning; }
		if (HX_FIELD_EQ(inName,"_fpsRead") ) { return _fpsRead; }
		if (HX_FIELD_EQ(inName,"_fpsInfo") ) { return _fpsInfo; }
		if (HX_FIELD_EQ(inName,"_logRead") ) { return _logRead; }
		if (HX_FIELD_EQ(inName,"_entRead") ) { return _entRead; }
		if (HX_FIELD_EQ(inName,"_debRead") ) { return _debRead; }
		if (HX_FIELD_EQ(inName,"_butRead") ) { return _butRead; }
		if (HX_FIELD_EQ(inName,"_butPlay") ) { return _butPlay; }
		if (HX_FIELD_EQ(inName,"_butStep") ) { return _butStep; }
		if (HX_FIELD_EQ(inName,"_bmpLogo") ) { return _bmpLogo; }
		if (HX_FIELD_EQ(inName,"_entRect") ) { return _entRect; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toggleKey") ) { return toggleKey; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		if (HX_FIELD_EQ(inName,"get_debug") ) { return get_debug_dyn(); }
		if (HX_FIELD_EQ(inName,"set_debug") ) { return set_debug_dyn(); }
		if (HX_FIELD_EQ(inName,"stepFrame") ) { return stepFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"panCamera") ) { return panCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"setCamera") ) { return setCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"selectAll") ) { return selectAll_dyn(); }
		if (HX_FIELD_EQ(inName,"updateLog") ) { return updateLog_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"_dragging") ) { return _dragging; }
		if (HX_FIELD_EQ(inName,"_butDebug") ) { return _butDebug; }
		if (HX_FIELD_EQ(inName,"_butPause") ) { return _butPause; }
		if (HX_FIELD_EQ(inName,"_logLines") ) { return _logLines; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_paused") ) { return get_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paused") ) { return set_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"_scrolling") ) { return _scrolling; }
		if (HX_FIELD_EQ(inName,"_selecting") ) { return _selecting; }
		if (HX_FIELD_EQ(inName,"_layerList") ) { return _layerList; }
		if (HX_FIELD_EQ(inName,"_logHeight") ) { return _logHeight; }
		if (HX_FIELD_EQ(inName,"_logScroll") ) { return _logScroll; }
		if (HX_FIELD_EQ(inName,"_butOutput") ) { return _butOutput; }
		if (HX_FIELD_EQ(inName,"_entScreen") ) { return _entScreen; }
		if (HX_FIELD_EQ(inName,"_entSelect") ) { return _entSelect; }
		if (HX_FIELD_EQ(inName,"LAYER_LIST") ) { return LAYER_LIST; }
		if (HX_FIELD_EQ(inName,"WATCH_LIST") ) { return WATCH_LIST; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"ENTITY_LIST") ) { return ENTITY_LIST; }
		if (HX_FIELD_EQ(inName,"SCREEN_LIST") ) { return SCREEN_LIST; }
		if (HX_FIELD_EQ(inName,"SELECT_LIST") ) { return SELECT_LIST; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"moveSelected") ) { return moveSelected_dyn(); }
		if (HX_FIELD_EQ(inName,"startPanning") ) { return startPanning_dyn(); }
		if (HX_FIELD_EQ(inName,"_fpsReadText") ) { return _fpsReadText; }
		if (HX_FIELD_EQ(inName,"_memReadText") ) { return _memReadText; }
		if (HX_FIELD_EQ(inName,"_entReadText") ) { return _entReadText; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_debugDraw") ) { return set_debugDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"startDragging") ) { return startDragging_dyn(); }
		if (HX_FIELD_EQ(inName,"updatePanning") ) { return updatePanning_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFPSRead") ) { return updateFPSRead_dyn(); }
		if (HX_FIELD_EQ(inName,"updateButtons") ) { return updateButtons_dyn(); }
		if (HX_FIELD_EQ(inName,"_fpsInfoText0") ) { return _fpsInfoText0; }
		if (HX_FIELD_EQ(inName,"_fpsInfoText1") ) { return _fpsInfoText1; }
		if (HX_FIELD_EQ(inName,"_logReadText0") ) { return _logReadText0; }
		if (HX_FIELD_EQ(inName,"_logReadText1") ) { return _logReadText1; }
		if (HX_FIELD_EQ(inName,"_logBarGlobal") ) { return _logBarGlobal; }
		if (HX_FIELD_EQ(inName,"_debReadText0") ) { return _debReadText0; }
		if (HX_FIELD_EQ(inName,"_debReadText1") ) { return _debReadText1; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateDragging") ) { return updateDragging_dyn(); }
		if (HX_FIELD_EQ(inName,"startSelection") ) { return startSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"selectEntities") ) { return selectEntities_dyn(); }
		if (HX_FIELD_EQ(inName,"startScrolling") ) { return startScrolling_dyn(); }
		if (HX_FIELD_EQ(inName,"renderEntities") ) { return renderEntities_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateSelection") ) { return updateSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"updateScrolling") ) { return updateScrolling_dyn(); }
		if (HX_FIELD_EQ(inName,"updateKeyMoving") ) { return updateKeyMoving_dyn(); }
		if (HX_FIELD_EQ(inName,"updateDebugRead") ) { return updateDebugRead_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateKeyPanning") ) { return updateKeyPanning_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateEntityLists") ) { return updateEntityLists_dyn(); }
		if (HX_FIELD_EQ(inName,"updateEntityCount") ) { return updateEntityCount_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Console_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"LOG") ) { LOG=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return set_debug(inValue); }
		if (HX_FIELD_EQ(inName,"_back") ) { _back=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return set_paused(inValue); }
		if (HX_FIELD_EQ(inName,"_debug") ) { _debug=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logBar") ) { _logBar=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_visible") ) { _visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_panning") ) { _panning=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fpsRead") ) { _fpsRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fpsInfo") ) { _fpsInfo=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logRead") ) { _logRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entRead") ) { _entRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debRead") ) { _debRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butRead") ) { _butRead=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butPlay") ) { _butPlay=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butStep") ) { _butStep=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bmpLogo") ) { _bmpLogo=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entRect") ) { _entRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toggleKey") ) { toggleKey=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { if (inCallProp) return set_debugDraw(inValue);debugDraw=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butDebug") ) { _butDebug=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butPause") ) { _butPause=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logLines") ) { _logLines=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_scrolling") ) { _scrolling=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selecting") ) { _selecting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerList") ) { _layerList=inValue.Cast< ::com::haxepunk::debug::LayerList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logHeight") ) { _logHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logScroll") ) { _logScroll=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butOutput") ) { _butOutput=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entScreen") ) { _entScreen=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entSelect") ) { _entSelect=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LAYER_LIST") ) { LAYER_LIST=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WATCH_LIST") ) { WATCH_LIST=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTITY_LIST") ) { ENTITY_LIST=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCREEN_LIST") ) { SCREEN_LIST=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SELECT_LIST") ) { SELECT_LIST=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_fpsReadText") ) { _fpsReadText=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_memReadText") ) { _memReadText=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entReadText") ) { _entReadText=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fpsInfoText0") ) { _fpsInfoText0=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fpsInfoText1") ) { _fpsInfoText1=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logReadText0") ) { _logReadText0=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logReadText1") ) { _logReadText1=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logBarGlobal") ) { _logBarGlobal=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debReadText0") ) { _debReadText0=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debReadText1") ) { _debReadText1=inValue.Cast< ::flash::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Console_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("toggleKey"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("debugDraw"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("debug"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("_enabled"));
	outFields->push(HX_CSTRING("_visible"));
	outFields->push(HX_CSTRING("_paused"));
	outFields->push(HX_CSTRING("_debug"));
	outFields->push(HX_CSTRING("_scrolling"));
	outFields->push(HX_CSTRING("_selecting"));
	outFields->push(HX_CSTRING("_dragging"));
	outFields->push(HX_CSTRING("_panning"));
	outFields->push(HX_CSTRING("_sprite"));
	outFields->push(HX_CSTRING("_format"));
	outFields->push(HX_CSTRING("_back"));
	outFields->push(HX_CSTRING("_fpsRead"));
	outFields->push(HX_CSTRING("_fpsReadText"));
	outFields->push(HX_CSTRING("_fpsInfo"));
	outFields->push(HX_CSTRING("_fpsInfoText0"));
	outFields->push(HX_CSTRING("_fpsInfoText1"));
	outFields->push(HX_CSTRING("_memReadText"));
	outFields->push(HX_CSTRING("_layerList"));
	outFields->push(HX_CSTRING("_logRead"));
	outFields->push(HX_CSTRING("_logReadText0"));
	outFields->push(HX_CSTRING("_logReadText1"));
	outFields->push(HX_CSTRING("_logHeight"));
	outFields->push(HX_CSTRING("_logBar"));
	outFields->push(HX_CSTRING("_logBarGlobal"));
	outFields->push(HX_CSTRING("_logScroll"));
	outFields->push(HX_CSTRING("_entRead"));
	outFields->push(HX_CSTRING("_entReadText"));
	outFields->push(HX_CSTRING("_debRead"));
	outFields->push(HX_CSTRING("_debReadText0"));
	outFields->push(HX_CSTRING("_debReadText1"));
	outFields->push(HX_CSTRING("_butRead"));
	outFields->push(HX_CSTRING("_butDebug"));
	outFields->push(HX_CSTRING("_butOutput"));
	outFields->push(HX_CSTRING("_butPlay"));
	outFields->push(HX_CSTRING("_butPause"));
	outFields->push(HX_CSTRING("_butStep"));
	outFields->push(HX_CSTRING("_bmpLogo"));
	outFields->push(HX_CSTRING("_entScreen"));
	outFields->push(HX_CSTRING("_entSelect"));
	outFields->push(HX_CSTRING("_entRect"));
	outFields->push(HX_CSTRING("_logLines"));
	outFields->push(HX_CSTRING("LOG"));
	outFields->push(HX_CSTRING("LAYER_LIST"));
	outFields->push(HX_CSTRING("ENTITY_LIST"));
	outFields->push(HX_CSTRING("SCREEN_LIST"));
	outFields->push(HX_CSTRING("SELECT_LIST"));
	outFields->push(HX_CSTRING("WATCH_LIST"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BIG_WIDTH_THRESHOLD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Console_obj,toggleKey),HX_CSTRING("toggleKey")},
	{hx::fsBool,(int)offsetof(Console_obj,debugDraw),HX_CSTRING("debugDraw")},
	{hx::fsBool,(int)offsetof(Console_obj,_enabled),HX_CSTRING("_enabled")},
	{hx::fsBool,(int)offsetof(Console_obj,_visible),HX_CSTRING("_visible")},
	{hx::fsBool,(int)offsetof(Console_obj,_paused),HX_CSTRING("_paused")},
	{hx::fsBool,(int)offsetof(Console_obj,_debug),HX_CSTRING("_debug")},
	{hx::fsBool,(int)offsetof(Console_obj,_scrolling),HX_CSTRING("_scrolling")},
	{hx::fsBool,(int)offsetof(Console_obj,_selecting),HX_CSTRING("_selecting")},
	{hx::fsBool,(int)offsetof(Console_obj,_dragging),HX_CSTRING("_dragging")},
	{hx::fsBool,(int)offsetof(Console_obj,_panning),HX_CSTRING("_panning")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_sprite),HX_CSTRING("_sprite")},
	{hx::fsObject /*::flash::text::TextFormat*/ ,(int)offsetof(Console_obj,_format),HX_CSTRING("_format")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Console_obj,_back),HX_CSTRING("_back")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_fpsRead),HX_CSTRING("_fpsRead")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_fpsReadText),HX_CSTRING("_fpsReadText")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_fpsInfo),HX_CSTRING("_fpsInfo")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_fpsInfoText0),HX_CSTRING("_fpsInfoText0")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_fpsInfoText1),HX_CSTRING("_fpsInfoText1")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_memReadText),HX_CSTRING("_memReadText")},
	{hx::fsObject /*::com::haxepunk::debug::LayerList*/ ,(int)offsetof(Console_obj,_layerList),HX_CSTRING("_layerList")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_logRead),HX_CSTRING("_logRead")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_logReadText0),HX_CSTRING("_logReadText0")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_logReadText1),HX_CSTRING("_logReadText1")},
	{hx::fsInt,(int)offsetof(Console_obj,_logHeight),HX_CSTRING("_logHeight")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(Console_obj,_logBar),HX_CSTRING("_logBar")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(Console_obj,_logBarGlobal),HX_CSTRING("_logBarGlobal")},
	{hx::fsFloat,(int)offsetof(Console_obj,_logScroll),HX_CSTRING("_logScroll")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_entRead),HX_CSTRING("_entRead")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_entReadText),HX_CSTRING("_entReadText")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_debRead),HX_CSTRING("_debRead")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_debReadText0),HX_CSTRING("_debReadText0")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(Console_obj,_debReadText1),HX_CSTRING("_debReadText1")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_butRead),HX_CSTRING("_butRead")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Console_obj,_butDebug),HX_CSTRING("_butDebug")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Console_obj,_butOutput),HX_CSTRING("_butOutput")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Console_obj,_butPlay),HX_CSTRING("_butPlay")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Console_obj,_butPause),HX_CSTRING("_butPause")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Console_obj,_butStep),HX_CSTRING("_butStep")},
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(Console_obj,_bmpLogo),HX_CSTRING("_bmpLogo")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_entScreen),HX_CSTRING("_entScreen")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(Console_obj,_entSelect),HX_CSTRING("_entSelect")},
	{hx::fsObject /*::flash::geom::Rectangle*/ ,(int)offsetof(Console_obj,_entRect),HX_CSTRING("_entRect")},
	{hx::fsInt,(int)offsetof(Console_obj,_logLines),HX_CSTRING("_logLines")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Console_obj,LOG),HX_CSTRING("LOG")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Console_obj,LAYER_LIST),HX_CSTRING("LAYER_LIST")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Console_obj,ENTITY_LIST),HX_CSTRING("ENTITY_LIST")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Console_obj,SCREEN_LIST),HX_CSTRING("SCREEN_LIST")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Console_obj,SELECT_LIST),HX_CSTRING("SELECT_LIST")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Console_obj,WATCH_LIST),HX_CSTRING("WATCH_LIST")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("toggleKey"),
	HX_CSTRING("init"),
	HX_CSTRING("traceLog"),
	HX_CSTRING("log"),
	HX_CSTRING("watch"),
	HX_CSTRING("show"),
	HX_CSTRING("hide"),
	HX_CSTRING("enable"),
	HX_CSTRING("onResize"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("set_debugDraw"),
	HX_CSTRING("update"),
	HX_CSTRING("get_paused"),
	HX_CSTRING("set_paused"),
	HX_CSTRING("get_debug"),
	HX_CSTRING("set_debug"),
	HX_CSTRING("stepFrame"),
	HX_CSTRING("startDragging"),
	HX_CSTRING("updateDragging"),
	HX_CSTRING("moveSelected"),
	HX_CSTRING("startPanning"),
	HX_CSTRING("updatePanning"),
	HX_CSTRING("panCamera"),
	HX_CSTRING("setCamera"),
	HX_CSTRING("startSelection"),
	HX_CSTRING("updateSelection"),
	HX_CSTRING("selectEntities"),
	HX_CSTRING("selectAll"),
	HX_CSTRING("startScrolling"),
	HX_CSTRING("updateScrolling"),
	HX_CSTRING("updateKeyMoving"),
	HX_CSTRING("updateKeyPanning"),
	HX_CSTRING("updateEntityLists"),
	HX_CSTRING("renderEntities"),
	HX_CSTRING("updateLog"),
	HX_CSTRING("updateFPSRead"),
	HX_CSTRING("updateDebugRead"),
	HX_CSTRING("updateEntityCount"),
	HX_CSTRING("updateButtons"),
	HX_CSTRING("format"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("_enabled"),
	HX_CSTRING("_visible"),
	HX_CSTRING("_paused"),
	HX_CSTRING("_debug"),
	HX_CSTRING("_scrolling"),
	HX_CSTRING("_selecting"),
	HX_CSTRING("_dragging"),
	HX_CSTRING("_panning"),
	HX_CSTRING("_sprite"),
	HX_CSTRING("_format"),
	HX_CSTRING("_back"),
	HX_CSTRING("_fpsRead"),
	HX_CSTRING("_fpsReadText"),
	HX_CSTRING("_fpsInfo"),
	HX_CSTRING("_fpsInfoText0"),
	HX_CSTRING("_fpsInfoText1"),
	HX_CSTRING("_memReadText"),
	HX_CSTRING("_layerList"),
	HX_CSTRING("_logRead"),
	HX_CSTRING("_logReadText0"),
	HX_CSTRING("_logReadText1"),
	HX_CSTRING("_logHeight"),
	HX_CSTRING("_logBar"),
	HX_CSTRING("_logBarGlobal"),
	HX_CSTRING("_logScroll"),
	HX_CSTRING("_entRead"),
	HX_CSTRING("_entReadText"),
	HX_CSTRING("_debRead"),
	HX_CSTRING("_debReadText0"),
	HX_CSTRING("_debReadText1"),
	HX_CSTRING("_butRead"),
	HX_CSTRING("_butDebug"),
	HX_CSTRING("_butOutput"),
	HX_CSTRING("_butPlay"),
	HX_CSTRING("_butPause"),
	HX_CSTRING("_butStep"),
	HX_CSTRING("_bmpLogo"),
	HX_CSTRING("_entScreen"),
	HX_CSTRING("_entSelect"),
	HX_CSTRING("_entRect"),
	HX_CSTRING("_logLines"),
	HX_CSTRING("LOG"),
	HX_CSTRING("LAYER_LIST"),
	HX_CSTRING("ENTITY_LIST"),
	HX_CSTRING("SCREEN_LIST"),
	HX_CSTRING("SELECT_LIST"),
	HX_CSTRING("WATCH_LIST"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Console_obj::BIG_WIDTH_THRESHOLD,"BIG_WIDTH_THRESHOLD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Console_obj::BIG_WIDTH_THRESHOLD,"BIG_WIDTH_THRESHOLD");
};

#endif

Class Console_obj::__mClass;

void Console_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.debug.Console"), hx::TCanCast< Console_obj> ,sStaticFields,sMemberFields,
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

void Console_obj::__boot()
{
	BIG_WIDTH_THRESHOLD= (int)420;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace debug
