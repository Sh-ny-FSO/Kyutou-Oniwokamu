#include "Game.h"

int main()
{
	/* 
	
		ゲームの流れは以下の通り
	
		スタートアップ -> プレイ -> シャットダウン
	
	*/

	// ゲームクラス
	Game game;

	game.Startup();
	while (game.Playing());
	game.Shutdown();

	return 0;
}
