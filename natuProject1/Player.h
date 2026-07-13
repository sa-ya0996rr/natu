#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include "Common.h"


// プレイヤークラス
class Player
{
public:

    // コンストラクタ
    Player();

    // デストラクタ
    ~Player();


    // 更新処理
    void Update();


    // 描画処理
    void Draw();


    // 座標取得
    Vector2 GetPosition();


private:

    // 座標
    Vector2 position;


    // 縦方向速度
    float velocityY;


    // 地面にいるか
    bool isGround;


    // 向き
    Direction direction;


    // ジャンプ
    void Jump();


    // 重力
    void ApplyGravity();
};


#endif#endif