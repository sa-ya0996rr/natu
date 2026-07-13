#include "Camera.h"


// コンストラクタ
Camera::Camera()
{
    position.x = 0;
    position.y = 0;

    // 移動範囲
    minX = 0;
    maxX = 10000;
}


// デストラクタ
Camera::~Camera()
{

}


// 更新処理
void Camera::Update(Vector2 playerPosition)
{
    // プレイヤーを画面中央付近に置く
    position.x =
        playerPosition.x - SCREEN_WIDTH / 2;


    position.y =
        playerPosition.y - SCREEN_HEIGHT / 2;



    // 左端制限
    if (position.x < minX)
    {
        position.x = minX;
    }


    // 右端制限
    if (position.x > maxX)
    {
        position.x = maxX;
    }


    // 上下制限
    if (position.y < 0)
    {
        position.y = 0;
    }
}


// X座標変換
int Camera::GetScreenX(float worldX)
{
    return (int)(worldX - position.x);
}


// Y座標変換
int Camera::GetScreenY(float worldY)
{
    return (int)(worldY - position.y);
}


// カメラ位置取得
Vector2 Camera::GetPosition()
{
    return position;
}