package entities;

import com.haxepunk.Entity;
import com.haxepunk.Graphic;
import com.haxepunk.graphics.Image;
import com.haxepunk.HXP;
import com.haxepunk.Scene;
import com.haxepunk.tweens.motion.LinearMotion;
import com.haxepunk.tweens.motion.CircularMotion;
import scenes.MainScene;
import com.haxepunk.nape.NapeEntity;
import nape.geom.Vec2;
import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;
import nape.shape.Circle;
import nape.util.ShapeDebug;





class Snowflake extends NapeEntity
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

	private var _flickerTimer:Float;
	private var flickering(get,null):Bool;

	public function new(_x:Float, _y:Float)
	{
		super(x,y);

		_image = new Image("graphics/snowflake.png");

		_image.originX = _image.width/2;
		_image.originY = _image.height/2;

		graphic = _image;

		_myLayer = Std.int(HXP.random * 4);

		_rotationSpeed = HXP.random * 2 +0.3;	
		_fallSpeed = HXP.random + 0.2;

		_size = (_myLayer +1)/4; 
		_image.scale = _size;


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

		_flickerTimer = 0;

		var _body = new Body(BodyType.DYNAMIC);
		_body.shapes.add(new Circle(_myLayer*4+5));
		_body.position.setxy(_x,_y);
		_body.isBullet = true;
		_body.surfaceVel = new Vec2(0,-20);
		_body.velocity = new Vec2(0,20);
		//_body.angularVel = 0.5;
		body = _body;

		

	}


	public override function update()
	{

		super.update();
		if ( y > HXP.height	)
		{
			HXP.scene.remove(this);
		}


	}

	private function get_flickering():Bool
	{
		if (_flickerTimer > 0)
			return true;
		return false;
	}		
}
