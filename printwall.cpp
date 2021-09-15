#include "printwall.h"

Printwall::Printwall()
{
     mPlayFieldX=16;
     mPlayFieldY=20;
}

int Printwall::getPlayFieldX() const
{
    return mPlayFieldX;
}

int Printwall::getPlayFieldY() const
{
    return mPlayFieldY;
}

void Printwall::setPlayFieldX(int newPlayFieldX)
{
    mPlayFieldX = newPlayFieldX;
}

void Printwall::setPlayFieldY(int newPlayFieldY)
{
    mPlayFieldY = newPlayFieldY;
}
