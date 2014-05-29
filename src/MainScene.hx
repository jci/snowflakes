import com.haxepunk.Scene;
import com.haxepunk.HXP;
import Snowflake;

class MainScene extends Scene
{

	private var spawnTimer : Float;

	public override function begin()
	{

	}

	public override function update()
	{
		spawnTimer -= HXP.elapsed;
		if (spawnTimer < 0)
		{
			spawn();
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
}
