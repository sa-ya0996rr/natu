#pragma once
#ifndef CAMERA_H
#define CAMERA_H

#include "Common.h"


// カメラクラス
class Camera
{
public:

    // コンストラクタ
    Camera();

    // デストラクタ
    ~Camera();


    // 更新処理
    void Update(Vector2 playerPosition);


    // ワールド座標を画面座標へ変換
    int GetScreenX(float worldX);

    int GetScreenY(float worldY);


    // カメラ位置取得
    Vector2 GetPosition();


private:

    // カメラ座標
    Vector2 position;


    // カメラ移動範囲
    float minX;
    float maxX;
};

#endif