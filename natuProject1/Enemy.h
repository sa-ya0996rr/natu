#pragma once
#ifndef ENEMY_H
#define ENEMY_H

#include "Common.h"


// 敵クラス
class Enemy
{
public:

    // コンストラクタ
    Enemy(float x, float y);

    // デストラクタ
    ~Enemy();


    // 更新処理
    void Update();


    // 描画処理
    void Draw();


    // 位置取得
    Vector2 GetPosition();


    // 当たり判定用
    Rect GetRect();


private:

    // 座標
    Vector2 position;


    // 移動速度
    float speed;


    // 移動方向
    Direction direction;


    // 当たり判定サイズ
    int width;
    int height;
};

#endif