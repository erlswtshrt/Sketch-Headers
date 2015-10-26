#import "NSOperation.h"

@class NSBitmapImageRep;

@interface BCMagicWand : NSOperation
{
    unsigned long long _width;
    unsigned long long _height;
    int _tolerance;
    struct BCPixel _reference;
    NSBitmapImageRep *_bitmap;
    CDUnknownBlockType _wandCompletionBlock;
    NSBitmapImageRep *_maskImage;
    struct BCPixel *_pixels;
    struct BCPixel *_mask;
    unsigned long long _unvisitedIndex;
    unsigned long long _visitedIndex;
    char *_planned;
    unsigned long long *_nextVisits;
    struct CGPoint _startPoint;
}

@property(nonatomic) unsigned long long *nextVisits; // @synthesize nextVisits=_nextVisits;
@property(nonatomic) char *planned; // @synthesize planned=_planned;
@property(nonatomic) struct BCPixel reference; // @synthesize reference=_reference;
@property(nonatomic) unsigned long long visitedIndex; // @synthesize visitedIndex=_visitedIndex;
@property(nonatomic) unsigned long long unvisitedIndex; // @synthesize unvisitedIndex=_unvisitedIndex;
@property(nonatomic) struct BCPixel *mask; // @synthesize mask=_mask;
@property(nonatomic) struct BCPixel *pixels; // @synthesize pixels=_pixels;
@property(retain, nonatomic) NSBitmapImageRep *maskImage; // @synthesize maskImage=_maskImage;
@property(copy, nonatomic) CDUnknownBlockType wandCompletionBlock; // @synthesize wandCompletionBlock=_wandCompletionBlock;
@property(retain, nonatomic) NSBitmapImageRep *bitmap; // @synthesize bitmap=_bitmap;
@property(nonatomic) int tolerance; // @synthesize tolerance=_tolerance;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;
- (struct CGPoint)nextUnvisitedPoint;
- (void)pushVisit:(struct CGPoint)arg1;
- (void)collectVisitsForPoint:(struct CGPoint)arg1;
- (BOOL)pointMatch:(struct CGPoint)arg1;
- (void)run;
- (void)setUpMaskImage;
- (void)main;

@end

