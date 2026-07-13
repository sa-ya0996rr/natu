#include "Player.h"
#include <DxLib.h>


// コンストラクタ
Player::Player()
{
    position.x = 100;
    position.y = 300;

    velocityY = 0;

    isGround = true;

    direction = Direction::Right;
}


// デストラクタ
Player::~Player()
{

}


// 更新処理
void Player::Update()
{
    // 左移動
    if (CheckHitKey(KEY_INPUT_LEFT))
    {
        position.x -= PLAYER_MOVE_SPEED;
        direction = Direction::Left;
    }


    // 右移動
    if (CheckHitKey(KEY_INPUT_RIGHT))
    {
        position.x += PLAYER_MOVE_SPEED;
        direction = Direction::Right;
    }


    // ジャンプ
    if (CheckHitKey(KEY_INPUT_SPACE) && isGround)
    {
        Jump();
    }


    // 重力
    ApplyGravity();


    // 地面
    if (position.y >= 300)
    {
        position.y = 300;
        velocityY = 0;
        isGround = true;
    }
}

// 描画処理
void Player::Draw()
{
    DrawBox(
        (int)position.x,
        (int)position.y,
        (int)position.x + PLAYER_WIDTH,
        (int)position.y + PLAYER_HEIGHT,
        GetColor(255, 0, 0),
        TRUE
    );
}


// ジャンプ処理
void Player::Jump()
{
    velocityY = PLAYER_JUMP_POWER;

    isGround = false;
}


// 重力処理
void Player::ApplyGravity()
{
    velocityY += GRAVITY;

    if (velocityY > MAX_FALL_SPEED)
    {
        velocityY = MAX_FALL_SPEED;
    }

    position.y += velocityY;
}

// 座標取得
Vector2 Player::GetPosition()
{
    return position;
}