#include "Input.h"
#include <DxLib.h>


// コンストラクタ
Input::Input()
{
    for (int i = 0; i < 256; i++)
    {
        key[i] = 0;
    }
}


// 更新処理
void Input::Update()
{
    // キーボード状態取得
    GetHitKeyStateAll(key);
}


// 右キー
bool Input::Right()
{
    return key[KEY_INPUT_RIGHT];
}


// 左キー
bool Input::Left()
{
    return key[KEY_INPUT_LEFT];
}


// ジャンプ
bool Input::Jump()
{
    return key[KEY_INPUT_SPACE];
}


// ESCキー
bool Input::Escape()
{
    return key[KEY_INPUT_ESCAPE];
}