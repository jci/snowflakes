import com.haxepunk.Engine;
import com.haxepunk.HXP;
import scenes.MainScene;

class Main extends Engine
{

	override public function init()
	{
		HXP.scene = new MainScene();
	}

	public static function main() { new Main(); }

}
