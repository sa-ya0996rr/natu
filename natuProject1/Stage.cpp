#include "Stage.h"
#include <DxLib.h>


// コンストラクタ
Stage::Stage()
{
    mapWidth = 40;
    mapHeight = 20;


    // マップ初期化
    for (int y = 0; y < mapHeight; y++)
    {
        for (int x = 0; x < mapWidth; x++)
        {
            map[y][x] = 0;
        }
    }


    // 床を作成
    for (int x = 0; x < mapWidth; x++)
    {
        map[18][x] = 1;
        map[19][x] = 1;
    }


    // 足場を作成
    map[15][5] = 1;
    map[15][6] = 1;
    map[15][7] = 1;

    map[12][10] = 1;
    map[12][11] = 1;
    map[12][12] = 1;
}


// デストラクタ
Stage::~Stage()
{

}


// 更新処理
void Stage::Update()
{

}


// 描画処理
void Stage::Draw()
{
    for (int y = 0; y < mapHeight; y++)
    {
        for (int x = 0; x < mapWidth; x++)
        {
            if (map[y][x] == 1)
            {
                DrawTile(x, y);
            }
        }
    }
}


// ブロック描画
void Stage::DrawTile(int x, int y)
{
    DrawBox(
        x * TILE_SIZE,
        y * TILE_SIZE,
        x * TILE_SIZE + TILE_SIZE,
        y * TILE_SIZE + TILE_SIZE,
        GetColor(0, 200, 0),
        TRUE
    );
}


// 当たり判定
bool Stage::CheckCollision(Rect playerRect)
{
    int leftTile =
        (int)(playerRect.left / TILE_SIZE);

    int rightTile =
        (int)(playerRect.right / TILE_SIZE);

    int topTile =
        (int)(playerRect.top / TILE_SIZE);

    int bottomTile =
        (int)(playerRect.bottom / TILE_SIZE);



    for (int y = topTile; y <= bottomTile; y++)
    {
        for (int x = leftTile; x <= rightTile; x++)
        {
            if (x < 0 || x >= mapWidth ||
                y < 0 || y >= mapHeight)
            {
                continue;
            }


            if (map[y][x] == 1)
            {
                return true;
            }
        }
    }


    return false;
}