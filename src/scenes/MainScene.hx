package scenes;

import com.haxepunk.Scene;
import com.haxepunk.HXP;
import com.haxepunk.utils.Key;
import com.haxepunk.utils.Input;
import entities.Snowflake;

class MainScene extends Scene
{


	private var spawnTimer : Float;
	private var _isMoving : Bool;

	public var ismoving : Bool;

	public override function new()
	{
		super();
		_isMoving = true;

	}

	public override function update()
	{
		spawnTimer -= HXP.elapsed;
		if (spawnTimer < 0)
		{
			spawn();
		}

		if (Input.mousePressed)
		{
			if (_isMoving)
			{
				_isMoving = false;
			}
			else
			{
				_isMoving = true;
			}
		}

		super.update();

	}

	private function spawn()
	{
		 var _x : Float;
		 var _y : Float;

		_x = Math.random()*HXP.width;
		_y = 0 - HXP.halfHeight/3;

		add(new Snowflake(_x,_y));
		spawnTimer = 0.1;


	}

	private inline function get_ismoving():Bool { return _isMoving; };
}
