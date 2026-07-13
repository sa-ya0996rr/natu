#include "Enemy.h"
#include <DxLib.h>


// コンストラクタ
Enemy::Enemy(float x, float y)
{
    position.x = x;
    position.y = y;

    speed = 2.0f;

    direction = Direction::Left;

    width = 32;
    height = 32;
}


// デストラクタ
Enemy::~Enemy()
{

}


// 更新処理
void Enemy::Update()
{
    // 左右移動
    if (direction == Direction::Left)
    {
        position.x -= speed;
    }
    else
    {
        position.x += speed;
    }


    // 仮の範囲で方向転換
    if (position.x < 100)
    {
        direction = Direction::Right;
    }

    if (position.x > 500)
    {
        direction = Direction::Left;
    }
}


// 描画処理
void Enemy::Draw()
{
    DrawBox(
        (int)position.x,
        (int)position.y,
        (int)position.x + width,
        (int)position.y + height,
        GetColor(255, 100, 0),
        TRUE
    );
}


// 位置取得
Vector2 Enemy::GetPosition()
{
    return position;
}


// 当たり判定用矩形
Rect Enemy::GetRect()
{
    Rect rect;

    rect.left = position.x;
    rect.top = position.y;
    rect.right = position.x + width;
    rect.bottom = position.y + height;

    return rect;
}