package scenes;

import com.haxepunk.Scene;
import com.haxepunk.HXP;
import com.haxepunk.utils.Key;
import com.haxepunk.utils.Input;
import entities.Snowflake;
import com.haxepunk.nape.NapeScene;
import nape.geom.Vec2;
import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyList;
import nape.phys.BodyType;
import nape.shape.Polygon;
import nape.util.Debug;
import nape.util.BitmapDebug;



class MainScene extends NapeScene
{


	private var spawnTimer : Float;
	public var ismoving : Bool;

	public override function new()
	{

		super();
		ismoving = true;

		var gravity = Vec2.weak(0,300);

		var _w = HXP.stage.stageWidth;
		var _h = HXP.stage.stageHeight;



		var floor = new Body(BodyType.STATIC);

		space = new Space(gravity);

		floor.shapes.add(new Polygon(Polygon.box(_w,20)));
		floor.position.setxy(_w,_h-50);
		

		floor.space = space;




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
			var bodyList = new BodyList();
			bodyList.clear();
		}

		super.update();

	}

	private function spawn()
	{
		 var _x : Float;
		 var _y : Float;
		 var _entcount = HXP.scene.count;
		 	
		_x = Math.random()*HXP.width;
		_y = -10;

		if (_entcount < 50)
		{	
			addNapeEntity(new Snowflake(_x,_y));
			spawnTimer = 0.05;
		}


	}


}
