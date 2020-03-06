//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchControllers/MSOverlayItemDataSource-Protocol.h>

@class NSArray, NSString;

@interface MSAlignmentEngineResult : NSObject <MSOverlayItemDataSource>
{
    NSArray *_guides;
    unsigned long long _snappedAxes;
    struct CGPoint _point;
}

+ (id)snappingResultWithPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) unsigned long long snappedAxes; // @synthesize snappedAxes=_snappedAxes;
@property(readonly, copy, nonatomic) NSArray *guides; // @synthesize guides=_guides;
@property(readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)overlayItems:(unsigned long long)arg1 parameters:(struct MSRenderingParameters)arg2;
- (id)overlayItemImages:(struct CGColorSpace *)arg1 backingScale:(double)arg2;
- (void)drawAtZoomValue:(double)arg1;
- (id)initWithPoint:(struct CGPoint)arg1 guides:(id)arg2 snappedAxes:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

