#ifndef WATERMARKBASE_H
#define WATERMARKBASE_H
#include "Watermark.h"

class WatermarkBase : public Watermark
{
public:
    WatermarkBase(wxWindow* parent);
    virtual ~WatermarkBase();
};
#endif // WATERMARKBASE_H
