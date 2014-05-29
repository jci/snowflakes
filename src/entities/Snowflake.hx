package entities;

import com.haxepunk.Entity;
import com.haxepunk.Graphic;
import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;
import com.haxepunk.Scene;
import com.haxepunk.tweens.motion.LinearMotion;
import com.haxepunk.tweens.motion.CircularMotion;
import scenes.MainScene;

class Snowflake extends Entity
{
	private	var _image : Image;
	private var _myLayer : Int;
	private var _rotationSpeed : Float;
	private var _rotationDirection : Bool;
	private var _fallSpeed : Float;
	private var _size : Float;
	private var _cradleSpeed : Float;
	private var _cradleAngle : Float;
	private var _cradleDirection : Bool;
	private var _cradleDistance : Float;
	private var _cradleEaze : Float;
	private var _flaketween : CircularMotion;
	private var _originalX : Float;

	public function new(_x:Float, _y:Float)
	{
		super(x,y);

		_image = new Image("graphics/snowflake.png");

		_image.originX = _image.width/2;
		_image.originY = _image.height/2;

		graphic = _image;

		x=_x;
		y=_y;

		_myLayer = Std.int(HXP.random * 4);

		_rotationSpeed = HXP.random * 2 +0.3;	
		_fallSpeed = HXP.random + 0.2;

		_size = (_myLayer +1)/4; 
		_image.scale = _size;

		if (HXP.random > 0.5)
		{
			_rotationDirection = true;
		}
		else
		{
			_rotationDirection = false;
		}

		layer = 4- _myLayer;
		type = "snowflake";
	
		_cradleAngle = 	HXP.random*20;
		_cradleSpeed = HXP.random*2;
		_cradleDistance = HXP.random * 25;

		if (HXP.random>0.5)
		{
			_cradleDirection = true;
		}
		else
		{
			_cradleDirection = false;
		}

		_flaketween = new CircularMotion();
		_flaketween.x = x;
		_flaketween.y = y;
		
		_flaketween.setMotion(x,y,_cradleDistance,0,true,2);
		addTween(_flaketween,true);	

		_originalX = x;




	}


	public override function update()
	{

		super.update();	

		var ismoving : Bool;
		var _scene : MainScene = cast( HXP.scene, MainScene);

		ismoving = _scene.ismoving;

		if (!ismoving)
		{
			return;
		}
		
		var _image	: Image;
		
		y = y + _fallSpeed;

		_image = cast(this.graphic,Image);

		if (_rotationDirection)
		{
				_image.angle += _rotationSpeed;
		}
		else
		{
				_image.angle -= _rotationSpeed;
		}


		if (y > HXP.height + 10)
		{
			HXP.world.recycle(this);
		}


		x = _flaketween.x;

		if (_flaketween.percent==1)
		{
			_flaketween.setMotion(_originalX,y,_cradleDistance,0,true,10);
		}




	}
}
