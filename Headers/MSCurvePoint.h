#import "_MSCurvePoint.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface MSCurvePoint : _MSCurvePoint <NSCoding, NSCopying>
{
}

+ (id)pointWithPoint:(struct CGPoint)arg1 curveTo:(struct CGPoint)arg2 curveFrom:(struct CGPoint)arg3;
+ (id)pointWithPoint:(struct CGPoint)arg1;
+ (id)point;
- (void)prepareForRemoval;
- (void)multiplyBy:(double)arg1;
- (void)movePointTo:(struct CGPoint)arg1;
- (void)moveCurveFromTo:(struct CGPoint)arg1 rect:(struct CGRect)arg2 flags:(long long)arg3;
- (void)moveCurveToTo:(struct CGPoint)arg1 rect:(struct CGRect)arg2 flags:(long long)arg3;
- (void)inferCurveMode;
- (BOOL)isRounded;
- (void)changeCurveModeTo:(long long)arg1;
- (Class)currentBehaviour;
- (id)initWithPoint:(struct CGPoint)arg1 curveTo:(struct CGPoint)arg2 curveFrom:(struct CGPoint)arg3;
@property(nonatomic) double cornerRadius;
- (id)initWithPoint:(struct CGPoint)arg1;

// Remaining properties
@property(nonatomic) struct CGPoint curveFrom;
@property(nonatomic) long long curveMode;
@property(nonatomic) struct CGPoint curveTo;
@property(nonatomic) BOOL hasCurveFrom;
@property(nonatomic) BOOL hasCurveTo;
@property(nonatomic) struct CGPoint point;

@end

