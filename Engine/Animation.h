#pragma once
#include "Surface.h"
#include "Graphics.h"
#include "RectI.h"
#include <vector>

class Animation
{
public:
	Animation(int x, int y, int width, int height, int count, const Surface& sprite,
		float holdTime, Color chroma = Colors::Magenta);
	void Draw(const Vei2& pos, Graphics& gfx) const;
	void Draw(const Vei2& pos, RectI& clip, Graphics& gfx) const;
	void Update(float dt);
private:
	void Advance();
private:
	Color chroma;
	const Surface& sprite;
	std::vector <RectI> frames;
	int iCurFrame = 0;
	float holdTime;
	float curFrameTime = 0.0f;
	

};
