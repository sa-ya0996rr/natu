#pragma once
#ifndef IMAGE_H
#define IMAGE_H

#include <DxLib.h>


// 画像管理クラス
class Image
{
public:

    // コンストラクタ
    Image();

    // デストラクタ
    ~Image();


    // 画像読み込み
    bool Load();


    // 画像取得
    int GetPlayerImage();

    int GetEnemyImage();

    int GetTileImage();


private:

    // プレイヤー画像
    int playerImage;


    // 敵画像
    int enemyImage;


    // タイル画像
    int tileImage;


    // 画像解放
    void Release();
};

#endif