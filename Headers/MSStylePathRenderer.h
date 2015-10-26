#import "MSStyleRenderer.h"

@class MSStyledLayer;

@interface MSStylePathRenderer : MSStyleRenderer
{
    MSStyledLayer *_layer;
}

+ (void)drawStyleForPath:(id)arg1 layer:(id)arg2 inRect:(struct CGRect)arg3 fallbackColor:(id)arg4 context:(id)arg5;
@property(retain, nonatomic) MSStyledLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (long long)shadowStrokeType;
- (unsigned long long)shadowDrawingType;
- (void)drawInnerShadows;
- (BOOL)shadowFillShouldClip;
- (void)drawShadows;
- (void)clipFillsInBlock:(CDUnknownBlockType)arg1;
- (void)drawsFillWithFallbackColor:(id)arg1;
- (void)renderWithFallbackColor:(id)arg1;

@end

