#pragma once

#include<vector>

class Map
{
public:
	Map();
	virtual ~Map();

	// グラフィックのロード、アンロード
	void load();
	void unload();

	void update();

	// 描画
	void draw();
private:
	// マップチップの数を取得する
	int chipNumX();
	int chipNumY();
	int chipNum();

	// マップデータの入出力
	void outputData();	// マップのデータを出力する
	void readData();	// マップのデータを読み込む
private:
	// マップの描画
	void drawMap(int offsetX, int offsetY);
	// マップチップ編集用カーソルの表示
	void drawCursor();
	// グラフィックデータのハンドル
	int m_handle;

	// グラフィックのデータ
	int m_graphWidth;
	int m_graphHeight;

	// マップチップ編集用データ
	int m_cursorNo;
	std::vector<int> m_mapData;


	// スクロールする
	int m_scrollX;
	int m_scrollY;
};
