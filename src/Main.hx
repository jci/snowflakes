import com.haxepunk.Engine;
import com.haxepunk.HXP;
import scenes.MainScene;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import com.haxepunk.HXP;


class Main extends Engine
{

	override public function init()
	{
		HXP.console.enable();
		HXP.scene = new MainScene();


		Input.define("click", [Key.A]);
	}

	public static function main() { new Main(); }

}
