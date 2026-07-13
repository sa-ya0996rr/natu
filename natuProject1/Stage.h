#pragma once
#ifndef STAGE_H
#define STAGE_H

#include "Common.h"


// ステージ管理クラス
class Stage
{
public:

    // コンストラクタ
    Stage();

    // デストラクタ
    ~Stage();


    // 更新処理
    void Update();


    // 描画処理
    void Draw();


    // 床との当たり判定
    bool CheckCollision(Rect playerRect);


private:

    // マップデータ
    int map[20][40];


    // マップサイズ
    int mapWidth;
    int mapHeight;


    // ブロック描画
    void DrawTile(int x, int y);
};

#endif