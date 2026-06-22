# 文字冒險 RPG 遊戲

## 專案簡介

本專案為 C++ 物件導向程式設計練習，以文字冒險 RPG 遊戲為主題進行開發。

玩家可以透過戰鬥擊敗怪物、獲得金幣與經驗值、提升等級、購買道具，最後挑戰最終 Boss。

本專案主要練習 Class 設計、物件導向概念以及 GitHub 多人協作開發。

---

## 遊戲功能

### 玩家系統
- 玩家名稱設定
- HP 與 MP 管理
- 等級與經驗值系統
- 角色狀態顯示

### 怪物系統
- Slime（史萊姆）
- Goblin（哥布林）
- Ancient Dragon（遠古巨龍 Boss）

### 技能系統
- Fireball（火球術）
- Thunder（雷擊術）

### 道具系統
- Potion（生命藥水）
- Mana Potion（魔力藥水）

### 商店系統
- 購買藥水
- 金幣管理

### 戰鬥系統
- 普通攻擊
- 技能攻擊
- 使用道具
- 逃跑功能

### 升級系統
- 擊敗怪物獲得經驗值
- 升級後提升能力值

---

## 程式架構

### Player
負責管理玩家資料

- 名稱
- HP
- MP
- 等級
- 經驗值
- 金幣

### Monster
負責管理怪物資料

- 名稱
- HP
- 攻擊力
- 獎勵金幣
- 獎勵經驗值

### Skill
負責管理技能資料

- 技能名稱
- 傷害值
- MP 消耗量

### Item
負責管理道具資料

- 道具名稱
- 效果值
- 持有數量

### Battle
負責戰鬥流程控制

### Shop
負責商店購買功能

---

## 檔案結構

```text
main.cpp

Player.h
Player.cpp

Monster.h
Monster.cpp

Skill.h
Skill.cpp

Item.h
Item.cpp

Battle.h
Battle.cpp

Shop.h
Shop.cpp

README.md
```

---

## 遊戲操作方式

### 主選單

1. 顯示角色狀態
2. 進入商店
3. 挑戰 Slime
4. 挑戰 Goblin
5. 挑戰 Boss
0. 離開遊戲

### 戰鬥選單

1. 普通攻擊
2. 使用技能
3. 使用道具
4. 逃跑

---

## 編譯方式

```bash
g++ -std=c++17 main.cpp Player.cpp Monster.cpp Skill.cpp Item.cpp Battle.cpp Shop.cpp -o main
```

---

## 執行方式

```bash
./main
```

Windows：

```bash
main.exe
```

---

## 小組分工

### 組員 A
- Player 系統
- Skill 系統
- Level 系統

### 組員 B
- Monster 系統
- Battle 系統
- Boss 戰

### 組員 C
- Item 系統
- Shop 系統
- README 撰寫與測試

---

## 學習心得

透過本次專案，我們練習了 C++ 物件導向程式設計的概念，學習如何利用 Class 將程式拆分成不同模組，提升程式可讀性與維護性。同時也透過 GitHub 進行多人協作開發，了解版本控制與團隊合作的重要性。藉由實作 RPG 遊戲，我們更熟悉了物件、函式以及檔案分工的應用方式。
