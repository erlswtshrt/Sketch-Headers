//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchRendering/MSOverlayItemImageCache.h>

@class NSColor;

@interface _TtC17SketchControllers21SpecOverlayImageCache : MSOverlayItemImageCache
{
    // Error parsing type: , name: measurementColor
    // Error parsing type: , name: guideColor
}

- (void).cxx_destruct;
- (id)createOverlayItemImagesForColorSpace:(struct CGColorSpace *)arg1 backingScale:(double)arg2;
@property(nonatomic, retain) NSColor *guideColor; // @synthesize guideColor;
@property(nonatomic, retain) NSColor *measurementColor; // @synthesize measurementColor;
- (void)dealloc;
- (id)init;

@end
