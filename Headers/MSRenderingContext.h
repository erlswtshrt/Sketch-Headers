#import "NSObject.h"

@class MSStyleFillRenderer, MSStyleImageRenderer, MSStylePathRenderer, MSStyleTextRenderer, NSColor, NSColorSpace;

@interface MSRenderingContext : NSObject
{
    struct CGContext *_contextRef;
    struct CGAffineTransform _totalTransform;
    BOOL _isDrawingReflection;
    BOOL _disableSubpixelAliasing;
    BOOL _includeArtboardBackground;
    BOOL _isExporting;
    BOOL _isExportingToBitmap;
    BOOL _isDrawingPixelated;
    BOOL _shouldFlipShadows;
    BOOL _isDrawingMask;
    BOOL _skipNextArtisticStroke;
    int _internalBlendMode;
    unsigned long long _disableDrawingFillsCounter;
    unsigned long long _disableClippingFillsCounter;
    double _zoomLevel;
    NSColorSpace *_colorSpace;
    NSColor *_backgroundColor;
    id _rootObject;
    double _shadowScale;
    MSStylePathRenderer *_stylePathRenderer;
    MSStyleImageRenderer *_styleImageRenderer;
    MSStyleTextRenderer *_styleTextRenderer;
    MSStyleFillRenderer *_styleFillRenderer;
    double _alphaValue;
    struct CGPoint _scrollOrigin;
    struct CGRect _dirtyRect;
    struct CGAffineTransform _rotateFlipTransform;
}

+ (unsigned long long)defaultCGContextCreateFlags;
+ (id)contextWithContextRef:(struct CGContext *)arg1 atZoomLevel:(double)arg2;
@property(nonatomic) struct CGAffineTransform rotateFlipTransform; // @synthesize rotateFlipTransform=_rotateFlipTransform;
@property(nonatomic) double alphaValue; // @synthesize alphaValue=_alphaValue;
@property(nonatomic) int internalBlendMode; // @synthesize internalBlendMode=_internalBlendMode;
@property(retain, nonatomic) MSStyleFillRenderer *styleFillRenderer; // @synthesize styleFillRenderer=_styleFillRenderer;
@property(retain, nonatomic) MSStyleTextRenderer *styleTextRenderer; // @synthesize styleTextRenderer=_styleTextRenderer;
@property(retain, nonatomic) MSStyleImageRenderer *styleImageRenderer; // @synthesize styleImageRenderer=_styleImageRenderer;
@property(retain, nonatomic) MSStylePathRenderer *stylePathRenderer; // @synthesize stylePathRenderer=_stylePathRenderer;
@property(nonatomic) BOOL skipNextArtisticStroke; // @synthesize skipNextArtisticStroke=_skipNextArtisticStroke;
@property(nonatomic) BOOL isDrawingMask; // @synthesize isDrawingMask=_isDrawingMask;
@property(nonatomic) BOOL shouldFlipShadows; // @synthesize shouldFlipShadows=_shouldFlipShadows;
@property(nonatomic) double shadowScale; // @synthesize shadowScale=_shadowScale;
@property(retain, nonatomic) id rootObject; // @synthesize rootObject=_rootObject;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGRect dirtyRect; // @synthesize dirtyRect=_dirtyRect;
@property(nonatomic) BOOL isDrawingPixelated; // @synthesize isDrawingPixelated=_isDrawingPixelated;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) BOOL isExportingToBitmap; // @synthesize isExportingToBitmap=_isExportingToBitmap;
@property(nonatomic) BOOL isExporting; // @synthesize isExporting=_isExporting;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) unsigned long long disableClippingFillsCounter; // @synthesize disableClippingFillsCounter=_disableClippingFillsCounter;
@property(nonatomic) unsigned long long disableDrawingFillsCounter; // @synthesize disableDrawingFillsCounter=_disableDrawingFillsCounter;
@property(nonatomic) BOOL includeArtboardBackground; // @synthesize includeArtboardBackground=_includeArtboardBackground;
@property(nonatomic) BOOL disableSubpixelAliasing; // @synthesize disableSubpixelAliasing=_disableSubpixelAliasing;
@property(nonatomic) BOOL isDrawingReflection; // @synthesize isDrawingReflection=_isDrawingReflection;
- (void).cxx_destruct;
- (BOOL)shouldDisableSubpixelQuantization;
- (BOOL)shouldDrawLayer:(id)arg1;
- (BOOL)shouldClipFills;
- (void)doNotClipFillsInBlock:(CDUnknownBlockType)arg1;
- (BOOL)shouldDrawFills;
- (void)ifCondition:(BOOL)arg1 skipDrawingFillsInBlock:(CDUnknownBlockType)arg2;
- (void)applyLayerTransform:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)applySettings:(id)arg1 withOptions:(long long)arg2 inBlock:(CDUnknownBlockType)arg3;
- (void)prepareLayerDrawing:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)disableSubpixelAntialiasingFlags;
- (int)setBlendMode:(int)arg1;
- (double)setAlpha:(double)arg1;
- (double)multiplyAlphaBy:(double)arg1;
- (void)setShouldSubPixelAntialiasText:(BOOL)arg1;
- (void)endTransparencyLayer:(double)arg1;
- (double)beginTransparencyLayer;
- (double)beginTransparencyLayerInRect:(struct CGRect)arg1;
- (void)transparencyLayerInRect:(struct CGRect)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)transparencyLayerInBlock:(CDUnknownBlockType)arg1;
- (void)transparencyLayerInRect:(struct CGRect)arg1 mayOptimise:(BOOL)arg2 inBlock:(CDUnknownBlockType)arg3;
- (void)popGraphicsState;
- (void)pushGraphicsState;
- (struct CGAffineTransform)accumulatedRotateFlipTransform;
- (struct CGAffineTransform)accumulatedTransform;
- (void)concatTransform:(struct CGAffineTransform)arg1;
- (void)dealloc;
- (void)tearDown;
- (id)backingContext;
- (void)setUp;
@property(readonly, nonatomic) struct CGContext *contextRef; // @dynamic contextRef;
- (id)initWithContextRef:(struct CGContext *)arg1 atZoomLevel:(double)arg2;

@end

