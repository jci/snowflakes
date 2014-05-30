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

		var gravity = Vec2.weak(0,800);

		var _w = HXP.stage.stageWidth;
		var _h = HXP.stage.stageHeight;



		var floor = new Body(BodyType.STATIC);

		space = new Space(gravity);

		floor.shapes.add(new Polygon(Polygon.box(_w,20)));
		floor.position.setxy(_w,_h-50);
		

		floor.space = space;

		var _i : Int;

		for (i in 1...50)	
		{
			var _x = Math.random()*HXP.width;
			var _y = 0;

			addNapeEntity(new Snowflake(_x,_y));

		}
		

	}

	public override function update()
	{

		super.update();	

		if (Input.mousePressed)
		{
			HXP.scene = new MainScene(); 
		}


	}

	private function spawn()
	{
		 var _x : Float;
		 var _y : Float;
		 var _i:Int; 
		 var _entcount = HXP.scene.count;
		 	

	}


}
