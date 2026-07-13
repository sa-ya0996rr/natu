#pragma once
#ifndef INPUT_H
#define INPUT_H


// 入力管理クラス
class Input
{
public:

    // 初期化
    Input();


    // 更新
    void Update();


    // キーが押されているか
    bool Right();

    bool Left();

    bool Jump();

    bool Escape();


private:

    // キー状態
    char key[256];

};

#endif