#ifndef INCLUDED_Snowflake
#define INCLUDED_Snowflake

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Entity.h>
HX_DECLARE_CLASS0(Snowflake)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)


class HXCPP_CLASS_ATTRIBUTES  Snowflake_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef Snowflake_obj OBJ_;
		Snowflake_obj();
		Void __construct(Float _x,Float _y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Snowflake_obj > __new(Float _x,Float _y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Snowflake_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Snowflake"); }

		::com::haxepunk::graphics::Image _image;
		int _myLayer;
		Float _rotationSpeed;
		bool _rotationDirection;
		Float _fallSpeed;
		Float _size;
		virtual Void update( );

};


#endif /* INCLUDED_Snowflake */ 
