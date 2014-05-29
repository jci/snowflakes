package entities;

import com.haxepunk.Entity;
import com.haxepunk.Graphic;
import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;
import com.haxepunk.Scene;
import scenes.MainScene;

class Snowflake extends Entity
{
	private	var _image : Image;
	private var _myLayer : Int;
	private var _rotationSpeed : Float;
	private var _rotationDirection : Bool;
	private var _fallSpeed : Float;
	private var _size : Float;

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
		_fallSpeed = HXP.random * 2 + 0.2;


		// origins are screwed

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
		
	}


	public override function update()
	{

		var ismoving : Bool;
		var _scene : MainScene = cast( HXP.scene, MainScene);

		ismoving = _scene.ismoving;

		if (!ismoving)
		{
			return;
		}
		
		var _image	: Image;
		
		super.update();
		y = y + _fallSpeed;

		if (y > HXP.height+HXP.halfHeight/2)
		{
			HXP.console.log(["fallen"]);
		}

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

	}
}
