#ifndef PRINTWALL_H
#define PRINTWALL_H











class Printwall
{
public:
    Printwall();
    int getPlayFieldX() const;

    int getPlayFieldY() const;

    void setPlayFieldX(int newPlayFieldX);

    void setPlayFieldY(int newPlayFieldY);

private:
 int *mPlayFieldX;
 int *mPlayFieldY;
};

#endif // PRINTWALL_H
//
