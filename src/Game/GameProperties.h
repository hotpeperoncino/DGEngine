#pragma once

#include <cstddef>
#include "MapCoord.h"
#include <SFML/System/Time.hpp>
#include <utility>

struct AnimationSpeed
{
	sf::Time animation;
	sf::Time walk;

	AnimationSpeed() : animation(sf::microseconds(200000)), walk(sf::microseconds(40000)) {}
	AnimationSpeed(sf::Time animation_, sf::Time walk_) : animation(animation_), walk(walk_) {}
};

enum class InventoryPosition : size_t
{
	TopLeft,
	TopRight,
	BottomLeft,
	BottomRight,
	Size
};

typedef int32_t LevelObjValue;
typedef std::pair<uint16_t, LevelObjValue> LevelObjProperty;

enum class PlayerDirection : size_t
{
	Front,
	FrontLeft,
	Left,
	BackLeft,
	Back,
	BackRight,
	Right,
	FrontRight,
	All,
	Size
};

enum class PlayerInventory : size_t
{
	Body,
	Belt,
	Stash,
	Size
};

enum class PlayerItemMount : size_t
{
	LeftHand,
	RightHand,
	Armor,
	Helmet,
	Amulet,
	LeftRing,
	RightRing,
	Size
};

enum class PlayerStatus : size_t
{
	Stand1,
	Stand2,
	Walk1,
	Walk2,
	Attack1,
	Attack2,
	Attack3,
	Attack4,
	Defend1,
	Defend2,
	Defend3,
	Defend4,
	Hit1,
	Hit2,
	Die1,
	Die2,
	Size
};

PlayerDirection getPlayerDirection(const MapCoord& currPos, const MapCoord& newPos);
