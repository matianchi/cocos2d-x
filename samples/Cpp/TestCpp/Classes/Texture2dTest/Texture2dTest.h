#ifndef __TEXTURE2D_TEST_H__
#define __TEXTURE2D_TEST_H__

#include "../testBasic.h"
#include "../BaseTest.h"


class TextureDemo : public BaseTest
{
public:
    virtual ~TextureDemo();
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();

    void restartCallback(Object* sender);
    void nextCallback(Object* sender);
    void backCallback(Object* sender);
};

class TextureTIFF : public TextureDemo
{
public:
    CREATE_FUNC(TextureTIFF);
    virtual std::string title() const override;
    virtual void onEnter();
};


class TextureTGA : public TextureDemo
{
public:
    CREATE_FUNC(TextureTGA);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TexturePNG : public TextureDemo
{
public:
    CREATE_FUNC(TexturePNG);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TextureJPEG : public TextureDemo
{
public:
    CREATE_FUNC(TextureJPEG);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TextureWEBP : public TextureDemo
{
public:
    CREATE_FUNC(TextureWEBP);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TextureMipMap : public TextureDemo
{
public:
    CREATE_FUNC(TextureMipMap);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRTest : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRTest);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TexturePVR2BPP : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVR2BPP);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TexturePVR4BPP : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVR4BPP);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TexturePVRRGBA8888 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRRGBA8888);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TexturePVRBGRA8888 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRBGRA8888);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TexturePVRRGBA4444 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRRGBA4444);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TexturePVRRGBA4444GZ : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRRGBA4444GZ);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRRGBA4444CCZ : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRRGBA4444CCZ);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRRGBA5551 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRRGBA5551);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TexturePVRRGB565 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRRGB565);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TexturePVRRGB888 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRRGB888);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TexturePVRA8 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRA8);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TexturePVRI8 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRI8);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TexturePVRAI88 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRAI88);
    virtual std::string title() const override;
    virtual void onEnter();
};

class TexturePVR2BPPv3 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVR2BPPv3);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRII2BPPv3 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRII2BPPv3);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVR4BPPv3 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVR4BPPv3);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRII4BPPv3 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRII4BPPv3);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRRGBA8888v3 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRRGBA8888v3);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRBGRA8888v3 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRBGRA8888v3);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRRGBA4444v3 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRRGBA4444v3);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRRGBA5551v3 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRRGBA5551v3);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRRGB565v3 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRRGB565v3);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRRGB888v3 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRRGB888v3);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRA8v3 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRA8v3);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRI8v3 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRI8v3);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRAI88v3 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRAI88v3);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRBadEncoding : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRBadEncoding);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRMipMap : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRMipMap);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRMipMap2 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRMipMap2);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRNonSquare : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRNonSquare);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRNPOT4444 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRNPOT4444);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePVRNPOT8888 : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRNPOT8888);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TextureAlias : public TextureDemo
{
public:
    CREATE_FUNC(TextureAlias);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TexturePixelFormat : public TextureDemo
{
public:
    CREATE_FUNC(TexturePixelFormat);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TextureBlend : public TextureDemo
{
public:
    CREATE_FUNC(TextureBlend);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TextureAsync : public TextureDemo
{
public:
    CREATE_FUNC(TextureAsync);
    virtual ~TextureAsync();
    void loadImages(float dt);
    void imageLoaded(Object* pObj);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
private:
    int _imageOffset;
};

class TextureGlRepeat : public TextureDemo
{
public:
    CREATE_FUNC(TextureGlRepeat);
    virtual ~TextureGlRepeat();
    virtual std::string title() const override;

    virtual void onEnter();
};

class TextureGlClamp : public TextureDemo
{
public:
    CREATE_FUNC(TextureGlClamp);
    virtual ~TextureGlClamp();
    virtual std::string title() const override;

    virtual void onEnter();
};

class TextureSizeTest : public TextureDemo
{
public:
    CREATE_FUNC(TextureSizeTest);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TextureCache1 : public TextureDemo
{
public:
    CREATE_FUNC(TextureCache1);
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
};

class TextureDrawAtPoint : public TextureDemo
{
public:
    CREATE_FUNC(TextureDrawAtPoint);
    ~TextureDrawAtPoint();
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
    virtual void draw();
private:
    Texture2D* _tex1, *_Tex2F;
};

class TextureDrawInRect : public TextureDemo
{
public:
    CREATE_FUNC(TextureDrawInRect);
    ~TextureDrawInRect();
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    virtual void onEnter();
    virtual void draw();
private:
    Texture2D* _tex1, *_Tex2F;
};

class TextureTestScene : public TestScene
{
public:
    CREATE_FUNC(TextureTestScene);
    virtual void runThisTest();
};

class TextureMemoryAlloc : public TextureDemo
{
public:
    CREATE_FUNC(TextureMemoryAlloc);
    virtual void onEnter();
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    void updateImage(Object *sender);
    void changeBackgroundVisible(Object *sender);
private:
    Sprite *_background;
};

class TexturePVRv3Premult : public TextureDemo
{
public:
    CREATE_FUNC(TexturePVRv3Premult);
    TexturePVRv3Premult();
    
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
    
    void transformSprite(cocos2d::Sprite *sprite);
};

// ETC1 texture format test
class TextureETC1 : public TextureDemo
{
public:
    CREATE_FUNC(TextureETC1);
    TextureETC1();
    
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
};

// S3TC Dxt1 texture format test
class TextureS3TCDxt1 : public TextureDemo
{
public:
    CREATE_FUNC(TextureS3TCDxt1);
    TextureS3TCDxt1();
    
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
};

// S3TC Dxt3 texture format test
class TextureS3TCDxt3 : public TextureDemo
{
public:
    CREATE_FUNC(TextureS3TCDxt3);
    TextureS3TCDxt3();
    
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
};

// S3TC Dxt5 texture format test
class TextureS3TCDxt5 : public TextureDemo
{
public:
    CREATE_FUNC(TextureS3TCDxt5);
    TextureS3TCDxt5();
    
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
};

// ATITC RGB texture format test
class TextureATITCRGB : public TextureDemo
{
public:
    CREATE_FUNC(TextureATITCRGB);
    TextureATITCRGB();
    
    virtual std::string title() const override;
    virtual std::string subtitle() const override;    
};

//ATITC RGBA Explicit texture format test
class TextureATITCExplicit : public TextureDemo
{
public:
    CREATE_FUNC(TextureATITCExplicit);
    TextureATITCExplicit();
    
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
};

//ATITC RGBA Interpolated texture format test
class TextureATITCInterpolated : public TextureDemo
{
public:
    CREATE_FUNC(TextureATITCInterpolated);
    TextureATITCInterpolated();
    
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
};


// RGB888 texture convert test
class TextureConvertRGB888 : public TextureDemo
{
public:
    CREATE_FUNC(TextureConvertRGB888);
    virtual void onEnter();
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
};

// RGBA8888 texture convert test
class TextureConvertRGBA8888 : public TextureDemo
{
public:
    CREATE_FUNC(TextureConvertRGBA8888);
    virtual void onEnter();
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
};

// I8 texture convert test
class TextureConvertI8 : public TextureDemo
{
public:
    CREATE_FUNC(TextureConvertI8);
    virtual void onEnter();
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
};

// AI88 texture convert test
class TextureConvertAI88 : public TextureDemo
{
public:
    CREATE_FUNC(TextureConvertAI88);
    virtual void onEnter();
    virtual std::string title() const override;
    virtual std::string subtitle() const override;
};

#endif // __TEXTURE2D_TEST_H__
