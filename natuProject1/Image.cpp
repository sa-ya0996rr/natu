#include "Image.h"


// コンストラクタ
Image::Image()
{
    playerImage = -1;
    enemyImage = -1;
    tileImage = -1;
}


// デストラクタ
Image::~Image()
{
    Release();
}


// 画像読み込み
bool Image::Load()
{
    playerImage =
        LoadGraph(TEXT("Resources/Images/player.png"));

    enemyImage =
        LoadGraph(TEXT("Resources/Images/enemy.png"));

    tileImage =
        LoadGraph(TEXT("Resources/Images/tiles.png"));


    // 読み込み失敗確認
    if (playerImage == -1 ||
        enemyImage == -1 ||
        tileImage == -1)
    {
        return false;
    }


    return true;
}


// プレイヤー画像取得
int Image::GetPlayerImage()
{
    return playerImage;
}


// 敵画像取得
int Image::GetEnemyImage()
{
    return enemyImage;
}


// タイル画像取得
int Image::GetTileImage()
{
    return tileImage;
}


// 画像解放
void Image::Release()
{
    if (playerImage != -1)
    {
        DeleteGraph(playerImage);
    }


    if (enemyImage != -1)
    {
        DeleteGraph(enemyImage);
    }


    if (tileImage != -1)
    {
        DeleteGraph(tileImage);
    }
}